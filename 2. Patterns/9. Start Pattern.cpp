#include <iostream>
using namespace std;

int main()
{

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int N, i, j, k = 1, l;
    cin >> N;

    for (i = 1; i <= N; i++) // column
    {
        for (l = N - 1; l >= i; l--) // space
        {
            cout << " ";
        }

        for (j = 1; j <= k; j++) // print
        {
            cout << "*";
        }
        k = k + 2;
        cout << endl; // new line
    }
}
