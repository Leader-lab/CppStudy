#include<iostream>
#include<limits>
#include<cstdlib>
using namespace std;
void setutf8() {
	system("chcp 65001>nul");
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
void test() {
	int count = 0;
	cout << "===请输入一个整数===+++输入0退出程序" << endl;
	while (true) {
		int num;
		num = get_int();
		if (num > 0) {
		if (num <= 100) {
			count++;
			cout << "当前累计正数个数：" << count << endl;
		}
		else {
			cout << "这是一个超级数，你可以再来一次" << endl;
		}
	}
		else if (num < 0) {
			cout << "这是负数，完全不对，你可以再来一次" << endl;
			continue;
		}
		else {
			cout << "安全退出程序" << endl;
			cout << "你输入了" << count << "个正数" << endl;
			break;
		}

	}
}
int main() {
	setutf8();
	test();
	return 0;
}