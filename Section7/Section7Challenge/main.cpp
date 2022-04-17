#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
	vector <int> vector1;
	vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    for(int i=0; i<vector1.size(); i++){
            cout << vector1.at(i) << endl;
    }
    
    cout << "The length of vector1 is " << vector1.size() << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    for(int i=0; i<vector2.size(); i++){
            cout << vector2.at(i) << endl;
    }
    
    cout << "The length of vector2 is " << vector2.size() << endl;
    
    vector <vector<int>> vector_2d;
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    for(int i=0; i<vector_2d.at(0).size(); i++){
        for(int j=0; j<vector_2d.at(1).size(); j++){
            cout << vector_2d.at(i).at(j) << endl;
        }
        
        cout << endl;
        
    }
    
    //Wrong implementation
    vector1.at(0) = 1000;
    
    for(int i=0; i<vector_2d.at(0).size(); i++){
        for(int j=0; j<vector_2d.at(1).size(); j++){
            cout << vector_2d.at(i).at(j) << endl;
        }
        
        cout << endl;
        
    }
    
    

    
    return 0;
}
