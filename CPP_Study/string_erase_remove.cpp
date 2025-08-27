#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence1 = "I hate coding";

    sentence1.erase(0, 7); // 1번째 인자는 시작할 인덱스 2번째는 지울 문자 개수
    cout << "I like " << sentence1 << endl;

    string sentence2 = "I like coding";

    sentence2.erase(remove(sentence2.begin(), sentence2.end(), ' '), sentence2.end());
    /* remove 함수는 특정 문자가 있는 인덱스를 리턴해줌 첫번째 인자는 문자열 시작위치 두번째 인자는 문자열 마지막 위치 3번째 인자는 찾고자하는 문자
        또한 문자를 지운다기보단 맨뒤로 보낸 후 잔여물의 시작 '주소'를 리턴
        .begin()은 리스트의 시작'주소'를 리턴, .end()는 리스트의 마지막 주소 한 칸 뒤 주소를 리턴*/
    cout << sentence2 << endl;

    return 0;
}