#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int test_scores [5] {100, 95, 99, 87, 88};
    
    test_scores[0] = 90; //assignment statement
    
    cout << "First score at index 0 is " << test_scores[0]  << endl ;
    cout << "Second score at index 1 is " << test_scores[1]  << endl ;
    cout << "Third score at index 2 is " << test_scores[2]  << endl ;
    cout << "Fourth score at index 3 is " << test_scores[3]  << endl ;
    cout << "Fifth score at index 4 is " << test_scores[4]  << endl ;
    
    char vowels [] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is " << vowels[0] << endl;
    cout << "The last vowel is " << vowels[4] << endl;
    // cin >> vowels[5]; That is out of bound.
    
    double hi_temps [] {90.1, 89.8, 77.5, 81.6};
    
    cout << "\nThe first high temperature is " << hi_temps[0] << endl;
    hi_temps[0] = 100.7;
    cout << "The first high temperature is now " << hi_temps[0] << endl;
    
    cout <<"\nEnter your 5 test scores: \n";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    
    for(int i=0; i<5; i++){
        cout << test_scores[i] << endl;
    }
    
    cout << "\nThe memory address of the test_scores array is at " << test_scores << endl;
	return 0;
}
