#include <iostream>
using namespace std;

int main()
{

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */

    int n, i, j, k;
    cin >> n;

    if (0 <= n <= 50)
    {
        for (i = 1; i <= n; i++)
        {
            for (k = 1; k <= n - i; k++)
            {
                cout << " ";
            }

            for (j = 1; j <= i; j++)
            {

                cout << j;
            }

            cout << endl;
        }
    }
}
