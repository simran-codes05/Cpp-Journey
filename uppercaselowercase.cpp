#include <iostream>
using namespace std;

// A = 65, a = 97
int main(){
    char ch ;
    cout << "Enter the character to check : " << endl;
    cin >> ch;
    
    if(ch >= 'A' && ch <= 'Z' ){
        cout << "UpperCase" << endl;
    }else{
        cout << "LowerCase" << endl;
    }
    return 0;
}