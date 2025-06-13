#include <iostream>

using namespace std;

int main(){ 
    int n_atual = 1; 
    int n_anterior = 1; 
    int aux = 0; 

    int max_n = 16;

    for (int i = 0; i < max_n; i++)
    {
        cout << to_string(n_atual) + "\n"; 
        aux = n_atual; 
        n_atual = n_atual + n_anterior; 
        n_anterior = aux; 

    }
}