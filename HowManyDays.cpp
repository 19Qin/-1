//  第几天

#include <iostream>
#include <cstdio>

using namespace std;

bool leapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main() {
    //  1. 先得到年月日
    int year, month, day;
    char c = '/';
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (cin >> year >> c >> month >> c >> day) {
        int sum = 0;
        //  2. 计算天数
        int month2 = month;
        while (month2-- > 0) {
            sum += days[month2 - 1];
        }
        sum += day;
        //  3. 判断闰年是否 +1
        if (month > 2 && leapYear(year)) {
            sum++;
        }
        cout << sum << endl;
    }
    return 0;
}