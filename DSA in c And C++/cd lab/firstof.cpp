#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s[0] == 'E')
    {
        cout << "First of S is " << s[0] << endl;
    }
    else if (s[0] >= 97 && s[0] <= 122)
    {
        cout << "fitst of s is " << s[0] << endl;
    }
    else
    {
        cout << "We Have Non Terminal at first" << endl;

        vector<string> v(s.length());
        cout << "Enter The Production of " << s[0] << " And " << s[1] << endl;
        for (int i = 0; i < s.length(); i++)
        {
            cin >> v[i];
        }
        for (auto it : v)
        {
            for (auto b : it)
            {
                if (b == 'E')
                {
                    cout << "First of S is " << b << endl;
                }
                else if (b >= 97 && b <= 122)
                {
                    cout << "fitst of s is " << b << endl;
                }
            }
        }
    }
}