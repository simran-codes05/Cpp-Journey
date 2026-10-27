#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    bool isOff = true;
    float price = 20.10;
    double newprice = 100.21;

    cout << "Enter value of a : "<< endl;
    cin >> a;

    cout << "Enter value of b : "<< endl;
    cin >> b;
    
    cout << "sum of a and b = " << (a+b) << endl;

    cout << "Value of isOff: " << isOff <<endl;

    cout << "Price in float : " << price <<endl;

    cout << "Price in double : "<< newprice << endl;
    return 0;
}