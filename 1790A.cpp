#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string ch = "314159265358979323846264338327", st;
        cin >> st;
        int size = st.size();
        int count = 0;

        for (int i = 0; i < size; i++)
        {
            if (ch[i] == st[i])
            {
                count++;
            }
            else
                break;
        }
        cout << count << endl;
    }

    return 0;
}