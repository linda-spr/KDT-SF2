#include <iostream>

using namespace std;

class Cat {
        string name;
        int age;

    public:
        // 생성자
        Cat(string name, int age) {
            this->name = name;
            this->age = age;

            cout << "cat 객체 생성\n";
        }

        // getter 함수
        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }

        // setter 함수
        void setName(string name) {
            this->name = name;
        }

        void setAge(int age) {
            this->age = age;
        }

        // 메소드
        void hello() {
            cout << "Hi! I am " << name << endl;
        }
};

class Rectangle {
        int width, height;

    public:
        /* Rectangle(int width, int height) {
            this->width = width;
            this->height = height;
        } */

        void setWidth(int width) {
            this->width = width;
        }

        void setHeight(int height) {
            this->height = height;
        }

        int area() {
            return width * height;
        }
};

int main()
{
    Cat cat("나비", 1);
    cat.hello();

    // private 접근 불가
    // cout << cat.name;
    // cat.name = "냐옹이";

    cout << cat.getName();
    cat.setAge(10);
    cout << cat.getAge() << endl;

    int width, height;

    cout << "사각형의 가로와 세로 길이를 입력해주세요. (띄어쓰기로 구분) ";
    cin >> width >> height;

    // Rectangle rect(width, height);
    Rectangle rect;

    rect.setWidth(width);
    rect.setHeight(height);

    cout << "넓이는 : " << rect.area() << endl;
}
