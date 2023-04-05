#include <iostream>
#include <ctime>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> v;
    string word;

    v.push_back("airplane");

    // clock() : 프로그램의 실행 시작으로부터 경과된 시간을 clock ticks 수로 반환 = ms
    clock_t startTime = clock();

    while (1) {

        // 현재 단어 출력
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
            if (i != v.size() - 1) cout << "->";
        }

        cout << endl << "다음 단어를 입력하세요 : ";
        cin >> word;
        
        // 시간 체크
        clock_t endTime = clock();

        // CLOCKS_PER_SEC = 1000
        // cout << CLOCKS_PER_SEC << endl;
        if ((endTime - startTime) / CLOCKS_PER_SEC > 30) {
            cout << "타임 오버!\n\n";
            break;
        }

        string last_word = v[v.size() - 1];
        char last_char = last_word[last_word.size() - 1];

        if (word[0] != last_char) {
            cout << "잘못된 입력입니다.\n\n";
            continue;
        }

        bool isExist = false;
        for (string elem : v) {
            if (word == elem) {
                isExist = true;
                cout << "중복된 단어입니다.\n\n";
            }
        }

        if (isExist) continue;

        v.push_back(word);
        cout << endl;
    }

    // v.size() - 1 : 첫번째 단어 카운트에서 빼기
    cout << "게임 종료!\n";
    cout << "총 입력한 단어 개수 : " << v.size() - 1 << endl;
}
