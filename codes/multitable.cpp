#include <iostream>
#include <format>

using namespace std; 

int main (){
    int num;

    cout << "Write the number to build the multiplication table from: \n";
    cin >> num; 

    for (int i=1; i <= 10; i++)
    {
        cout << format("{} * {} = {}\n", num, i, num * i); 
    }
}