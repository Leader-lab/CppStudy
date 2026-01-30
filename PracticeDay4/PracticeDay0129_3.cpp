#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	system("chcp 65001 > nul");
	int score;
	cout << "亲输入你的成绩" << endl;
	cin >> score;
	if (score > 100 || score < 0) {
		cout << "废物啊，你是，成绩都输不对" << endl;
		return 0;
	}
	if (score >= 90) {
		cout << "优秀" << endl;
		cout << "保持下去，退步干死你" << endl;
	}
	else if (score >= 80) {
		cout << "良好" << endl;
		cout << "好好学吧哥们" << endl;
	}
	else if (score >= 60) {
		cout << "及格" << endl;
		cout << "不是哥们，刚及格，学啥呢" << endl;
	}
	else {
		cout << "不及格" << endl;
		cout << "不是哥们跳了吧，还学呢" << endl;
	}
	return 0;
}