#include <iostream>
using namespace std;
void swap(int& a, int& b){
    int t=a;
    a=b;
    b=t;
}
void Rotate(int *arr,int d, int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    i=0;
    j=n-d-1;
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    i=n-d;
    j=n-1;
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main()
{
	int t;
    cout << "Enter the number of test cases to run: ";
	cin >> t;
	
	while (t--)
	{
		int size;
        cout << "Enter the size of the array: ";
		cin >> size;

		int *input = new int[size];

        cout << "Enter the array elements: ";
		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
        cout << "Enter the amout to rotate: ";
		cin >> d;

		Rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}
