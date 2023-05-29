def mergeSort(A, p:int, r:int): # 리스트 A[p, ..., r]을 병합정렬
    if p < r:                   # 경계조건, p == r-1이면 마지막 원소까지 정렬하기 때문에 마지막 호출임
        q = (p + r) // 2        # 중간지점을 찾아 q에 저장
        mergeSort(A, p, q)      # q를 기준으로 리스트 A의 왼쪽을 다시 병합정렬
        mergeSort(A, q+1, r)    # q를 기준으로 리스트 A의 오른쪽을 다시 병합정렬
        merge(A, p, q, r)       # 정렬이 끝난 왼쪽, 오른쪽을 병합

def merge(A, p:int, q:int, r:int):          # 리스트 A를 q를 기준으로 나눈 왼쪽, 오른쪽을 병합
    i = p;  j = q + 1;  t = 0               # i는 왼쪽 A의 시작점, j는 오른쪽 A의 시작점, t는 tmp에 담을 위치
    tmp = [0 for i in range(len(A))]        # 병합된 리스트를 임시로 저장할 리스트
    while i <= q and j <= r:                # i가 q보다 작거나 같고 j가 r보다 작거나 같으면 반복
        if A[i] <= A[j]:                    # 왼쪽 A의 원소가 오른쪽 A의 원소보다 작거나 같으면
            tmp[t] = A[i];  t += 1; i+= 1   # 왼쪽 A의 원소를 tmp에 저장
        else:                               # 왼쪽 A의 원소가 오른쪽 A의 원소보다 크면
            tmp[t] = A[j];  t += 1;  j+= 1  # 오른쪽 A의 원소를 tmp에 저장
    while i <= q:                           # 왼쪽 A가 남았을 때 반복
        tmp[t] = A[i];  t += 1;  i += 1     # tmp에 왼쪽 A의 원소 저장
    while j <= r:                           # 오른쪽 A가 남았을 때 반복
        tmp[t] = A[j];  t+= 1;  j += 1      # tmp에 오른쪽 A의 원소 저장
    i = p;  t = 0                           # 임시로 저장한 tmp를 A에 옮기기 위함
    while i <= r:                           # 원소를 다 채우지 않았다면 반복
        A[i] = tmp[t];  t += 1; i+= 1       # 리스트 A에 임시 리스트 tmp 원소들을 옮김

#---------------------------------------------------------#

def mergeSortFast(A, B, p:int, r:int):
    if p < r:
        q = (p+r) // 2
        mergeSortFast(A, B, p, q)
        mergeSortFast(A, B, q+1, r)
        mergeFast(A, B, p, q, r)

def mergeFast(A, B, p:int, q:int, r:int):
    i = p;  j = q+1;    t = 0
    while i <= q and j <= r:
        if A[i] <= A[j]:
            B[t] = A[i];    t += 1; i += 1
        else:
            B[t] = A[j];    t += 1; j += 1
    while i <= q:
        B[t] = A[i];    t += 1; i += 1
    while j <= r:
        B[t] = A[j];    t += 1; j += 1
    i = p;  t = 0
    while i <= r:
        A[i] = B[t];  t += 1; i += 1

#---------------------Q19-----------------------------------#

def mergeSortFastBetter(A, B, org, p:int, r:int):
    if p < r:
        q = (p+r) // 2
        mergeSortFastBetter(A, B, org, p, q)
        mergeSortFastBetter(A, B, org, q+1, r)
        mergeFastBetter(A, B, org, p, q, r)


def mergeFastBetter(A, B, org, p:int, q:int, r:int):
    i = p;  j = q+1;    t = 0
    while i <= q and j <= r:
        if A[i] <= A[j]:
            B[t] = A[i];    t += 1; i += 1
        else:
            B[t] = A[j];    t += 1; j += 1
    while i <= q:
        B[t] = A[i];    t += 1; i += 1
    while j <= r:
        B[t] = A[j];    t += 1; j += 1
    A, B = B, A
    


# import random
# import time

# mergeSortBetterTime = 0
# mergeSortTime = 0
# # for i in range(1000):
# A = []
# for i in range(4):
#     A.append(random.randint(0, 100))

# B = A.copy()
# tmp = [0 for i in range(len(B))]
# org = B
# start = time.time()
# mergeSortFastBetter(B, tmp, org, 0, len(B)-1)
# if org != B:
#         for i in range(len(B)):
#             org[i] = tmp[i]
# end  = time.time()
# mergeSortBetterTime += end - start

# C = A.copy()
# start = time.time()
# mergeSort(C, 0, len(C)-1)
# end = time.time()
# mergeSortTime += end - start


# print("MergeSortBetter Processing Time: ", mergeSortBetterTime/1000)
# print("MergeSort Processing Time: ", mergeSortTime/1000)
# print("List A:", A)
# A.sort()
# print("List S:", A)
# print("List B:", B)
# print("List T:", tmp)