// 2. Write a program to store random numbers into an array of n integers,
// where the array must contain some duplicates. Do the following:
// A) Find out the total number of duplicate elements.
// B) Find out the most repeating element in the array.

#include <iostream>
using namespace std;

int main(){

    int n, temp1=0, temp2=0;
    cout<<"ENTER THE NUMBER OF ELEMENT IN THE ARRAY :- "<<endl;
    cin>>n;

    int *arr1 = new int[sizeof(int)*n];

    for(int i=0; i<n; i++){
        *(arr1+i) = rand() % 10;
        cout<<*(arr1+i)<<endl;
    }

    int l = *(arr1+1);

    for(int i=0; i<n; i++){
        if (*(arr1+i) > l){
            l = *(arr1+i);
        }
    }

    int *arr2 = new int[sizeof(int) * l];

    for(int i=0; i<l; i++){
        *(arr2+i) = 0;
    }

    for(int i=0; i<n; i++){
        (*(arr2+*(arr1+i)))++;
    }

    for(int i=0; i<l; i++){
        if((*(arr2+i)) > 1){
            temp1++;
        }

        if ((*(arr2+i)) > temp2){
            temp2 = (*(arr2+i));
        }
    }

    if (temp1 > 1){
        cout<<"THE NUMBER OF DUPLICATE ELEMENTS ARE : - "<<temp1<<endl;
    } else {
        cout<<"NO DUPLICATE ELEMENT"<<endl;
    }


    cout<<"THE ELEMENT WITH MOST OCCURANCE IS : - "<<arr2[temp1];
    return 0;
}