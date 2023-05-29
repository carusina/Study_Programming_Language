def insertionSort(A):
    for i in range(1, len(A)):
        loc = i-1
        newItem = A[i]
        while loc >= 0 and newItem < A[loc]:
            A[loc+1] = A[loc]
            loc -= 1
        A[loc+1] = newItem

#---------------------------------------------------------#

def insertionSortRec(A, start, end):        # 리스트 A를 삽입정렬, start는 비교할 원소의 index, end는 마지막 index로 경계조건을 위함
    loc = start-1                           # 0~start 중에서 A[start]가 들어갈 index를 찾기 위함
    newItem = A[start]                      # newItem에 A[start]를 저장 A[start]의 원소는 비교하면서 바뀔수도 있기 때문
    while loc >= 0 and newItem < A[loc]:    # loc가 유효한 index이고 newItem이 A[loc]보다 작으면 반복
        A[loc+1] = A[loc]                   # A[loc]를 왼쪽으로 쉬프트
        loc -= 1                            # loc의 크기를 1 줄여서 다시 반복
    A[loc+1] = newItem                      # newItem이 들어갈 index는 loc+1
    if start < end:                         # 경계조건, start == end-1이면 리스트 A의 마지막 원소가 들어갈 위치를 찾기 때문에 마지막 호출임
        insertionSortRec(A, start+1, end)   # A[start+1]의 위치를 찾기 위해 다시 삽입령렬

# import random
# A = []
# for value in range(30):
#     A.append(random.randint(0, 100))
# B = A.copy()
# insertionSortRec(B, 1, len(B)-1)
# print(B)