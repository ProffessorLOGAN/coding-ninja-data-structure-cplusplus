#include <iostream>
using namespace std;

int main()
{

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int N, i, j, k = 1, l;
    cin >> N;

    for (i = 1; i <= N; i++)
    {
        for (l = N - 1; l >= i; l--)
        {
            cout << " ";
        }
        k = i;
        for (j = 1; j <= i; j++)
        {
            cout << k;
            k = k + 1;
        }

        cout << endl;
    }
}
