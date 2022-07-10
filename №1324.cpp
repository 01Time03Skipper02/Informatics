#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;
    int n = str.size();
    vector<int> z(n, 0);
    z[0] = n;
    int L = 0;
    int R = 0;
    for (int i = 1; i < n; i++){
        int d;
        if (i > R){
            d = 0;
        } else {
            d = z[i - L];
            if (i + d - 1 < R){
                z[i] = d;
                continue;
            } else {
                d = R - i + 1;
            }
        }
        while(i + d < n && str[d] == str[i + d]){
            d++;
        }
        z[i] = d;
        L = i;
        R = i + d - 1;
    }
    for (int i = 0; i < n; i++){
        cout << z[i] << " ";
    }
    return 0;
}

