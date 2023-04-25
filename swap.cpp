#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    int *arr = new int[sizeof(int) * 10];

    cout << "ENTER THE NUMBER OF ELEMENT IN THE ARRAY :- " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> (*(arr + i));
    }

    cout<<"ORIGINAL ARRAY :- "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout << (*(arr + i)) << " ";
    }

    for (int i = 0; i < n % 2 == 0 ? n : n - 1; i++)
    {
        if (i % 2 == 0)
            temp = *(arr + i);
        else
            *(arr + i) = *(arr + (i - 1));
        *(arr + (i - 1)) = temp;
    }

    cout<<"FINAL ARRAY :- "<<endl;

    for (int i; i < n; i++)
    {
        cout << (*(arr + i)) << " ";
    }
    return 0;
}