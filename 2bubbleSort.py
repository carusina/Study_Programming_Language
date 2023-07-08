def bubbleSort(A):
    for numElements in range(len(A), 0, -1):
        for i in range(numElements-1):
            if A[i] > A[i+1]:
                A[i], A[i+1] = A[i+1], A[i]

#---------------------------------------------------------#

def bubbleSortRec(A, n):                # n개의 원소를 가지를 리스트 A를 버블정렬
    for i in range(n-1):                # A[i]와 A[i+1]를 비교하기 위함
        if A[i] > A[i+1]:               # A[i]가 A[i+1]보다 크다면
            A[i], A[i+1] = A[i+1], A[i] # A[i]와 A[i+1]의 index를 바꿈
    if n > 1:                           # 경계조건, n==2이면 A[0]와 A[1]을 비교하기 때문에 마지막 호출임 
        bubbleSortRec(A, n-1)           # 마지막 원소를 제와한 나머지 원소들을 다시 버블정렬

def bubbleSortRecBetter(A, n):                # n개의 원소를 가지를 리스트 A를 버블정렬
    change = False
    for i in range(n-1):                # A[i]와 A[i+1]를 비교하기 위함
        if A[i] > A[i+1]:               # A[i]가 A[i+1]보다 크다면
            A[i], A[i+1] = A[i+1], A[i] # A[i]와 A[i+1]의 index를 바꿈
            change = True
    if change == False:
        return None
    if n > 1:              # 경계조건, n==2이면 A[0]와 A[1]을 비교하기 때문에 마지막 호출임
        bubbleSortRecBetter(A, n-1)           # 마지막 원소를 제와한 나머지 원소들을 다시 버블정렬

import random
import time
import sys

sys.setrecursionlimit(100000)
listLength = 300
times = 10000
bubbleSortRecTime = 0
bubbleSortRecBetterTime = 0

for i in range(times):
    A = []
    for value in range(listLength):
        A.append(random.randint(0, 100))

    B = A.copy()
    start1 = time.time()
    bubbleSortRecBetter(B, len(B))
    end1 = time.time()
    bubbleSortRecTime += end1 - start1

    B = A.copy()
    start2 = time.time()
    bubbleSortRecBetter(B, len(B))
    end2 = time.time()
    bubbleSortRecBetterTime += end2 - start2

print("bubbleSortRec Processing Time:       ", bubbleSortRecTime/times)
print("bubbleSortRecBetter Processing Time: ", bubbleSortRecBetterTime/times)

# A.sort()
# print(A)
# print(B)