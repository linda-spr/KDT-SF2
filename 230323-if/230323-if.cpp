﻿// 230323-if.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// 주석
// "#" 전처리기 컴파일하기 전에 
// 필요한 작업들을 수행하기 위해 정의 = 기초작업
// include :  외부에 있는 것들을 사용하기 위해 선언
#include <iostream>
// iostream : 입출력을 제공하는 라이브러리

// 가장 먼저 호출(실행)되는 함수
int main()
{
	/*
		if (조건1) {
			조건이 참일 때 실행할 것
		} else if ( 조건2 ) {
			조건 1이 거짓이고, 조건2가 참일 때 실행
		} else {
			// 모든 조건이 거짓일 때 실행
		}
	*/
	//char abc = 'a';

	//// switch 조건문은 기본 타입만 비교가 가능하다.
	//switch (abc) {
	//	case 'a':
	//		std::cout << "a";
	//	break;
	//	case 'b':
	//		std::cout << "b";
	//	break;
	//	default:
	//		std::cout << ""; // 기본실행코드
	//	break;
	//}

	int a = 5;
	if (a > 5) {
		std::cout << "5보다 크다";
	}
	else {
		std::cout << "5보다 크지 않다.";
	}
	a > 5 ? std::cout << "5보다크다" : std::cout << "5보다 크지 않다.";
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
