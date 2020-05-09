#include <bits/stdc++.h>
using namespace std;

void change(string& replaceby, string& original)
{
    int n = 0;
    while((n = original.find(" ", n)) != string::npos)
    {
        original.replace(n , 1, replaceby);
        n += replaceby.length();
    }
    
}

int main() {
	string original, replaceby;
	getline(cin, original);
	getline(cin, replaceby);
	cout << "original string : " << original << endl;
	change(replaceby, original);
	cout << "Changed String : " << original << endl;
	return 0;
}
