#include <iostream>

using namespace std;

int main()
{

    struct Position {
        int x = 0;
        int y = 0;
    };

    Position p;

    // p.x = 3;
    // p.y = 5;

    p = { 3, 4 };

    cout << p.x << ' ' << p.y << std::endl;

    // 실습 1

    struct Rectangle {
        double width, height;
    };

    Rectangle rectangle;

    cout << "가로, 세로 길이를 입력하세요. ";
    cin >> rectangle.width >> rectangle.height;

    cout << "넓이는 : " << rectangle.width * rectangle.height;
}
