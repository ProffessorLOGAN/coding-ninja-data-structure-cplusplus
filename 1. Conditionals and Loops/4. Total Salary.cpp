#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

int main()
{
    // Write your code here
    int basic, allow, total;
    double hra, da, pf;
    char grade;
    cin >> basic >> grade;
    grade = (char)toupper(grade);

    if (grade == 'A')
        allow = 1700;
    else if (grade == 'B')
        allow = 1500;
    else if (grade >= 'C' && grade <= 'Z')
        allow = 1300;

    if (0 <= basic <= 7500000)
    {
        total = round(basic + (basic * 0.2) + (basic * 0.5) + allow - (basic * 0.11));
    }
    cout << total << endl;
}
