#include <iostream>
using namespace std;
int main() {
    int n1,n2,n3,n4;
    int n = 0;
    // 1 3 5 3
    cin>>n1>>n2>>n3>>n4;
    int myNumbers[4] = {n1, n2, n3, n4};
    for(int i = 0; i<4;i++){
        for(int j = 0;j<4;j++){
            if (myNumbers[i] == myNumbers[j] && i!=j) {
                myNumbers[i] = rand();
                n++;
            }
        }
    }
    cout<<n;
    return 0;
}
