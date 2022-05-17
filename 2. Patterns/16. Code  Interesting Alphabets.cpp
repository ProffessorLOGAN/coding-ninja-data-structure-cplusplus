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
        for (i = n; i >= 1; i--)
        {

            for (j = i; j <= n; j++)
            {
                char ch = 'A' + j - 1;
                cout << ch;
            }

            cout << endl;
        }
    }
}
