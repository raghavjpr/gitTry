#include <bits/stdc++.h>

using namespace std;

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a==b && a==c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}