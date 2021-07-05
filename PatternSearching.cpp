#include<iostream>
using namespace std;

void printIndex(string text, string pat)
{
    int found = text.find(pat);
    while(found != string::npos)
    {
        cout << "Pattern found at " << found << '\n';
        found = text.find(pat, found+1);
    }
}

int main()
{
    string text, pat;
    cin >> text >> pat;
    printIndex(text, pat);
    return 0;
}
