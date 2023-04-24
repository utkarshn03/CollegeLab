// 1. Write a program to store random numbers into an array of n integers and then find out the smallest and largest number stored in it. n is the user
// input.

#include <iostream>
using namespace std;

int main(){
    int n, s, l;
    cout<<"ENTER THE NUMBER OF ELEMENT IN THE ARRAY :- "<<endl;
    cin>>n;

    int * arr = new int[sizeof(int) * n];

    cout<<"THE RANDOM NUMBER GENERATED ARE :- "<<endl;

    for (int i=0; i<n; i++){    
        *(arr+i) = rand();
        cout<<*(arr+i)<<endl;
    }

    s = *(arr+1);
    l = *(arr+1);

    for (int i=0; i<n; i++){
        if (*(arr+i) > l) 
            l = *(arr+i);
        if (*(arr+i) < s) 
            s = *(arr+i);
    }

    cout<<"THE LARGEST AMONG THE RANDOM NUMBER IS :- "<<l<<endl;
    cout<<"THE SMALLEST AMONG THE RANDOM NUMBER IS :- "<<s;

    return 0;
}