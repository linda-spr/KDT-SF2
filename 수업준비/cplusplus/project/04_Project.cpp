#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int nextI(int n, int i) {
    if (i == 0) i = n - 1;
    else i--;
    return i;
}

int nextJ(int n, int j) {
    if (j == n - 1) j = 0;
    else j++;
    return j;
}

int main()
{
    cout << "마방진의 행 혹은 열의 수를 자연수로 입력해주세요. ";
    
    // 행 and 열의 수
    int n;
    cin >> n;

    int** magicSquare = new int* [n];
    for (int i = 0; i < n; i++) {
        magicSquare[i] = new int[n];
    }

    // 0으로 초기화
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magicSquare[i][j] = 0;
        }
    }

    // i = 행, j = 열
    // 첫 번째 행 중간 = 1 
    int i = 0, j = n / 2;

    for (int k = 1; k <= n * n; k++) {
        if (magicSquare[i][j] == 0) {
            magicSquare[i][j] = k;
        }
        else {
            // 이미 채워져있을 경우
            magicSquare[++i][j] = k;
        }

        // 다음 좌표 (우상단이 비어있을 때만 바꿔주기)
        if (magicSquare[nextI(n, i)][nextJ(n, j)] == 0) {
            i = nextI(n, i);
            j = nextJ(n, j);
        }
    }

    // 마방진 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << magicSquare[i][j] << " ";
        }
        std::cout << std::endl;
    }


    // 동적 배열 해제
    for (int i = 0; i < n; i++) {
        delete[] magicSquare[i];
    }
    delete[] magicSquare;

}
