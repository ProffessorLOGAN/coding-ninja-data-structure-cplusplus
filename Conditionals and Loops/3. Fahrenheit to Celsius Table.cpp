#include <iostream>
using namespace std;

int main()
{

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int S, E, W, c;
    cin >> S;
    cin >> E;
    cin >> W;

    if (0 <= S <= 90 && S <= E <= 900 && 0 <= W <= 80)
    {
        while (S <= E)
        {

            c = 5 * (S - 32) / 9;
            cout << S << " " << c << endl;
            S = S + W;
        }
    }
}
