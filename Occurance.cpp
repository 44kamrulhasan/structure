#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "ABCDAAABBCAB";
    int spc = 'A';
    int count = 0;

    for (int i = 0; str[i] >= '\0'; i++)
    {
        if (str[i] == 'A')
        {
            count++;
        }
    }
    cout << "Occurrence of A is: " << count << endl;

    return 0;
}