#include <iostream>
using namespace std;

int main(){
    int grade;

    cout << "Enter your Grade : " << endl;
    cin >> grade;

    if(grade <= 100 && grade > 90){
        cout << "Grade : A" <<endl; 
    }else if (grade <= 90 && grade > 80){
        cout << "Grade : B" << endl;
    }else if(grade <= 80 && grade > 70){
        cout << "Grade : C" << endl;
    }else{
        cout << "Grade : D" << endl;
    }
    return 0;
}