#include <iostream>
using namespace std;
void swap(int& a, int& b){
    int t=a;
    a=b;
    b=t;
}
void sort(int *arr, int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }else if(arr[mid]==1){
            mid++;
        }else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
#include <iostream>
using namespace std;


int main()
{
	int t;
    cout << "Number of test cases: ";
	cin >> t;
	while (t--)
	{
		int size;
        cout << "Enter the size of the array: ";
		cin >> size;

		int *arr = new int[size];

        cout << "Enter the array elements: " << endl;
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}
