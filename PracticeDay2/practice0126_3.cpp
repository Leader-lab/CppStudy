#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	system("chcp 65001 > nul");
	int scores[5]{ 99,78,32,47,87 };
	int sum = 0;
	int max = scores[0];
	int min = scores[0];
	for (int i = 0;i < 5;i++) {
		sum += scores[i];
		if (scores[i] > max) {
			max = scores[i];
		}
		if (scores[i] < min) {
			min = scores[i];
		}
	}
	cout << "成绩总和：" << sum << endl;
	cout << "最高值；" << max << endl;
	cout << "最小值：" << min << endl;
	return 0;
}
