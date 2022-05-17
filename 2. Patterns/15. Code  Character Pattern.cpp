#include <iostream>
using namespace std;

int main()
{

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int N, i, j, k = 1;
    cin >> N;
    if (0 <= N <= 13)
    {
        for (i = 1; i <= N; i++)
        {

            k = i;
            for (j = 1; j <= i; j++)
            {
                char ch = 'A' + k - 1;
                cout << ch;
                k = k + 1;
            }

            cout << endl;
        }
    }
}
