#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	//Expression examples are as follows
    // 34 literal
    // favorite_number variable
    // 1.5 + 2.8 addition
    // 2 * 5 multiplication
    // a > b relational
    // a = b assignment
    
    // A statement is
    //  a complete line of code that performs some action
    //  usually terminated with a semicolon
    //  usually contains expression
    //Statement examples are as follows
    
    //int x; declaration
    //favorite_number=12; assignment
    //1.5+2.8; expression
    //x=2*5; assignment
    //if (a>b) cout << "a is greater than b"; if statement
    
    // Assignment Operator
    int num1 {20}; //initialization
    int num2 {30}; //initialization
    
    num1 = 100; //assignment statement
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    num1 = num2 = 1000;
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    // num1 = "Frank"; This statement returns an error
    
    // Arithmetic Operators
    int result {0};
    
    //Addition
    cout << num1 << " + " << num2 << " is " << num1+num2 << endl;
    result = num1 + num2;
    cout << num1 << " + " << num2 << " is " << result << endl;
    
    //Subtraction
    result = num1 - num2;
    cout << num1 << " - " << num2 << " is " << result << endl;
    
    //Multiplication
    result = num1 * num2;
    cout << num1 << " * " << num2 << " is " << result << endl;
    
    //Division
    result = num1 / num2;
    cout << num1 << " / " << num2 << " is " << result << endl;
    
    //Remainder, Modulo
    result = num1 % num2;
    cout << num1 << " % " << num2 << " is " << result << endl;
    
    num1 = 10;
    num2 = 3;
    
    result = num1 % num2;
    cout << num1 << " % " << num2 << " is " << result << endl;
    
    cout << "5 / 10 is " << 5/10 << endl; //This is integer division
    cout << "5.0 / 10.0 is " << 5.0/10.0 << endl; //This is a division with fraction
    
    
    
    
	return 0;
}
