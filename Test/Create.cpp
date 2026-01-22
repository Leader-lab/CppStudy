#include<iostream>;
#include<string>;
#include<cstdlib>;
using namespace std;
int main() {
	system("chcp 65001>nul");
	int age=21;
	int height=180;
	string name;
	cout << "少爷叫什么：" << endl;
	cin >> name;
	cout << "少爷的芳龄是：" << age << "少爷多高呢:" << height << endl;
	cout << "欢迎少爷回家" << endl;
	return 0;

}

