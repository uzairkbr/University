#include <iostream>

using namespace std;

int main() {
    
    int number ;
    
    cout << "Enter number for printing its table : " ;
    cin >> number ;
    
    for(int i = 1 ; i <= 10 ; i++)
    {
        cout << number << " * " << i <<  " = " << number*i << endl;
    }

    return 0;
}