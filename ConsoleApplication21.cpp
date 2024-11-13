#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;


double func_a(double x, double c);
double func_b(double x, double y, double c);
double func_c(double a, double b);

int main() {
    double x1 = 8, c1 = 8.9, y1 = 1.4;

    double a = func_a(x1, c1);
    double b = func_b(x1, y1, c1);
    double c = func_c(a, b);

    cout << "A= " << fixed << setprecision(2) << a << endl;
    cout << "B= " << fixed << setprecision(2) << b << endl;
    cout << "C= " << fixed << setprecision(2) << c << endl;

    return 0;
}

double func_a(double x, double c) {
    return (c != 0) ? (pow(x, 3) / c) + 0; // a= x*3/c
}

double func_b(double x, double y, double c) {//b = x+ysqrt(c)

}
for (int i = 0; i < k; i++)
    if (a[i] > 5)
        sum += a[i];




