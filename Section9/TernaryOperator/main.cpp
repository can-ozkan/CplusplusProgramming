#include <iostream>

using namespace std;

int main()
{

    //Similar to if-else construct

    int num {};
    cout << "Enter an integer: " ;
    cin >> num;

    if(num % 2 == 0)
        cout << num << " is even number." << endl;
    else
        cout << num << " is odd number." << endl;

    cout << num << " is " << ((num % 2 == 0) ? "even" : "odd" ) << endl; // ternary operator

    int num1{}, num2{};
    cout << "Enter two integers: " << endl;
    cin >> num1 >> num2 ;

    if(num1 != num2){
        cout << "Largest is " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest is " << ((num1 < num2) ? num1 : num2) << endl;

    } else{
        cout << "Numbers are the same." << endl;
    }

    return 0;
}
