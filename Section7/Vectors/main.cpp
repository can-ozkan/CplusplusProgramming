#include <vector> //do not forget this to be able to use vectors
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	vector <int> test_scores {100, 95, 99, 87 ,88};
    
    for(int i=0; i<5; i++){
            cout << test_scores[i] << endl; //accessing vector elements - array syntax
    }
    
    for(int i=0; i<test_scores.size(); i++){
            cout << test_scores.at(i) << endl; //accessing vector elements - vector syntax
    }
    
    //chaning the contents of the vector elements - vector syntax
    cout << "Please, enter your 5 scores: " << endl;
    for(int i=0; i<test_scores.size(); i++){
            cin >> test_scores.at(i);
    }
    
    //displaying scores
    cout << "\nUpdated scores are as follows: " << endl;
    for(int i=0; i<test_scores.size(); i++){
            cout << test_scores.at(i) << endl; //accessing vector elements - vector syntax
    }
    
    //Vectors will automatically allocate the required space.
    test_scores.push_back(80);
    test_scores.push_back(90);
    cout << "\nTwo extra scores were added" << endl;
    for(int i=0; i<test_scores.size(); i++){
            cout << test_scores.at(i) << endl; //accessing vector elements - vector syntax
    }
    
    //vector <char> vowels; this is an empty vector
    //vector <char> vowels (5); this is an vector containing 5 elements with initializin to 0
    
    //Example of 2D vectors
    cout << "----------------------------------------------------------------" << endl;
    
    vector <vector<int>> movie_ratings{
            {1,2,3,4},
            {1,2,4,4},
            {1,3,4,5}
    };
    
    cout << "\nHere are the movie ratings for reviwer #1 using array syntax:" << endl;
    for(int i=0; i<4; i++){
            cout << movie_ratings[0][i] << endl;
    }
    
    cout << "\nHere are the movie ratings for reviwer #1 using vector syntax:" << endl;
    for(int i=0; i<4; i++){
            cout << movie_ratings.at(0).at(i) << endl;
    }
    
    
	return 0;
}
