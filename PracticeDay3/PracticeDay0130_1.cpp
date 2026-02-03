#include<iostream>
#include<cstdlib>
using namespace std;
void sensorCollect() {
	cout << "\n=====传感器开始采集=====" << endl;
	int date = 1;
	while (date != 10) {
		cout << "\n采集到数据" <<date<< endl;
		date++;
	}
	cout << "\n采集到异常数据，采集终止" << endl;
}
void meun() {
	int choice = 0;
	do {
		cout << "\n数据采集菜单" << endl;
		cout << "\n1.开始采集数据" "\n2.停止采集数据" "\n3.设备原地爆炸" << endl;
		cout << "\n请输入选项" << endl;
		cin >> choice;
		switch (choice) {
		case 1:cout << "\n开始采集数据" << endl;break;
		case 2:cout << "\n停止采集数据" << endl;break;
		case 3:cout << "\n设备炸成了爱心的样子" << endl;break;
		default:cout << "SB,输错了，重来吧" << endl;break;
		}
	} while (choice != 0);
}
int main() {
	system("chcp 65001 >nul");
	sensorCollect();
	meun();
		
	return 0;

}
