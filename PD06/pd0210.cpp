#include<iostream>
#include<limits>
#include<cstdlib>
using namespace std;
void setutf8() {
	system("chcp 65001>nul");
}
void demo_break() {
	cout << "===break,到5停止循环" << endl;
	for (int i = 1;i <= 10;i++){
		if (i==5) {
			break;
		}
		cout << i << " ";
	}
	cout << endl;
}
void demo_continue() {
	cout << "===continue,只跳过5===" << endl;
	for (int i = 1;i <= 10;i++) {
		if (i == 5) {
			continue;
		}
		cout<< i << " ";
	}
	cout << endl;
}
int get_int() {
	int num;
	while (true) {
		cin >> num;
		if (cin.fail()) {
			cout << "输入错误！请输入整数：";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		return num;
	}
}
int main() {
		setutf8();
	demo_break();
	demo_continue();
	cout << "\n输入0退出程序" << endl;
	while (true) {
		int n=get_int();
		if (n == 0) {
			cout << "程序正常退出" << endl;
			break;
		}
		cout << "你输入了：" << n << endl;
		cout<<"输入0退出程序" << endl;
	}
	return 0;
}


