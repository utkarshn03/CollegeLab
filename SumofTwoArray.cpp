#include <iostream>
using namespace std;
void SumofTwo(int *arr1, int n, int *arr2, int m, int *output){
    int k=(n>m)?n:m;
    int i=n-1;
    int j=m-1;
    int carry=0;

    while(i>=0 && j>=0){
        output[k]=arr1[i]+arr2[j]+output[k];
        if(output[k]>9){
            carry=output[k]/10;
            output[k]=output[k]%10;
        }else{
            carry=0;
        }
        i--;
        j--;
        k--;
        output[k]=carry;
    }
    while(i>=0){
        output[k]=arr1[i];
        i--;
        k--;
    }
    while(j>=0){
        output[k]=arr2[j];
        j--;
        k--;
    }
}
int main()
{
	int t;
    cout << "Enter the number of test cases to run: ";
	cin >> t;

	while (t--)
	{
		int size1;
        cout << "Enter the size of the first array: ";
		cin >> size1;

		int *input1 = new int[size1];

        cout << "Enter the elements of the first array: " << endl;
		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}

		int size2;
        cout << "Enter the size of the second array: ";
		cin >> size2;

		int *input2 = new int[size2];

        cout << "Enter the elements of the second array: " << endl;
		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}

		int outsize = 1 + max(size1, size2);

		int *output = new int[outsize];

		SumofTwo(input1, size1, input2, size2, output);

		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}

		delete[] input1;
		delete[] input2;
		delete[] output;
		cout << endl;
	}

	return 0;
}  
