#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else
    {
        return (b % a, a);
    }
}
int main()
{
    int a, b;

    cout << "ENTER THE FIRST NUMBER :- " << endl;
    cin >> a;

    cout << "ENTER THE SECOND NUMBER :- " << endl;
    cin >> b;

    cout<<"THE GCD OF "<<a<<" AND "<<b<<" IS :- "<<gcd(a, b);
    return 0;
}