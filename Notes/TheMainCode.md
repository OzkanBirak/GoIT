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

    int number;
    cout << "Enter the position of the Fibonacci term you want to find: ";
    cin >> number;

    int result = Fibo(number);
    cout << "The Fibonacci term at position " << number << " is: " << result << endl;

    return 0;
}