
/*
145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.
Find the sum of all numbers which are equal to the sum of the factorial of their digits.
Note: As 1! = 1 and 2! = 2 are not sums they are not included.
*/

#include <iostream>
using namespace std;

// Function for finding factorial
int factorial(int x) {
    if (x == 0) {
        return 1;
    }
    int y = x;
    for (int i = 1; i < x; i++) {
        y *= i;
    }
    return y;
}

int main(){
    int result = 0;
    for(int i = 10; i < 2540161; i++){  
        int sumOfFacts = 0;
        int number = i;
        while (number > 0) {
            int d = number % 10;
            number /= 10;
            sumOfFacts += factorial(d);
        }
        if (sumOfFacts == i) {
            result += i;  // Summing up all values that satisfies required condition
        }
    }
    cout << result;
}
