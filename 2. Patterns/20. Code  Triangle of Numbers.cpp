#include <iostream>
using namespace std;

int main()
{
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n, i, j, k;
    cin >> n;

    if (0 <= n <= 49)
    {
        for (i = 1; i <= n; i++)
        {
            for (k = 1; k <= n - i; k++)
            {
                cout << " ";
            }

            for (j = i; j < 2 * i - 1; j++)
            {

                cout << j;
            }
            for (j = 2 * i - 1; j > i - 1; j--)
            {

                cout << j;
            }

            cout << endl;
        }
    }
}
