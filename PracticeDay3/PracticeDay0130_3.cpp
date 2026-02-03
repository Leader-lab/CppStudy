#include<iostream>
#include<random>
#include<cstdlib>
using namespace std;
int main() {
	system("chcp 65001 > nul");
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 100);
	int target = dis(gen);
	cout << "\n++==++欢迎来到猜数字游戏++==++" << endl;
	int guess = 0;
	int count = 0;
	cout << "\n请输入您猜的数字（1-100）：" << endl;
	while (guess != target){
		cin >> guess;
		count++;
		if (guess > target) {
			cout << "猜大啦！！！" << endl;
		}
		else if (guess<target) {
			cout << "猜小啦" << endl;
		}
		else{
			cout << "恭喜您，猜对啦！！！" << endl;
			cout << "您一共猜了" << count << "次" << endl;
		}
		
	} 
	return 0;
}