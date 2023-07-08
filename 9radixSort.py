import math

def radixSort(A):
    maxValue = max(A)
    numDigits = math.ceil(math.log10(maxValue))
    bucket =[[] for _ in range(10)]
    for i in range(numDigits):
        for x in A:
            y = (x // 10**i) % 10
            bucket[y].append(x)
        A.clear()
        for j in range(10):
            A.extend(bucket[j])
            bucket[j].clear()

def radixSort1(A):
    B = [0 for i in range(len(A))]
    for i in range(len(A)):
        B[i] = -1 * A[i]
    maxValue = max(B)
    numDigits = math.ceil(math.log10(maxValue))
    bucket =[[] for _ in range(10)]
    for i in range(numDigits):
        for x in B:
            y = (x // 10**i) % 10
            bucket[y].append(x)
        B.clear()
        for j in range(10):
            B.extend(bucket[j])
            bucket[j].clear()
    for i in range(len(B)):
        A[i] = -1 * B[i]
    A.reverse()

A = [-1,-9,-33,-72,-69,-44,-92,-76,-128]
print(A)
radixSort1(A)
print(A)