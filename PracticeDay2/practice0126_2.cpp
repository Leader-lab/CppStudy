#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	system("chcp 65001 > nul");
	int scores[5] = { 97,98,34,52,65 };
	cout << "所有成绩："<<endl;
	for (int i = 0;i < 5; i++) {
		cout<< "第"<<i+1<<"名"<<scores[i]<<endl;
	}
	return 0;
}
