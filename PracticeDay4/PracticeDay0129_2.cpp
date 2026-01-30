#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	system("chcp 65001 > nul");
	int a, b, c, Max;
	cout << "亲输入三个整数" << endl;
	cin >> a >> b >> c;
	if (a > b > c) {
		Max = a;
	}
	else if (b > a > c) {
		Max = b;
	}
	else {
		Max = c;
	}
	cout << "最大值是：" << Max << endl;
	cout << "恭喜你完成训练" << endl;
	return 0;
}
