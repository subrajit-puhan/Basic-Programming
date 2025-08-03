#include <iostream>
using namespace std;

int main()
{
    int n,fac{1};
    cout << "Enter any number : " ;
    cin >> n;
    for (int i=1; i <= n; i++)
    {
        if(i<=1)
        fac = 1;
        else 
        fac *=i;


    }

    cout << fac << endl;
    return 0;
}