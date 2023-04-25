#include <iostream>
using namespace std;
int SecondLargest(int *arr, int n){
    int second_largest=INT_MIN;
    int largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }else if(arr[i]<largest && arr[i]>second_largest){
            second_largest=arr[i];
        }
    }
    return second_largest;
}
int main(){
    int t=0;
    cout << "Enter the number of test cases: ";
    cin >> t;

    while(t){
        int n=0;
        cout << "Enter the size of the array: ";
        cin >> n;

        int *arr=new int[n];
        cout << "Enter the array elements: " << endl;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
        int output=SecondLargest(arr, n);
        cout << output << endl;
        t--;
    }
    return 0;
}
