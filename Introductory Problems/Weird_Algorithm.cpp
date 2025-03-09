#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << n << " ";
    while (n != 1)
    {
        if (n & 1)
        {
            //Means n is even now then follow the instruction for n being even.
            n = (n * 3) + 1;
        }
        else
        {
            //Means n is even now then again follow the instruction for n being even.
            n /= 2;
        }

        cout << n << " ";
    }
}