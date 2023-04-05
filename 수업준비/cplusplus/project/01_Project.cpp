#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    std::srand(time(NULL));
    bool isUser = true;
    int num = 1;

    while (1) {
        
        int cnt;
        if (isUser) {
            while (1) {
                cout << "개수를 입력하세요: ";
                cin >> cnt;
             
                if (cnt < 4 && cnt > 0) break;
                cout << "1~3 사이의 수를 입력하세요.\n";
            }
        }
        else {
            cnt = std::rand() % 3 + 1;
        }

        cout << (isUser ? "사용자" : "컴퓨터") << "가 부른 숫자!\n";

        for (int i = 0; i < cnt; i++) {
            cout << num++ << endl;
            if (num == 32) break;
        }


        if (num == 32) break;
        
        cout << endl;
        isUser = !isUser;
    }

    cout << "게임 종료! " << (isUser ? "컴퓨터" : "사용자") << "의 승리입니다.\n";
}
