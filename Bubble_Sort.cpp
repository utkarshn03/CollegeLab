#include <iostream>
using namespace std;
void swap(int& a, int& b){
    int temp=a;
    a=b;
    b=temp;
}
void BubbleSort(int *arr, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){
    int t=0;
    cout << "Enter the number of test cases to run: ";
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

        BubbleSort(arr, n);
        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}
