#include<iostream>
#include<limits>
#include<cstdlib>
using namespace std;
void setuft8() {
	system("chcp 65001>nul");
}
void test_break() {
	cout << "break:循环到8就停止" << endl;
	for (int i = 1;i <= 10;i++) {
		if (i == 8) {
			break;
		}
		cout << i << " ";
	}
	cout << endl;
}
void teat_continue() {
	cout << "===continue：只跳过5和8===" << endl;
	for (int i = 1;i <= 10; i++) {
		if (i == 5 || i == 8) {
			continue;
		}
		cout << i << " ";
	}
	cout << endl;
}
int input_num() {
	int val;
	while (true) {
		cin >> val;
		if (cin.fail()) {
			cout << "输入错误！！！！" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		return val;
	}
}
int main() {
	setuft8();
	test_break();
	teat_continue();
	cout << "输入0退出程序" << endl;
	while (true) {
		int n = input_num();
		if (n == 0) {
			cout << "程序正常退出" << endl;
			break;
		}
		cout << "你输入了：" << n << endl;
		cout << "输入0退出程序" << endl;
	}
	return 0;
}
