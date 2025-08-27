#include <iostream>

using namespace std;

int main()
{
    int N, K, max, count = 0, K_bigger, K_lower;
    cin >> N >> K;

    int arr[N];
    for(int i = 0; i < N; i++) // 배열 입력
        cin >> arr[i];

    for(int i = N - 1; i > 0; i--) // arr[끝]과 arr[0]~arr[끝-1] 중 가장 큰 값 비교
    {
        int is_change = 0, change_index = 0;
        max = arr[i];
        int before_max = arr[i-1], before_max_index = i - 1; // arr[0]~arr[끝-1] max 찾을려고 선언
        for(int j = i - 1; j >= 0; j--) // arr[0]~arr[끝-1]중에서 max 찾기
        {
            if(arr[j] > before_max)
            {
                before_max = arr[j];
                before_max_index = j;
            }
        }

        if(before_max > max) // arr[0]~arr[끝-1]에서 찾은 max 와 arr[끝] 비교
        {
            change_index = before_max; // arr[0]~arr[끝-1]에서 찾은 max를 임시 저장
            arr[before_max_index] = max; // arr[0]~arr[끝-1]에서 찾은 max 인덱스에 arr[끝] 값 넣기
            arr[i] = change_index; // arr[끝]에 arr[0]~arr[끝-1]에서 찾은 max값 넣기
            
            is_change = 1; // 교환 횟수 알아보려고
        }

        if(is_change) // 교환했으면 실행
        {
            count++; // K 값과 비교 하기 위해 교환횟수 count 세기
            if(count == K) // count와 K가 같으면 그때 바뀐 값 출력해야해서 큰 값, 작은 값 변수에 저장
            {
                K_bigger = arr[i];
                K_lower = arr[before_max_index];
            }
        }
    }

    if(count >= K)
        cout << K_lower << " " << K_bigger << endl;
    else
        cout << -1 << endl;
}