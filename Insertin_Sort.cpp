#include <iostream>
using namespace std;
void InsertionSort(int *arr, int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>current){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=current;
    }
}
int main(){
    int t=0;
    cout << "Enter the number of test cases: ";
    cin >> t;

    while(t){
        int n=0;
        cout << "Enter the number of elements: ";
        cin >> n;

        int *arr=new int[n];
        cout << "Enter the elements of the array: " << endl;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        InsertionSort(arr,n);
        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}
