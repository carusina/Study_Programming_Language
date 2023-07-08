def quickSort(A, p:int, r:int): # 리스트 A[p, ..., r]을 퀵정렬
    if p < r:                   # 경계조건, p == r-1이면 마지막 원소까지 정렬하기 때문에 마지막 호출임
        q = partition(A, p, r)  # 리스트 A를 분할
        quickSort(A, p, q-1)    # 분할된 리스트 A의 왼쪽 부분을 다시 퀵정렬
        quickSort(A, q+1, r)    # 분할된 리스트 A의 오른쪽 부분을 다시 퀵정렬

def partition(A, p:int, r:int) -> int:  # 리스트 A[p, ..., r]을 분할
    x = A[r]                            # 기준 원소 A[r]을 x에 저장
    i = p-1                             # 기준 원소 x의 index 찾기
    for j in range(p, r):               # A[p]~A[r-1]을 x와 비교하기 위함
        if A[j] < x:                    # x가 A[j]보다 크면
            i += 1                      # i를 오른쪽으로 쉬프트
            A[i], A[j] = A[j], A[i]     # A[i]와 A[j]의 위치 교환
    A[i+1], A[r] = A[r], A[i+1]         # A[i]는 x보다 작으므로 A[i+1]과 기준 원소인 A[r]을 교환
    return i+1                          # 기준 원소의 index를 리턴

#-------------------------Q17------------------------------#

def quickSortBetter(A, p:int, r:int):   # 리스트 A[p, ..., r]을 개선 퀵정렬
    if p < r:                           # 경계조건, p == r-1이면 마지막 원소까지 정렬하기 때문에 마지막 호출임
        q = partitionBetter(A, p, r)    # 리스트 A를 분할
        quickSortBetter(A, p, q-1)      # 분할된 리스트 A의 왼쪽 부분을 다시 퀵정렬
        quickSortBetter(A, q+1, r)      # 분할된 리스트 A의 오른쪽 부분을 다시 퀵정렬

def partitionBetter(A, p:int, r:int) -> int:    # 리스트 A[p, ..., r]을 분할
    if r-p >= 2:                                # 정렬할 원소의 개수가 3개 이상일 때
        q = (p+r)//2                            # q에 p와 r의 중간점 저장
        tmp = [A[p], A[q], A[r]]                # A[p], A[q], A[r]을 임시 리스트에 저장
        tmp.sort()                              # 리스트 tmp 오름차순 정렬
        A[p], A[r] = tmp[0], tmp[2]             # A[p]와 A[r]에 각각 가장 작은 원소와 가장 큰 원소를 저장
        A[q], A[r-1] = A[r-1], tmp[1]           # A[q]와 A[r-1]에 각각 A[r-1]과 tmp[1]을 저장
                                                # tmp에서 가장 작은 값과 가장 큰 값은 각각 A[p, ..., q, ..., r]에서
                                                # A[p]와 A[r]에 위치해 있으므로 A[p] <= tmp[1] <= A[r]이다
                                                # 그래서 대소 비교할 범위가 2개 줄어듦 그러므로 tmp[1]을 A[r-1]에 위치
        x = A[r-1]                              # 기준 원소 A[r-1]을 x에 저장
        i = p                                   # 기준 원소 x의 index 찾기
        for j in range(p+1, r-1):               # A[p+1]~A[r-2]을 x와 비교하기 위함
            if A[j] < x:                        # x가 A[j]보다 크면
                i += 1                          # i를 오른쪽으로 쉬프트
                A[i], A[j] = A[j], A[i]         # A[i]와 A[j]의 위치 교환
        A[i+1], A[r-1] = A[r-1], A[i+1]         # A[i]는 x보다 작으므로 A[i+1]과 기준 원소인 A[r-1]을 교환
        return i+1                              # 기준 원소의 index를 리턴

    else: # 정렬할 원소의 개수가 3개 미만일 때 기존의 퀵정렬처럼 정렬
        x = A[r]
        i = p-1
        for j in range(p, r):
            if A[j] < x:
                i += 1
                A[i], A[j] = A[j], A[i]
        A[i+1], A[r] = A[r], A[i+1]
        return i+1



# import random
# import time

# listLength = 300
# sum_time_quick = 0; sum_time_quickBetter = 0

# for i in range(1000):
#     A = []
#     for value in range(listLength):
#         A.append(random.randint(0, 0))

#     B = A.copy()
#     start = time.time()
#     quickSort(B, 0, len(B)-1)
#     end = time.time()
#     sum_time_quick += end - start

#     B = []
#     B = A.copy()
#     start = time.time()
#     quickSortBetter(B, 0, len(B)-1)
#     end = time.time()
#     sum_time_quickBetter += end - start

# print("QuickSort Processing Time: ", sum_time_quick / 1000)
# print("QuickSortBetter Processing Time: ", sum_time_quickBetter / 1000)