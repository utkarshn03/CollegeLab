#include <iostream>
using namespace std;
void pushzeroes(int* arr, int n){
    int i=0;
    int j=1;
    while(j<n){
        if(arr[i]>0){
            i++;
        }
        if(arr[j]!=0){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
        j++;
    }
}
int main(){
    int t=0;
    cout << "Enter the number of test cases: ";
    cin >> t;

    int n=0;
    cout << "Enter the size of array: ";
    cin >> n;

    while(t){
        int *arr=new int[n];
        cout << "Enter the array elements: ";
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        pushzeroes(arr,n);
        for(int j=0;j<n;j++){
            cout << arr[j] << " ";
        }
        cout << endl;
        delete []arr;
        t--;
    }
    return 0;
}
