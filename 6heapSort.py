def heapSort(A):                        # 리스트 A를 힙정렬
    buildHeap(A)                        # 리스트 A를 힙으로 만듦
    for last in range(len(A)-1, 0, -1): # 끝을 하나씩 줄여가면서 반복
        A[last], A[0] = A[0], A[last]   # 스며내리기한 원소 중 제일 작은 A[0]와 제일 큰 A[last] 교환
        percolateDown(A, 0, last-1)     # 리스트 A의 0부터 last-1까지 스며내리기

def buildHeap(A):                           # 리스트 A를 힙으로 만듦
    for i in range(len(A)-1, -1, -1):  # 부모노드 index들 순서대로 스며내리기
        percolateDown(A, i, len(A)-1)       # 리스트 A의 i부터 스며내리기

def percolateDown(A, k:int, end:int):            # 리스트 A의 k부터 end까지 스며내리기
    child = 2*k+1                                # 왼쪽 자식 노드의 index
    right = 2*k+2                                # 오른쪽 자식 노드의 index
    if child <= end:                             # child가 비교해야할 index이면 실행
        if right <= end and A[child] < A[right]: # right가 비교해야할 index이고 오른쪽 자식이 더 크다면
            child = right                        # 더 큰 자식 노드의 index를 child에 저장
        if A[k] < A[child]:                      # 부모 노드가 자식 노드보다 작으면
            A[k], A[child] = A[child], A[k]      # 부모 노드와 자식 노드 교환
            percolateDown(A, child, end)         # 다시 스며내리기
            
#---------------------------------------------------------#

import random
A = []
for value in range(30):
    A.append(random.randint(0, 100))
B = A.copy()
heapSort(B)

print(B)