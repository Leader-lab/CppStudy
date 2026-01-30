#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	system("chcp 65001 >nul");
	int year;
	cout << "亲输入一个年份" << endl;
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		cout << year << "是润年" << endl;
	}
	else {
		cout<<year << "不是闰年" << endl;
	}
	cout << "恭喜你成功完成训练" << endl;
}
