#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter the Word: ";
    cin >> str;
    int sz = str.size();
    bool flag = true;
    for (int i = 0; i < sz / 2; i++)
    {
        if (str[i] != str[sz - i - 1])
        {
            flag = false;
            break;
        }
    }

       if (flag)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}