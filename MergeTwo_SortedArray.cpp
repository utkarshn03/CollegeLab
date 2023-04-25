#include <iostream>
using namespace std;
void MergeSorted(int *arr, int n, int *arr1, int m, int *out){
    int i=0;
    int j=0;
    int k=0;
    while(i<n&&j<m){
        if(arr[i]<arr1[j]){
            out[k]=arr[i];
            i++;
        }else{
            out[k]=arr1[j];
            j++;
        }
        k++;
    }

    while(i<n){
        out[k]=arr[i];
        i++;
        k++;
    }
    while(j<m){
        out[k]=arr1[j];
        j++;
        k++;
    }
}
int main(){
    int t=0;
    cout << "Enter the number of test cases: ";
    cin >> t;

    while(t){
        int n=0;
        cout << "Enter the size of array: ";
        cin >> n;

        int *arr = new int[n];
        cout << "Enter the array elements: " << endl;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
        int m=0;
        cout << "Enter the size of the second array: ";
        cin >> m;

        int *arr1 = new int[m];
        cout << "Enter the array elements: " << endl;
        for(int i=0;i<m;i++){
            cin >> arr1[i];
        }

        int *out=new int[n+m];
        MergeSorted(arr, n, arr1, m, out);
        for(int i=0;i<n+m;i++){
            cout << out[i] << " ";
        }
        cout << endl;
        delete[] out;
        delete[] arr;
        delete[] arr1;
        t--;
    }
    return 0;
}
