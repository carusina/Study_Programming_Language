# 기수 행렬 (범위가 존재하는 원소의 갯수로 리스트를 정렬)
def countingSort(A):
    k = max(A) # max 값 k에 저장
    C = [0 for _ in range(k+1)] # k개의 인덱스를 갖는 리스트 생성
    for j in range(len(A)): # A의 원소의 값을 인덱스로 갖는 리스트 C에 그 인덱스에 +1해서 갯수
        C[A[j]] += 1
    for i in range(1, k+1): # A의 원소의 값을 인덱스로 갖는 리스트 C에 이제 그 원소가 마지막에 위치할 인덱스를 C에 저장
        C[i] = C[i]+ C[i-1]
    B = [0 for _ in range(len(A))] # A 대신할 리스트 생성
    for j in range(len(A)-1, -1, -1): # 정렬될 리스트 B 만들기
        B[C[A[j]]-1] = A[j]
        C[A[j]] -= 1
    return B