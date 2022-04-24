#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    int scores [] {100, 90, 97};

    for(int score : scores){
        cout << score << endl;
    }

    cout << "----------------------------------" << endl;

    for(auto score : scores){
        cout << score << endl;
    }

    cout << "----------------------------------" << endl;

    vector<double> temps {87.2, 77.1, 80.0, 72.5};

    double average_temp {};
    double running_sum {};

    for (auto temp : temps){
        running_sum += temp;
    }

    average_temp = running_sum / temps.size();
    cout << "Average temp is " << average_temp << endl;

    cout << "----------------------------------" << endl;

    //initializer list
    average_temp = 0.0;
    running_sum = 0.0;
    int sizee {};

    for(auto temp : {60.2, 80.1, 90.0, 78.2}) {
        running_sum += temp;
        sizee++;
    }

    average_temp = running_sum / sizee;
    cout << "Average temp is " << average_temp << endl;

    cout << "----------------------------------" << endl;

    // looping through a string
    for(auto c : "Frank")
        cout << c << endl;

    cout << "----------------------------------" << endl;



    return 0;
}
