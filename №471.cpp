#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    map<int,int> hash;
    for (int i = 1; i <= n; i++){
        hash[i] = 0;
    }
    for (int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;
        hash[a]++;
        hash[b]++;
    }
    for (int i = 1; i <= n; i++){
        cout << hash[i] << endl;
    }
}