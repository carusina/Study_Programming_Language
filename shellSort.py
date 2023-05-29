def shellSort(A):                       # 리스트 A를 쉘정렬
    H = gapSequence(len(A))             # 리스트 A의 크기를 기준으로 갭 수열을 만듦
    for h in H:                         # h에 만든 갭수열을 하나씩 넣으면서 크기 비교
        for k in range(h):              # k에 0~h-1을 넣으며 반복
            stepInsertionSort(A, k, h)  # 리스트 A[k, k+h, k+2h, ...]을 정렬

def stepInsertionSort(A, k:int, h:int):     # 리스트 A[k, k+h, k+2h, ...]을 정렬
    for i in range(k + h, len(A), h):       # h의 차이만큼의 index들을 비교
        j = i - h                           # A[i]와 비교할 h만큼 차이나는 index를 j에 저장
        newItem = A[i]                      # A[j]와 비교할 A[i]의 원소를 newItem에 저장
        while 0 <= j and newItem < A[j]:    # j가 0 이상이고 A[j]가 newItem보다 크면 반복 newItem의 index 찾기
            A[j+h] = A[j]                   # A[j+h]와 A[j]의 위치 교환
            j -= h                          # h만큼 차이가 더 나는 index를 j에 저장
        A[j+h] = newItem                    # newItem이 들어갈 index인 j+h에 값 저장

def gapSequence(n:int) -> list: # 갭 수열 만들기
    H = [1]; gap = 1            # 수열을 담을 리스트 H와 gap의 초기 상태
    while gap < n/5:            #리스트 H에 담을 gap 만들기
        gap = 3 * gap +1        # 1, 4, 13, ...
        H.append(gap)           # 만든 gap을 리스트 H에 추가
    H.reverse()                 # 리스트 H를 내림차순으로 정렬
    return H                    # 리스트 H 반환

#---------------------------------------------------------#

# import random
# import time
# A = []
# for value in range(10000):
#     A.append(random.randint(0, 100))
# B = A.copy()
# start = time.time()
# shellSort(B)
# end = time.time()
# print(end - start)