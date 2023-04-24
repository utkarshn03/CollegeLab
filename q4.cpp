#include <iostream>
using namespace std;
int exponent(int base, int exp){
    if(exp==0){
        return 1;
    }

    int temp = exponent(base, exp/2);
    if(exp%2==0){
        return temp * temp; 
    }
    return temp * temp * base;
}
int main(){
    int n=0;
    cout << "Enter the base value: ";
    cin >> n;

    int x=0;
    cout << "Enter the exponent value: ";
    cin >> x;

    int answer=exponent(n, x);
    cout << "The Answer is " << answer<<endl;
}