// 3. Write a program to rearrange the elements of an array of n integers such that all even numbers are
// followed by all odd numbers. How many ways you can solve this problem? Write your approaches and
// strategy for solving this problem.

#include <iostream>
using namespace std;

int main(){

    int n, temp1=0;
    cout<<"ENTER THE NUMBER OF ELEMENT IN THE ARRAY :- "<<endl;
    cin>>n;
    int temp2=n-1;

    int *arr1 = new int[sizeof(int)*n];

    for(int i=0; i<n; i++){
        *(arr1+i) = rand() % 10;
        cout<<*(arr1+i)<<endl;
    }

    for(int i=0; i<n; i++){

        while(temp1 <= temp2){
        if(*(arr1+i)%2 == 0){
            int temp = *(arr1+i);
            *(arr1+i) = *(arr1+temp1);
            *(arr1+temp1) = temp;
            temp1++;
        } else {
            int temp = *(arr1+i);
            *(arr1+i) = *(arr1+temp2);
            *(arr1+temp2) = temp;
            temp2--;
        }
        }
    }

    for(int i=0; i<n; i++){
        cout<<*(arr1+i)<<" ";
    }

    return 0;
}