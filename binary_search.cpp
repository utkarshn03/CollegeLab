#include <iostream>
using namespace std;
int binary_search(int* arr, int n, int x){
    int start=0;
    int end=n-1;
    while(!(start>end)){
        int mid=(start+end)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]>x){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int n=0;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr=new int[n];
    cout << "Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int t=0;
    cout << "Enter the number of test cases: ";
    cin >> t;

    while(t){
        int x=0;
        cout << "Enter the element to find: ";
        cin >> x;

        int output=binary_search(arr,n,x);
        cout << output << endl;
        t--;
    }
    return 0;
}
