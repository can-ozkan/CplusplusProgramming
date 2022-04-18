#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	//Converting Euro to USD
    
    const double usd_per_euro {1.19};
    double client_euro {0.0};
    double client_dollar {0.0};
    
    cout << "Welcome to the EURO to USD Converter" << endl;
    cout << "Enter the value in Euro: ";
    cin >> client_euro;
    
    client_dollar = client_euro * usd_per_euro;
    cout << "The client has " << client_dollar << " dollar" << endl;
    
    
    
    
    
    
    
	return 0;
}
