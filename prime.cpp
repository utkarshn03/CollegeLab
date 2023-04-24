// Write a program to test whether a number n, entered through keyboard is
// prime or not by using different algorithms you know for at least 10 inputs
// and note down the time complexity by step/frequency count method for each
// algorithm & for each input. Finally make a comparison of time complexities
// found for different inputs, plot an appropriate graph & decide which
// algorithm is faster.

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int *n = new int[sizeof(int) * 10];
    int c = 0;

    for (int i = 0; i < 2; i++)
    {
        cout << "THE THE NUMBER " << i + 1 << " :- " << endl;
        cin >> *(n + i);
        //cout << n[i] << endl;
    }

    // ALGO 1

    cout << "FOR ALGO 1" << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j <= (*(n + i)); j++)
        {
            cout << *(n+i) << endl;
            if ((*(n+i)) % j == 0){
                c++;
            }
        }
        if (c == 2)
        {
            cout << *(n + i) << " IS PRIME NUMBER" << endl;
        } else {
            cout<<"NOT A PRIME"<<endl;
        }

        c = 0;
    }

    // ALGO 2

    // for(int i=0; i<10; i++){
    //     if (*(n+i) <= 1){
    //         cout<<"THE NUMBER IS NOT PRIME"<<endl;
    //     }

    //     if (*(n+i) == 2 || *(n+i) == 3){
    //         cout<<"THE NUMBER IS PRIME"<<endl;
    //     }

    //     if (*(n+i) % 2 ==0 || *(n+i) % 3 ==0){
    //         cout<<"NOT A PRIME NUMBER"<<endl;
    //     }

    //     for(int j=5; j<sqrt(*(n+i)); j += 6){
    //         if(*(n+i) % j == 0 || *(n+i) % (j+2) == 0){
    //             cout<<"NOT A PRIME NUMBER"<<endl;
    //         } else {
    //             cout<<"IS A PRIME NUMBER"<<endl;
    //         }
    //     }
    // }
    return 0;
}