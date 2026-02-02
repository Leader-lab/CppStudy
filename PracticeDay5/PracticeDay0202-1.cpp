#include <iostream>
#include <limits>
using namespace std;

// 函数功能：设置控制台UTF-8编码，避免中文乱码
// 输入：无 | 返回：无
// 防御点：无（仅系统调用封装）
void setConsoleUtf8() {
    system("chcp 65001 > nul");
}

// 函数功能：打印九九乘法表
// 输入：rows - 行数（1~9，超出自动修正） | 返回：无
// 防御点：1. 非法行数修正+提示 2. 计算结果溢出校验
void printMultiTable(int rows) {
    // 防御：校验行数合法性（避免负数/0/超大数导致循环异常）
    const int defaultRows = 9;
    const int maxRows = 9;
    if (rows <= 0 || rows > maxRows) {
        cout << "[提示] 行数非法（输入：" << rows << "），自动改为" << defaultRows << "行！" << endl;
        rows = defaultRows;
    }

    cout << "===== 九九乘法表 =====" << endl;
    // 外层循环：控制行
    for (int i = 1; i <= rows; i++) { // i=行号
        // 内层循环：控制列
        for (int j = 1; j <= i; j++) { // j=列号
            // 防御：避免计算结果过大（模拟数据异常）
            int res = j * i;
            const int maxRes = 100;
            if (res > maxRes) {
                cout << j << "×" << i << "=溢出\t";
                continue;
            }
            cout << j << "×" << i << "=" << res << "\t";
        }
        cout << endl;
    }
}

// 函数功能：获取用户输入的行数，处理输入错误
// 输入：无 | 返回：输入的行数（已做错误过滤）
// 防御点：输入非数字时提示并重新输入
int getInputRows() {
    int rows;
    cout << "请输入九九乘法表行数（1-9）：";
    while (true) {
        cin >> rows;
        // 防御：输入非数字时的错误处理
        if (cin.fail()) {
            cout << "[错误] 输入不是数字，请重新输入：";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        return rows;
    }
}

int main() {
    setConsoleUtf8();
    int inputRows = getInputRows();
    printMultiTable(inputRows);
    return 0;
}