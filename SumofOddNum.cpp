#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int sum = 0;

    cout <<"Enter number" << endl;
    cin >>n;

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }
    cout << "Sum of Odd :" << sum << endl;
    return 0;
}