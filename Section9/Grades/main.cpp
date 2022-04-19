#include <iostream>

using namespace std;

int main()
{
    int score {};
    char letter_grade {};

    cout << "Enter your score on the exam (0 - 100): ";
    cin >> score;

    if(score >= 0 && score <= 100){

        if(score >= 90)
            letter_grade = 'A';
        else if (score >= 80)
            letter_grade = 'B';
        else if (letter_grade >= 70)
            letter_grade = 'C';
        else if (score >= 60)
            letter_grade = 'D';
        else
            letter_grade = 'F';

        cout << "Your letter based on your score is " << letter_grade << endl;

        if(letter_grade == 'F')
            cout << "Sorry. You must repeat this class." << endl;
        else
            cout << "Congrats!!" << endl;

    } else{
        cout << "Sorry. " << score << " is not in range" << endl;
    }



    return 0;
}
