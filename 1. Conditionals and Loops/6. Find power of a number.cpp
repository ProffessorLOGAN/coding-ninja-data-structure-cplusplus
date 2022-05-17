#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int x, n, val = 1, p = 1;
    cin >> x >> n;

    if (0 <= x <= 8 && 0 <= n <= 9)
    {

        while (p <= n)
        {
            val = val * x;
            p = p + 1;
        }
    }

    cout << val << endl;
}
