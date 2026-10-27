#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;

    if(n % 2 == 0){
        cout << "It is an even number" << endl;
    }else{
        cout << "It is Odd number" << endl;
    }
    return 0;
}