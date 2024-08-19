//
// https://projecteuler.net/problem=2
//


#include <iostream>
#include <vector>
using namespace std;

vector<int> find_fibonacci(int n) {
    vector<int> fib_arr;
    int a = 0, b = 1;

    while (a < n) {
        fib_arr.push_back(a);  // Store the Fibonacci number in the array
        int temp = b;
        b = a + b;
        a = temp;
    }

    return fib_arr;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    vector<int> fibonacci_numbers = find_fibonacci(number);

    cout << "Fibonacci numbers below " << number << " are: ";
    for (int i = 0; i < fibonacci_numbers.size(); i++) {
        cout << fibonacci_numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

