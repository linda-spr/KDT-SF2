#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main() {

	// cstdlib 헤더에서 제공하는 rand 함수를 이용하여 난수를 생성할 수 있다.
	// 하지만, rand 함수는 srand 함수에 인자로 주어진 수치에 따라 난수를 생성한다.
	// srand 또한 cstdlib 헤더에서 제공
	// srand 함수를 호출하지 않는다면 srand(1)이 기본으로 설정된다.
	// std::srand(1);
	// std::srand(2);

	// 그래서 매번 다른 값을 생성하기 위해 srand() 함수에 현재 시간을 전달할 수 있음
	// time(NULL) : 1970년 1월 1일 0시 0분 0초부터 현재까지 경과된 시간을 초 단위로 리턴
	std::srand(time(NULL));
	// 0~ RAND_MAX 사이의 랜덤한 숫자. RAND_MAX = 32767으로 정의되어 있음.
	int num = std::rand();

	// 범위를 한정하고 싶다면 나머지값 이용하기
	// 1 부터 25까지
	int tempNumber = num % 25 + 1;

	cout << num << endl;
	cout << tempNumber << endl;

	return 0;
}

// ------------------------------------------------------ 실습 -----------------------------------------

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

int main() {

	std::vector<int> v;
	std::srand(1);
	
	while (1) {
		if (v.size() == 6) break;
		int tmpNum = std::rand();
		int num = tmpNum % 45 + 1;

		bool isExist = false;

		for (int elem : v) {
			if (num == elem) {
				isExist = true;
				break;
			}
		}

		if (!isExist) v.push_back(num);
		
	}

	cout << "당첨 번호 : ";
	for (int elem : v) {
		cout << elem << " ";
	}

}
