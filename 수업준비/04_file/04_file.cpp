#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // 파일 읽기

    std::ifstream file;
    file.open("test_file.txt");

    // std::ifstream file("test_file.txt");

    // std::string str1, str2;
    std::string line;

    if (file.is_open()) {

        // std::cout << "파일 있음\n";
        // file >> str1 >> str2;

        /* for (int i = 0; i < 2; i++) {
            std::getline(file, line);
            std::cout << line << std::endl;
        } */

        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
    } else {
        std::cout << "파일 없음\n";
        return 0;
    };

    file.close();

    // std::cout << "str : " << str1 << " " << str2 << std::endl;

    // 파일 쓰기

    std::ofstream file2;
    file2.open("test_file2.txt");

    if (!file2.fail()) {
        file2 << "Hello world!\n" << "I love programming!\n";
    }
    else {
        std::cout << "test_file2 파일 없음";
    }

    file2.close();

    // 실습1

    std::cout << "3명의 회원에 대한 이름 비밀번호를 순차적으로 입력하세요." << std::endl;

    std::ofstream memberFile("member.txt");

    for (int i = 0; i < 3; i++) {
        std::cout << i + 1 << "번째 회원 : ";

        std::string info;
        std::getline(std::cin, info);

        if (memberFile.is_open()) memberFile << info << "\n";
    }

    memberFile.close();

    std::cout << "------------회원 명부 파일 읽기------------\n";

    std::ifstream fileRead("member.txt");
    std::string readLine;

    if (fileRead.is_open()) {
        while (std::getline(fileRead, readLine)) {
            std::cout << readLine << std::endl;
        }
    }

    fileRead.close();


    // 실습 2

    std::string name, password, str1, str2;
    std::ifstream loginFile("member.txt");

    std::cout << "이름을 입력하세요. ";
    std::cin >> name;

    std::cout << "비밀번호를 입력하세요. ";
    std::cin >> password;
    
    bool flag = false;

    if (loginFile.is_open()) {
        while (loginFile >> str1 >> str2) {
            if (name == str1 && password == str2) {
                flag = true;
                break;
            }
        }
    }
    else {
        std::cout << "파일을 읽지 못하였습니다.";
    }

    if (flag) std::cout << "로그인 성공\n";
    else std::cout << "로그인 실패\n";
    
    loginFile.close();
}
