def mergeSortBetter(A, p:int, r:int):
    if p < r:
        q = (p + r) // 2
        mergeSortBetter(A, p, q)
        mergeSortBetter(A, q+1, r)
        mergeBetter(A, p, q, r)

def mergeBetter(A, p:int, q:int, r:int):
    i = p;  j = q + 1;  t = 0
    tmp = [0 for i in range(len(A))]
    while i <= q and j <= r:
        if A[i] <= A[j]:
            tmp[t] = A[i];  t += 1; i+= 1
        else:
            tmp[t] = A[j];  t += 1;  j+= 1
    while i <= q:
        tmp[t] = A[i];  t += 1;  i += 1
    while j <= r:
        tmp[t] = A[j];  t+= 1;  j += 1
    i = p;  t = 0
    while i <= r:
        A[i] = tmp[t];  t += 1; i+= 1

def init(tmp:list):
    tmp[2] = 99

# import random
# A = []
# for value in range(10):
#     A.append(random.randint(0,100))
# B = A.copy()
# print(A)
# print(B)
# A.sort()
# A, B = B, A
# print(A)
# print(B)

tmp = [0,1,2,3,4,5]
A = [6,7,8,9,10]
A, tmp = tmp, A
print(tmp)
print(A)

org = A
print(org)