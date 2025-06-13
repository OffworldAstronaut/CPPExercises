#include <iostream>
#include <string>
#include <format>

using namespace std;

int main(){ 
    string name;

    cout << "What's your name?\n";
    cin >> name;
    cout << format("Hello, {}!\n", name);
    
    return 0;
}