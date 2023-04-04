import sys
sys.setrecursionlimit(10**6) #백준에선 재귀함수 호출을 1000번까지 해놔서 10^6만큼 가능하게 바꿈

def Node(arr, first, last) :
    tpindex = first + 1
    if(first == last) :
        return
    elif(first == last - 1) :
        print(arr[first])
        return
    else :
        for i in range(tpindex, last) :
            if(arr[first] < arr[i]) :
                tpindex = i
                break
    Node(arr, first + 1, tpindex)
    Node(arr, tpindex, last)
    print(arr[first])

if __name__ == "__main__" :
    N = 0
    arr = [0 for i in range(10000)]
    while True :
        try :
            arr[N] = int(input(""))
            N += 1
        except EOFError :
            break
    Node(arr, 0, N)