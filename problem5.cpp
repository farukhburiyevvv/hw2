#include <iostream>
using namespace std;
int main() {
    double n1,n2;
    char c;
    // 1 3 5 3
    cin>>n1>>c>>n2;
    switch (c) {
        case '+':cout<<n1+n2;
            break;

        case '-':cout<<n1-n2;
            break;

        case '/':cout<<n1/n2;
            break;

        case '*':cout<<n1*n2;
            break;
    }
    return 0;
}
