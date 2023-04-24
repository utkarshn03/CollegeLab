#include<iostream>
using namespace std;

void merge(int* arr, int start, int mid, int end){
    int i=start;
    int j=mid+1;

    int* output=new int[end-start+1];
    int k=0;

    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            output[k]=arr[i];
            i++;
        }else{
            output[k]=arr[j];
            j++;
        }
        k++;
    }

    while(i<=mid){
        output[k]=arr[i];
        i++;
        k++;
    }
    while(j<=end){
        output[k]=arr[j];
        j++;
        k++;
    }

    k=0;
    for(int i=start;i<=end;i++){
        //cout << output[k] << " ";
        arr[i]=output[k];
        k++;
    }
    //cout << endl;
}
void MergeSort(int* arr, int start, int end){
    if(start>=end){
        return;
    }

    int mid=(start+end)/2;
    MergeSort(arr,start, mid);
    MergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

int main(){
    int n;
    cout<<"Enter the number of element"<<endl;
    cin>>n;

    int *arr = new int[n];

    cout<<"Enter the elemets"<<endl;
    for(int i=0; i<n; i++){
      cin>>arr[i];  
    }

    MergeSort(arr, 0, n);

    cout<<"The elements after sorting"<<endl;
    for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";  
    }

    return 0;
}