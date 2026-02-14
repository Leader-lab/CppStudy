#include<iostream>
#include<limits>
#include<cstdlib>
using namespace std;
void setuft8() {
	system("chcp 65001>nul");
}
void test() {
	cout << "遇到5就over" << endl;
	for (int i = 1;i <= 10;i++) {
		if (i == 5) {
			break;
		}
		cout << i << " ";
	}
	cout << endl;
}
void test_continue() {
	cout << "===只跳过5和6===" << endl;
	for (int i = 3;i <= 10;i++) {
		if (i == 5 || i == 8) {
			continue;
		}
		cout << i << " ";
	}
	cout << endl;
}
int get_int() {
	int num;
	while (true) {
		cin >> num;
		if (cin.fail()) {
			cout << "输入错误！！！";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		return num;
	}
}
int main() {
	setuft8();
	test();
	test_continue();
	cout << "输入0退出程序" << endl;
	while (true) {
		int n = get_int();
		if (n == 0) {
			cout << "程序正常退出" << endl;
			break;
		}
		cout << "你输入了：" << n << endl;
		cout << "输入0退出程序" << endl;
	}
	return 0;
}