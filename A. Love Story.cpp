#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio (0);
    cin.tie(0);
    cout.tie(0);
    int ntest;
    cin >> ntest;
    for (int i = 1; i <= ntest; i++)
    {
        string codeforces;
        cin >> codeforces;
        int counter = 0;
        string codeforces2 = "codeforces";
        for (int j = 0; j <= 9; j++)
        {
            if (codeforces[j] != codeforces2[j])
            {
                counter++;
            }
        }
        cout << counter << "\n";
    }
    
}