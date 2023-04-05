#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> com;
    vector<int> user;
    vector<int> ans;

    std::srand(time(NULL));

    // 컴퓨터가 생성한 랜덤 숫자
    while (1) {
        if (com.size() == 6) break;
        int num = std::rand() % 25 + 1;

        //  중복 체크
        bool isExist = false;
        for (int elem : com) {
            if (num == elem) {
                isExist = true;
                break;
            }
        }

        if (!isExist) com.push_back(num);
    }

    cout << "숫자는 1 ~ 25까지의 숫자만 입력할 수 있습니다.\n";

    // 유저가 입력한 숫자
    while (1) {
        if (user.size() == 6) break;
        cout << user.size() + 1 << "번째 번호를 입력하세요: ";
        
        int num;
        cin >> num;

        // 숫자 범위 체크
        if (num > 25 || num < 1) {
            cout << "잘못된 숫자입니다. 다시 입력해주세요.\n";
            continue;
        }

        // 중복 체크
        bool isExist = false;
        for (int elem : user) {
            if (num == elem) {
                isExist = true;
                break;
            }
        }

        if (!isExist) user.push_back(num);
        else {
            cout << "이미 입력된 숫자입니다.\n";
            continue;
        }
    }

    cout << "-------------------------------------------\n";
    cout << "당첨번호 공개!\n";
    for (int elem : com) {
        cout << elem << " ";
    }

    cout << endl << "1 ~ 7등까지 결과가 나올 수 있습니다.\n";

    for (int x : com) {
        for (int y : user) {
            if (x == y) ans.push_back(x);
        }
    }

    cout << "결과 : " << 7 - ans.size() << "등입니다!";

}
