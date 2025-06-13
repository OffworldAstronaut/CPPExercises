#include <iostream>
#include <string>
#include <vector>
#include <format>

using namespace std; 

int main(){ 
    vector<int> numbers; 

    for (int i=0; i<10; i++)
    {
        numbers.push_back(i);
    }

    cout << "The vector's elements are:\n";

    for (int num : numbers)
    {
        cout << format("{} ", num);
    }
    cout << "\n";
}