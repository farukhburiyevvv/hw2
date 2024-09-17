#include <iostream>
using namespace std;
int main() {
    int num1,num2 ;
    cin>>num1>>num2;
    if (num1 == 1 ){
        cout<<"Bus";
    } else if(num2 == 1){
        cout<<"Walk";
        return 0;
    } else cout<<"Bike";
    return 0;
}
