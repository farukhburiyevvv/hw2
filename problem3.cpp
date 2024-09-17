#include <iostream>
using namespace std;
int main() {
    string sex;
    double height ;
    cin>>sex>>height;
    if (sex == "M"){
        if (height<1.7) cout<<"Short";
        else if (height>= 1.7 && height<1.85) cout<<"Normal";
        else cout<<"Tall";
    } else {
        if (height<1.6) cout<<"Short";
        else if (height>= 1.6 && height<1.75) cout<<"Normal";
        else cout<<"Tall";
    }
    return 0;
}
