#include <iostream>
using namespace std;
int main() {
    long int num ;
    cin>>num;
    if (num>-2147483647 && num<2147483647){
        cout<<"YES";
    } else cout<<"NO";
    return 0;
}
