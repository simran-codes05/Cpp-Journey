#include <iostream>
using namespace std;

int main(){
    int fact = 1;
    int n;
    cout << "Enter number : "<< endl;
    cin >> n;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    cout << "Factorial of number :" << fact;
    return 0;
}