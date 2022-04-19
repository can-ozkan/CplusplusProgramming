#include <iostream>

using namespace std;

int main()
{

    //Relational Operators
    cout << boolalpha;
    int num1{}, num2{};

    cout << "Enter two integers: " << endl;
    cin >> num1 >> num2;

    cout << "num1 == num2 " << (num1==num2) << endl;
    cout << "num1 != num2 " << (num1!=num2) << endl;
    cout << "num1 > num2 " << (num1 > num2) << endl;
    cout << "num1 < num2 " << (num1 < num2) << endl;
    cout << "num1 >= num2 " << (num1 >= num2) << endl;
    cout << "num1 <= num2 " << (num1 <= num2) << endl;

    // Logical Operators
    // Precedence
    // not has higher precedence than and
    // and has higher precedence than or
    // not is a unary operator
    // and and or are binary operators

    // Short-circuit evaluation is that when evaluating a logical expression C++ stops as soon as
    // the result is known

    const int lower_limit {10};
    const int upper_limit {20};
    int num {0};
    bool within_bounds {false};
    bool outside_bounds {false};

    // Determine if an entered integer is between the lower and upper
    cout << "Enter an integer - the bounds are  " << lower_limit << " and " << upper_limit << endl;
    cin >> num;
    within_bounds = (num > lower_limit && num < upper_limit);
    outside_bounds = (num < lower_limit || num > upper_limit);

    cout << num << " is within bounds : " << within_bounds << endl;
    cout << num << " is outside bounds : " << outside_bounds << endl;

    // Compound Assignment Operators
    int a = 4;
    cout << "a is " << a << endl;

    a += 1;
    cout << "a is " << a << endl;

    a /= 5;
    cout << "a is " << a << endl;







    return 0;
}
