#include <iostream>
#include <ctime>
using namespace std;

typedef struct pqueue
{
    int *arr;
    int len;
    int *head, *tail;
} pqueue;

int *create(int length)
{
    int *arr = new int[length];

    for (int i = 0; i < length; i++)
    {
        arr[i] = rand() % 10;
    }

    return arr;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int *arr, int N, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < N && arr[left] > arr[largest])
        largest = left;

    if (right < N && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);

        heapify(arr, N, largest);
    }
}

void heapsort(int *arr, int len)
{
    for (int i = len / 2 - 1; i >= 0; i--)
        heapify(arr, len, i);

    for (int i = len - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void bubbleSort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void display(int *arr, int length)
{
    cout << "The elements are :- " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int choice, *arr, len;
    int flag = 1;
    time_t start, diff, start1, diff1;
    int arr1[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    while (flag == 1)
    {
        cout << "0. QUIT\n1. INPUT RANDOM NUMBER TO ARRAY\n2. DISPLAY THE ARRAY\n3. SORT USING MAX HEAP\n4. SORT THE ALGORITHM BY USING ANY OTHER ALGORITH\n5. TIME COMPLEXITY TO SORT ACCENDING OF RANDOM NUMBER\n6. TIME COMPLEXITY TO SORT IN ACCENDING ORDER OF THE ALREADY SORTED ARRAY\n7. TIME COMPLEXITY TO SORT IN ACCENSING OF ALREADY SORTED DESENDING ARRAY\n8. TIME COMPLEXITY TO SORT ASSENDING OF ALL CASES\n9. EXTRACT LARGEST ELEMENT\n10. REPLACE VALUE OF THE NODE WITH NEW VALUE\n11. INSERT A NEW ELEMENT\n12. DELETE AN ELEMENT\n";
        cin >> choice;
        switch (choice)
        {

        case 0:
            flag = 0;
            break;
        case 1:
            cout << "Enter the length of the array :- " << endl;
            cin >> len;
            arr = create(len);
            break;

        case 2:
            display(arr, len);
            break;

        case 3:
            heapsort(arr, len);
            break;

        case 4:
            bubbleSort(arr, len);
            break;

        case 5:
            start = clock();
            heapsort(arr, len);
            diff = clock() - start;
            cout << "THE TIME TAKEN IS :- " << (double)diff;
            break;

        case 6:
            start = clock();

            heapsort(arr1, 9);
            diff = clock() - start;
            cout << "THE TIME TAKEN IS :- " << (double)diff;
            break;

        case 7:
            start = clock();
            heapsort(arr, len);
            diff = clock() - start;
            cout << "THE TIME TAKEN IS :- " << (double)diff;
            break;

        case 8:
            cout << "Bubble Sort \t \t Heap Sort" << endl;
            start1 = clock();
            bubbleSort(arr, len);
            diff1 = clock() - start1;
            start = clock();
            heapsort(arr, len);
            diff = clock() - start;
            cout << (double)diff1 << "\t \t" << (double)diff;

            break;

        case 9:
            heapsort(arr, len);
            cout<<"THE LARGEST ELEMENT IS :- "<<arr[len-1];
            break;

        case 10:
            int n;
            cout<<"ENTER THE NEW ELEMENT :- ";
            cin>>n;

            arr[len++] = n;
            break;

        case 11:
            break;
        default:
            break;
        }
    }
    return 0;
}