#include <iostream>

using namespace std;



int main(int argc, char **argv)
{
    int number_small_room {0};
    int number_large_room {0};
    const double price_small_room {25};
    const double price_large_room {35};
    const double sales_tax {0.06};
    const int estimate_expiry {30};
    double cost {0.0};
    double tax {0.0}; 
    
	cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like to clean? ";
    
    cout << "Estimate for Carpet Cleaning Service" << endl;
    
    cout << "Number of small rooms: " << endl;
    cin >> number_small_room;
    
    cout << "Number of large rooms: " << endl;
    cin >> number_large_room;
    
    cout << "Price per small room: $" << price_small_room << endl;
    cout << "Price per large room: $" << price_large_room << endl;
    
    cost = (number_small_room*price_small_room) + (number_large_room*price_large_room);
    tax = ((number_small_room*price_small_room) + (number_large_room*price_large_room)) * sales_tax;
    
    cout << "Cost : $" << cost << endl;
    cout << "Tax : $" << tax << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Total estimate : $ " << cost + tax << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    
    
    
    
    
	return 0;
}
