#include <iostream>
using namespace std;

int main()
{

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n, i, j = 0;

    cin >> n;

    if (0 <= n <= 26)
    {
        for (i = 1; i <= n; i++)
        {
            char ch = 'A' + j;
            for (j = 0; j < i; j++)
            {

                cout << ch;
            }

            cout << endl;
        }
    }
}