#include <iostream>

using namespace std;

int main(){

    int a,b,q,r=1;
    int gcd;

    cout<<"Enter The 2 Values To Find GCD:\n";
    cin>>a;
    cin>>b;

    //Implementation of the Successive Divisions concept:
    while (r!=0) {
        q = b / a;
        r = b - (a * q);
        b = a;
        a = r;
        gcd=b;
    }

    cout<<"The GCD is: "<<gcd<<endl;
    if (gcd==1){
        cout<<"The 2 Numbers Are Relatively Prime!";
    } 


    return 0;
} 