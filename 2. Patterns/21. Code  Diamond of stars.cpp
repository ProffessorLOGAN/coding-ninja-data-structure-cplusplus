#include <iostream>
using namespace std;

int main()
{

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n, b, i, j, k, a, l;
    cin >> n;

    if (n % 2 == 1)
    {
        if (0 <= n <= 49)
        {
            a = (n / 2) + 1;
            for (i = 1; i <= a; i++)
            {
                for (j = 1; j <= a - i; j++)
                {
                    cout << " ";
                }
                for (k = 1; k <= 2 * i - 1; k++)
                {
                    cout << '*';
                }
                cout << endl;
            }

            b = (n / 2);
            for (i = 1; i <= b; i++)
            {
                for (j = 1; j <= i; j++)
                {
                    cout << " ";
                }

                for (k = 2 * i - 1; k <= 2 * b - 1; k++)
                {
                    cout << '*';
                }
                cout << endl;
            }
        }
    }
}
