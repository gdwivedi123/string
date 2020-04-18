#include <bits/stdc++.h>
using namespace std;

void permute(string s, int l, int r)
{
    if(l == r)
    {
        cout << s << endl;
    }
    else
    {
        for(int i = l; i <= r; i++)
        {
            char temp = s[l];
            s[l] = s[i];
            s[i] = temp;
            permute(s, l + 1, r);
            temp = s[l];
            s[l] = s[i];
            s[i] = temp;
        }
    }
}

int main()
{
    string s;
    cin >> s;
    permute(s, 0, 2);
    cout << endl;
    return 0;
}