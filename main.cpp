/*
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
    while (cin >> a >> b >> c) {
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
    }
    return 0;
}
*/
/*
#include "iostream"

using namespace std;

#include <cmath>

int main() {
    double x1, y1, x2, y2;
    while (cin >> x1 >> y1 >> x2 >> y2) {
        double result = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << result << endl;
    }
    return 0;
}*/
/*
#include "iostream"
#include "cmath"

#define PI 3.1415927
using namespace std;

int main() {
    double r, v;
    while (cin >> r) {
        v = (4.0 / 3.0) * PI * r * r * r;
        cout.setf(ios::fixed);
        cout.precision(3);
        cout << v << endl;
    }
    return 0;

}*/
/*#include "iostream"
#include "cmath"

using namespace std;
int main(){
    double a;
    while(cin>>a){

        cout.setf(ios::fixed);
        cout.precision(2);
        cout<<abs(a)<<endl;
    }
    return 0;
}*/
/*
#include "iostream"

using namespace std;

int main() {
    int number;
    while (cin >> number) {
        if (number >= 90 && number <= 100) {
            cout << "A" << endl;
        } else if (number >= 80 && number <= 89) {
            cout << "B" << endl;
        } else if (number >= 70 && number <= 79) {
            cout << "C" << endl;
        } else if (number >= 60 && number <= 69) {
            cout << "D" << endl;
        } else if (number >= 0 && number <= 59) {
            cout << "E" << endl;
        } else {
            cout << "Score is error!" << endl;
        }
    }
    return 0;
}



*/

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

//  奇数乘积
/*
#include "iostream"

using namespace std;

int main() {
    int x;
    while (scanf("%d", &x) != EOF) {
        int result = 1;
        for (int i = 0; i < x; i++) {
            int y = 0;
            scanf("%d", &y);
            if (y % 2 != 0) {
                result *= y;
            }
        }
        cout << result << endl;
    }
    return 0;
}*/
