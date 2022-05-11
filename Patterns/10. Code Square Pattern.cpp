#include<iostream>
using namespace std;

int main()
{

    int n, i;
    cin >> n;

    if (0 <= n <= 50)
    {
        for (i = 1; i <= n; i++)
        {
            cout << n;
        }
        cout << endl;
    }
}