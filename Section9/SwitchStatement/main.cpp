#include <iostream>

/*
    Ask the user what grade they expect on an exam and
    tell them what they need to score to get it.
*/

using namespace std;

int main()
{
    char letter_grade {};

    cout << "Enter the grade you expect on the exam: " << endl;
    cin >> letter_grade;

    switch(letter_grade){
    case 'A':
    case 'a':
        cout << "You need a 90 or above, study hard!" << endl;
        break;

    case 'B':
    case 'b':
        cout << "You need 80 - 89 for a B, go study!" << endl;
        break;

    case 'C':
    case 'c:':
        cout << "You need 70 - 79 for an average grade." << endl;
        break;

    case 'D':
    case 'd:':
        cout << "Hmm. You should strive for a better grade." << endl;
        cout << "All you need is 60 - 69" << endl;
        break;

    case 'F':
    case 'f':
        {
            char confirm {};
            cout << "Are you sure you want to get F (Y/N): ";
            cin >> confirm;
            if(confirm == 'y' || confirm == 'Y')
                cout << "OK. I guess you did not study." << endl;
            else if (confirm == 'n' || confirm == 'N')
                cout << "Good. Then go study" << endl;
            else
                cout << "Illegal choice." << endl;
            break;
        }


    default:
        cout << "Sorry. That is not a valid grade." << endl;

    }

    return 0;
}
