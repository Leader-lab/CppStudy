#include<iostream>
#include<limits>
#include<cstdlib>
using namespace std;
void setutf8() {
	system("chcp 65001>nul");
}
int get_int();
void test() {
	int count = 0;//统计正数的个数，同时不放在循环内，防止重复定义为0
	cout << "===请输入一个整数，输入0安全退出程序===" << endl;
	while (true) {
		int num;
		num = get_int();//调用防御函数，防止程序跑蹦
		if (num > 0) {
			count++;
			cout << "当前累计正数个数：" << count << endl;//做一个实时反馈
		}
		if (num < 0) {
			cout << "这是负数" << endl;
			continue;
		}
		if (num == 0) {
			cout << "安全退出程序" << endl;
			cout << "你输入了" << count << "个正数" << endl;
			break;
		}
	}
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
	test();
	return 0;
}