#include <iostream>
using namespace std;

int factorial(int n);
int fibonacci(int n);
void fib(int n);

int main()
{
    int n;
    cin >> n;
    while (n != -1)
    {
        fib(n);
        cout << endl << "Factorial:" << factorial(n) << " " << "Fibonacci:" << fibonacci(n) << "\n\n";
        cin >> n;
    }
}
int factorial(int n) {
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;//return n;
}
int fibonacci(int n) {
    //the starting value is 1 if we type 0 so we have to set it manually
    if (n == 0) {
        return(n);
    }
    else if (n > 2) {
        return fibonacci(n - 1) + fibonacci(n - 2);
        //so fibonacci(n-1) comes first thus making it reduce it self by one
        //if we would change the order it would go down by 2 each time it calls it self
        //but general point is that it will call it self n times and 
        //then compute the values to calculate the fibonacci(n) value;
    }
}
void fib(int n) {
    int num1 = 0, num2 = 1, nextnum = 0;

    cout << endl << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << num1 << ", ";
            continue;
            //we need this to have the initial values of 0 and 1
        }
        if (i == 2) {
            cout << num2 << ", ";
            continue;
        }
        nextnum = num1 + num2;
        num1 = num2;
        num2 = nextnum;

        cout << nextnum << ", ";
    }
    cout << endl;
}
