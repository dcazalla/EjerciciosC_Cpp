#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int numero_valores;
    std::vector<int> tabla;
    cin >> numero_valores;
    
    for(int i=0; i < numero_valores; ++i){
        int temp;
        cin >> temp;
        tabla.push_back(temp);
    }
    
    
    for(int i= tabla.size() - 1; i >= 0; i--){
        cout << tabla.at(i) << "\n";

    }
    
    return 0;
}

