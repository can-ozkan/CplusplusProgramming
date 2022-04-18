#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
	//Increment and Decrement Operators
    
    int counter {10};
    int result {0};
    
    // Example 1 - Simple Increment
    cout << "Counter: " << counter << endl;
    
    counter = counter + 1;
    cout << "Counter: " << counter << endl;
    
    counter++;
    cout << "Counter: " << counter << endl;
    
    ++counter;
    cout << "Counter: " << counter << endl;
    
    cout << "-----------------------------------------" << endl;
    
    // Example 2 - Pre increment
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = ++counter; //preincrement
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    cout << "-----------------------------------------" << endl;
    
    // Example 3 - Post increment
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = counter++; //preincrement
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    

    
    
	return 0;
}
