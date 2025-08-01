#include <iostream>
using namespace std ;

int function ( int a, int b){
    if (a>b)
        return a;
    
    else 
        return b;
}


int main() {

    cout << function(18,10) << endl;
}
