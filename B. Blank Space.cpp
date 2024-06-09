#include <bits/stdc++.h>
using namespace std;

int main(){
    int ntest;
    cin >> ntest;
    for (int i = 1; i <= ntest; i++)
    {
        int size;
        cin >> size;
        int arr[size];
        int spaces = 0;
        bool cond = false;
        for (int j = 0; j <= size-1; j++)
        {
            cin >> arr[j];
            if (arr[0] == 1)
            {
                if (j != 0 && arr[j] == 0 && arr[j-1] == 1)
                {
                    spaces++;
                }
            }
            else
            {
                if (j != 0 && arr[j] == 0 && arr[j-1] == 1)
                {
                    spaces++;
                }
                cond = true;
            }
            
        }
        if (cond == true)
        {
            spaces++;
            cout << spaces << "\n";
        }
        else
        {
            cout << spaces << "\n";
        }
    }
}