#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string name_in, pw_in, name, pw;

	cout << "이름을 입력하세요 : ";
	cin >> name_in;

	cout << "비밀번호를 입력하세요 : ";
	cin >> pw_in;

	ifstream member("member.txt");

	bool is_login = false;

	if (member.is_open()) {
		while (member >> name >> pw) {
			if (name_in == name && pw_in == pw) {
				is_login = true;
				break;
			}
		}
	}

	member.close();

	if (is_login) {
		cout << "로그인 성공\n";

		string num_in, num;

		cout << "전화번호를 입력하세요 : ";
		cin >> num_in;

		ifstream member_tel_r("member_tel.txt");

		bool is_modify = false;
		string member_tel_tmp = "";

		if (member_tel_r.is_open()) {
			while (member_tel_r >> name >> num) {
				string line = name + " ";
				if (name_in == name) {
					is_modify = true;
					line += num_in;
				}
				else {
					line += num;
				}
				member_tel_tmp += line + "\n";
			}

		}
		member_tel_r.close();

		ofstream member_tel_w;

		if (is_modify) {
			member_tel_w.open("member_tel.txt");
			if (member_tel_w.is_open()) {
				member_tel_w << member_tel_tmp;
			}
		}
		else {
			member_tel_w.open("member_tel.txt", ios::app);
			if (member_tel_w.is_open()) {
				member_tel_w << name_in << " " << num_in << endl;
			}
		}

		member_tel_w.close();
	}
	else {
		cout << "로그인 실패\n";
	}
}