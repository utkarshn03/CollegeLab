// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int l, int r, int x)
// {
// 	if (r >= l) {
// 		int mid = l + (r - l) / 2;

// 		if (arr[mid] == x)
// 			return mid;

// 		if (arr[mid] > x)
// 			return binarySearch(arr, l, mid - 1, x);

// 		return binarySearch(arr, mid + 1, r, x);
// 	}

// 	return -1;
// }

// int main(void)
// {
// 	int arr[] = { 3, 5, 67, 5, 23 };
// 	int x = 67;
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	int result = binarySearch(arr, 0, n - 1, x);
// 	(result == -1)
// 		? cout << "Element is not present in array"
// 		: cout << "Element is present at index " << result;
// 	return 0;
// }


#include<iostream>
using namespace std;

int binarySearch(int *arr, int left, int right, int element){

    if (right < left){
        return -1;
    }

    int mid = (left+right)/2;

    if (arr[mid] == element){
        return mid;
    } else if (arr[mid] < element){
        return binarySearch(arr, left, mid-1, element);
    } else {
        return binarySearch(arr, mid+1, right, element);
    }
}

int main(){

    cout<<"Enter the number of elements :- ";
    
    int n, element;
    cin>>n;

    int *arr = new int[n];

    cout<<"Enter the elements in the array :- \n";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the element you need to search in the array :- "<<endl;
    cin>>element;

    int index = binarySearch(arr, 0, n, element);

    if (index == -1){
        cout<<"The element is not found in the array";
    } else {
        cout<<"The element is present in the "<<index<<" th position";
    }

    return 0;
}