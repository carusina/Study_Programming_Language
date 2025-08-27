from selectionSort import * # 선택정렬 import
from bubbleSort import *    # 버블정렬 import
from insertionSort import * # 삽입정렬 import
from mergeSort import *     # 병합정렬 import
from quickSort import *     # 퀵정렬 import
from heapSort import *      # 힙정렬 import
from shellSort import *     # 쉘정렬 import
import random               # 0~100 사이 자연수를 랜덤으로 가지는 리스트 만들기 위해서
import time                 # 수행시간 측정
import sys                  # 재귀호출 제한 횟수 설정
 
sys.setrecursionlimit(1000000)  # 재귀호출 제한 횟수 설정
listLength= 300                 # 리스트 길이 설정
times = 1000                    # 반복횟수 설정

# 각 정렬 알고리즘의 수행시간 총합을 구하는 딕셔너리
sum_time = {"selectionSortRec":0, "bubbleSortRec":0, "insertionSortRec":0,
            "mergeSort":0, "quickSort":0, "heapSort":0, "shellSort":0}

for i in range(times):                   # 설정한 횟수만큼 반복
    A = []                               # 빈 리스트 A 생성
    for value in range(0, listLength):   # 설정한 길이를 가지는 리스트 A 만들기
        A.append(random.randint(0,100))  # 0~100 사이 자연수를 랜덤으로 구해 A에 append
    
    #selectionSortRec 수행시간 측정
    B = A.copy()                                # 리스트 A의 내용을 B에 복사
    start = time.time()                         # 시작 시간
    selectionSortRec(B, listLength)             # 리스트 B 선택정렬
    end = time.time()                           # 종료 시간
    sum_time["selectionSortRec"] += end - start # 수행시간 총합 구하기

    #bubbleSortRec 수행시간 측정
    B = A.copy()
    start = time.time()
    bubbleSortRec(B, listLength)
    end = time.time()
    sum_time["bubbleSortRec"] += end - start

    #insertionSortRec 수행시간 측정
    B = A.copy()
    start = time.time()
    insertionSortRec(B, 1, listLength-1)
    end = time.time()
    sum_time["insertionSortRec"] += end - start

    #mergeSort 수행시간 측정
    B = A.copy()
    start = time.time()
    mergeSort(B, 0, listLength-1)
    end = time.time()
    sum_time["mergeSort"] += end - start

    #quickSort 수행시간 측정
    B = A.copy()
    start = time.time()
    quickSort(B, 0, listLength-1)
    end = time.time()
    sum_time["quickSort"] += end - start

    #heapSort 수행시간 측정
    B = A.copy()
    start = time.time()
    heapSort(B)
    end = time.time()
    sum_time["heapSort"] += end - start

    #shellSort 수행시간 측정
    B = A.copy()
    start = time.time()
    shellSort(B)
    end = time.time()
    sum_time["shellSort"] += end - start
    
for value in sum_time: # 각 정렬 알고리즘의 수행시간을 출력
    print(value, "Average Processing Time:", end = ' ')
    print(sum_time[value]/times) # 각 정렬 알고리즘의 평균 수행시간 출력