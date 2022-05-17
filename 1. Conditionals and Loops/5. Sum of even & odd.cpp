#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int N, esum = 0, osum = 0, temp = 0;

    cin >> N;

    if (0 <= N <= 100000000)
    {

        while (N)
        {

            temp = N % 10;
            N = N / 10;
            if (temp % 2 == 0)
            {
                esum = esum + temp;
            }

            if (temp % 2 != 0)
            {
                osum = osum + temp;
            }
        }
    }
    cout << esum << " " << osum << endl;
}
