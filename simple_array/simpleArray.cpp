#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numero_lineas;
    int numero_eva, total = 0;
    
    cin >> numero_lineas;
    
    for (int i=0; i<numero_lineas;i++) {
        cin >> numero_eva;
        total += numero_eva;
    }
    
    cout << total;
    
    return 0;
}