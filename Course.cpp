#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, N, M, K;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N >> M >> K;
        if ((N + K) <= M)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}