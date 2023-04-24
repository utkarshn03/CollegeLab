#include<iostream>
#include<climits>
using namespace std;

int min_dc = INT_MAX;
int max_dc = INT_MIN; 

void bruteForce(int *arr, int size){
    int min = INT_MAX, max = INT_MIN;

    for(int i=0; i<size; i++){
        if (arr[i] < min){
            min = arr[i];
        }

        if (arr[i] > max){
            max = arr[i];
        }
    }

    cout<<"The max is :- "<<max<<endl;
    cout<<"The Min is :- "<<min;
}

// void merge(int* arr, int start, int mid, int end){
//     int i=start;
//     int j=mid+1;

//     int* output=new int[end-start+1];
//     int k=0;

//     while(i<=mid && j<=end){
//         if(arr[i]<=arr[j]){
//             output[k]=arr[i];
//             i++;
//         }else{
//             output[k]=arr[j];
//             j++;
//         }
//         k++;
//     }

//     while(i<=mid){
//         output[k]=arr[i];
//         i++;
//         k++;
//     }
//     while(j<=end){
//         output[k]=arr[j];
//         j++;
//         k++;
//     }

//     k=0;
//     for(int i=start;i<=end;i++){
//         arr[i]=output[k];
//         k++;
//     }
// }
// void MergeSort(int* arr, int start, int end){
//     if(start>=end){
//         return;
//     }

//     int mid=(start+end)/2;
//     MergeSort(arr,start, mid);
//     MergeSort(arr, mid+1, end);
//     merge(arr, start, mid, end);
// }

int main()
{
    int n;
    cout<<"Enter the number of elements";
    cin>>n;

    int *arr = new int[n];
    cout<<"Enter the elements"<<endl;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bruteForce(arr, n);
    // divideConquer(arr, n);
    return 0;
}