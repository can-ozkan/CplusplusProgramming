#include <iostream>

using namespace std;

int main()
{
    cout << 2 * 5.2 << endl; //2 is promoted to 2.0

    // lower = higher; the higher is demoted to the lower
    int num {0};
    num = 100.2;
    cout << num << endl;

    // Explicit type casting
    int total_amount {100};
    int total_number {8};
    double average {0.0};

    average = total_amount / total_number;
    cout << average << endl; //displays 12

    average = static_cast<double> (total_amount) / static_cast<double> (total_number);
    cout << average << endl;

    int num1{}, num2{}, num3{};
    cout << "Please, enter 3 numbers: " << endl;
    cin >> num1 >> num2 >> num3;

    int sum = num1 + num2 + num3;
    cout << "Average is " << static_cast<double> (sum) / 3 << endl;

    //Testing for Equality
    bool result {false};
    result = (100 == 50+50);
    cout << "Comparing 100 == 50+50 is " <<result << endl;
    result = num1 != num2;
    cout << "Comparing num1 and num2 is " << result << endl;

    char char1{}, char2{};
    cout << "Enter two characters: " << endl;
    cin >> char1 >> char2;

    bool equal_result = (char1==char2);
    bool not_equal_result = (char1!=char2);

    cout << "Comparison result (equality) " << equal_result << endl;
    cout << "Comparison result (non - equality) " << not_equal_result << endl;

    return 0;
}
