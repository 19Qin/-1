#include <iostream>

using namespace std;

// F - ASCII码排序
// https://vjudge.csgrandeur.cn/contest/514343#problem/F

//  交换两个变量
void change(char *a, char *b) {
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    char a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        change(&a, &b);
    }
    if (a > c) {
        change(&a, &c);
    }
    if (b > c) {
        change(&b, &c);
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}
