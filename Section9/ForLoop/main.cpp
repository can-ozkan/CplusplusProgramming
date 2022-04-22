//Section 9 - For Loop

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i {0};
    for(i = 1; i <= 5; i++) // i is in assignment style
        cout << i << endl;

    cout << "---------------------------------------" << endl;

    for(int i {0}; i <=5; i++) // i is in initialization style
        cout << i << endl;

    cout << "---------------------------------------" << endl;

    // displaying even numbers
    for(int i {1}; i <=10; i++){
        if(i %2 == 0)
            cout << i << endl;
    }

    cout << "---------------------------------------" << endl;

    // array example
    int scores [] {100, 90, 87};
    for(int i {0}; i < 3; i++)
        cout << scores[i] << endl;

    cout << "---------------------------------------" << endl;

    // comma operator
    for(int i {1}, j {5}; i <=5; i++, j++){
        cout << i << " * " << j << " : " << (i*j) << endl;
    }

    cout << "---------------------------------------" << endl;

    /*
        for(;;)
            cout << "Endless loop" << endl;
    */

    for(int i {1}; i <=10; i+=2)
        cout << i << endl;

    cout << "---------------------------------------" << endl;

    for(int i {5}; i > 0; i-- )
        cout << i << endl;

    cout << "---------------------------------------" << endl;

    for(int i {10}; i <= 100; i+=10){
        if(i % 15 == 0)
            cout << i << endl;
    }

    cout << "---------------------------------------" << endl;

    for(int i{1}, j{5}; i <= 5; i++,j++)
        cout << i << " + " << j << " = " << (i+j) << endl;

    cout << "---------------------------------------" << endl;

    for(int i{1}; i<=100; i++){
        cout << i;
        if(i % 10 == 0)
            cout << endl;
        else
            cout << " ";
    }

    cout << "---------------------------------------" << endl;

    vector<int> nums {10,20,30,40,50};

    for(unsigned int i {0}; i<nums.size(); i++){
        cout << nums[i] << endl;
    }



    return 0;
}
