#include <iostream>

using namespace std;

int main()
{
    // 1 dollar is 100 cents
    // 1 quarter is 25 cents
    // 1 dime is 10 cents
    // 1 nickel is 5 cents
    // 1 penny is 1 cent

    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    int amount {0};
    int remainder {}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

    cout << "Enter an amount in cents: ";
    cin >> amount;

    if(amount > 0){
        dollars = amount / dollar_value;
        remainder = amount - (dollars * dollar_value);

        quarters = remainder / quarter_value;
        remainder = remainder - (quarters * quarter_value);

        dimes = remainder / dime_value;
        remainder = remainder - (dimes * dime_value);

        nickels = remainder / nickel_value;
        remainder = remainder - (nickels * nickel_value);

        pennies = remainder;

        cout << "Dollars : " << dollars << endl;
        cout << "Quarters: " << quarters << endl;
        cout << "Dimes: " << dimes << endl;
        cout << "Nickels: " << nickels << endl;
        cout << "Pennies: " << pennies << endl;

    } else if(amount == 0){
        cout << "You entered 0 cent." << endl;
    } else
        cout << "Invalid amount of cent" << endl;

    return 0;
}
