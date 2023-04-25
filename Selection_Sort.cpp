#include <iostream>
using namespace std;
void selection_sort(int *arr, int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        int minval=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<minval){
                minval=arr[j];
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
}
int main(){
    int n=0;
    cout << "Enter the size of array: ";
    cin >> n;

    int*arr=new int[n];
    cout << "Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << endl;

    selection_sort(arr, n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
