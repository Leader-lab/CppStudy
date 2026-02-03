#include<iostream>
#include<cstdlib>
using namespace std;

void testWhile() {
	cout << "\n=====while循环测试=====" << endl;
	int i = 1;
	while(i <= 5) {
		cout << "\n今天是想你的第" << i << "天\n" << endl;
		i++;
	}
	cout << "\n循环测试结束！" << endl;
}
void testDowhile() {
	cout << "\n=====DO While循环测试=====" << endl;
	int i = 1;
	do {
		cout << "\n今天是想你的第" << i << "天" << endl;
		i++;
	} while (i <= 5);
	cout<< "\n循环测试结束！" << endl;
}
int main() {
	system("chcp 65001>nul");
	testWhile();
	testDowhile();
	return 0;
}