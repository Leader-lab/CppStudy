#include <iostream>
using namespace std;
void setConsoleEncoding() { system("chcp 65001 > nul"); }

int main() {
    setConsoleEncoding();
    // 初始化数组：存储5个学生成绩
    int scores[5] = { 88, 95, 76, 90, 82 };
    int sum = 0;

    // 遍历数组+求和
    cout << "学生成绩列表：" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "第" << i + 1 << "名：" << scores[i] << endl;
        sum += scores[i];
    }
    // 计算平均分
    double avg = static_cast<double>(sum) / 5;
    cout << "成绩总和：" << sum << " | 平均分：" << avg << endl;

    system("pause");
    return 0;
}