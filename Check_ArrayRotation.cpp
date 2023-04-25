#include <iostream>
using namespace std;
int CheckRotation(int *arr, int n){
    int i=0;
    while(i<n-1){
        if(arr[i]>=arr[i+1]){
            i++;
            break;
        }
        i++;
    }
    return i;
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
        
        int output=CheckRotation(arr, n);
        cout << output << endl;
        t--;
    }
    return 0;
}
