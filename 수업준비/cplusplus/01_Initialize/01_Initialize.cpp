// 01_Initialize.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // 기본 자료형
    /*int a = 1;
    int b = 2;
    std::cout << a + b;

    std::cout << "\n";

    bool c1 = true;
    std::cout << c1;
    std::cout << "\n";

    bool c2 = false;
    std::cout << c2;
    std::cout << "\n";

    char d = 'a';
    std::cout << d;
    std::cout << "\n";

    char e = 'b';
    std::cout << e;
    std::cout << "\n";

    float f = 1.2;
    float g = 3.9;

    std::cout << f + g;*/


    // ----------------------------------------------------
    // 문자열 std::string

    std::string str1 = '안녕 ?';
    std::cout << str1;
    std::cout << "\n";

    std::string str2 = "반가워";
    std::cout << str2;

    std::string test1 = "1";
    std::string test2 = "2";

    std::cout << test1 + test2;

    std::string test3 = "포스코";
    test3 = "코딩온";

    std::cout << test3;

    // ----------------------------------------------------


    // 입/출력
    //std::cout << "Hello World!\n";


  /*  int a;
    std::string b;
    std::string c;

    std::cin >> a;
    std::cin >> b;
    
    std::cout << a << b;
    std::cout << b + c;*/

    //std::cout << a << b ;


    //std::cout << b + "입니다.";

    //return 0;



    // ----------------------------------------------------
    int a = 5;
    if (a > 10) {
        std::cout << "a가 10보다 큽니다.";
    }
    else if (a === 5) {
        std::cout << "a는 5입니다.";
    }
    else {
        std::cout << "a는 10보다 크지 않고 5가 아닙니다.";
    }

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
