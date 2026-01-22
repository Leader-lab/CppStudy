#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    system("chcp 65001>nul");
    // 初始化随机数种子，确保每次运行生成不同的随机数
    srand((unsigned int)time(NULL));
    // 生成1到100之间的随机数
    int target = rand() % 100 + 1;
    int guess = 0;
    int count = 0;

    cout << "🎮 欢迎来到猜数字游戏！" << endl;
    cout << "我已经生成了一个1到100之间的随机数，快来猜猜看！" << endl;

    // 循环猜数字，直到猜对为止
    while (true) {
        cout << "请输入你的猜测：";
        cin >> guess;
        count++;

        if (guess > target) {
            cout << "❌ 猜大啦！再小一点试试～" << endl;
        }
        else if (guess < target) {
            cout << "❌ 猜小啦！再大一点试试～" << endl;
        }
        else {
            cout << "🎉 恭喜你，猜对了！用了" << count << "次机会！" << endl;
            break;
        }
    }

    // 防止控制台运行后一闪而过
    system("pause");
    return 0;
}