def selectionSort(A):
    for last in range(len(A)-1, 0, -1):
        k = theLargest(A, last)
        A[k], A[last] = A[last], A[k]

def theLargest(A, last:int) -> int:
    largest = 0
    for i in range(last+1):
        if A[i] > A[largest]:
            largest = i
    return largest

#---------------------------------------------------------#

def selectionSortRec(A, n):            # n개의 원소를 가지는 리스트 A를 선택정렬
    if(n > 1):                         # 경계조건, n==2이면 0번째와 1번째 중 큰 원소를 찾기 때문에 n==2일 때 마지막 호출 
        k = theLargestRec(A, n)        # 리스트 A의 0 ~ n-1번째 원소 중 가장 큰 값을 가지는 index를 k에 저장
        A[k], A[n-1] = A[n-1], A[k]    # k번째 원소와 마지막 원소의 위치를 바꿈
        selectionSortRec(A, n-1)       # 마지막 원소를 제외한 나머지 원소들을 다시 선택정렬

def theLargestRec(A, last:int) -> int: # 리스트 A의 0 ~ last-1번째 원소 중 가장 큰 값을 가지는 index를 리턴
    largest = 0                        # 처음 비교를 위한 index로 0번째 선택
    for i in range(last):              # 0~last-1의 index중 가장 큰 값을 찾기
        if A[i] > A[largest]:          # A[i]와 A[largest]를 비교 후 A[i]가 더 크다면
            largest = i                # largest에 i 저장
    return largest                     # 가장 큰 값의 index를 리턴

# import random
# import time
# import sys

# sys.setrecursionlimit(100000)
# A = []
# for value in range(10000):
#     A.append(random.randint(0, 100))
# B = A.copy()
# start = time.time()
# selectionSortRec(B, len(B))
# end = time.time()
# print(end - start)