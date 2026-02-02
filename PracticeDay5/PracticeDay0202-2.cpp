#include<iostream>
#include<limits>
#include<string>
using namespace std;
void setconsoleEncoding() {
	system("chcp 65001 > nul");
}
int correctParam(int val, int type) {//防御性函数
	const int mintemp = 0, maxtemp = 100;
	const int minvolt = 180, maxvolt = 240, defvolt = 220;
	const int mincurr = 0, maxcurr = 20;
	switch (type) {
	case 1:
		if (val<mintemp || val>maxtemp) {
			cout << "【修正】温度非法，改为" << mintemp << "℃！";
			return mintemp;
		}
		break;
	case 2:
		if (val<minvolt || val>maxvolt) {
			cout << "【修正】电压非法，改为" << defvolt << "V!";
			return defvolt;
		}
		break;
	case 3:
		if (val<mincurr || val>maxcurr) {
			cout << "【修正】电流非法，改为" << mincurr << "A!";
			return mincurr;
		}
		break;
	default:
		cout << "【错误类型】，返回" << "0!";
		return 0;
	}
	return val;
}
void printDevparam(int DevNum, int paramNum) {
	const int maxDev = 5;
	const int maxparam = 3;
	const int defDev = 5;
	const int defparam = 3;
	if (DevNum <0) {
		cout << "非法设备数,自动修正为" << defDev;
		DevNum = defDev;
	}
	if (paramNum<0 || paramNum>maxparam) {
		cout << "非法参数,自动修正为" << defparam;
		paramNum = defparam;
	}
	int Devparam[maxDev][maxparam] = {
	    {25, 220, 10},
		{26, 300, 9},// 电压非法
		{-5, 218, 25},// 温度+电流非法
		{27, 219, 8},
		{ 25, 220, 10 },
	};

}