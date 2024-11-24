#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> vec1;
    vector<int> vec2;

    //adding values to v1
    vec1.push_back(10);
    vec1.push_back(20);
    cout << "Size of v1: " <<vec1.size();

    //adding values to v2
    vec2.push_back(100);
    vec2.push_back(200);
    cout << "Size of v2: " <<vec2.size();

    //declaring 2d array
    vector<vector<int>> vector_2d;

    //adding vec1 to vector_2d
    vector_2d.push_back(vec1);

    //adding vec1 to vector_2d
    vector_2d.push_back(vec2);

    //display the items of vector_2d
    cout << "\n\nFirst Time";
    cout << "\n" << vector_2d.at(0).at(0);
    cout << "\n" << vector_2d.at(0).at(1);
    cout << "\n" << vector_2d.at(1).at(0);
    cout << "\n" << vector_2d.at(1).at(1);

    //changing 1 value of vec1
    vec1.at(0) = 1000;
    cout << "\n\nValue at vect1(0)" << vec1.at(0);

    //declaring again
    cout <<"\n\nSecond Time";
    cout << "\n" << vector_2d.at(0).at(0);
    cout << "\n" << vector_2d.at(0).at(1);
    cout << "\n" << vector_2d.at(1).at(0);
    cout << "\n" << vector_2d.at(1).at(1);

    return 0;
}