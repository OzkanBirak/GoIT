#include <iostream>
using namespace std;


int Fibo(int n) {
 
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, fib;

    for (int i = 2; i <= n; ++i) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}


int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int res = Fibo(num);
    cout << "Fibonacci term of the " << num << " is " << res;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    return 0;
}