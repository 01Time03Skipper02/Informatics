#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> matrix[i][j];
    for (int i = 0; i < n; i++){
        int cnt = 0;
        for (int j = 0; j < n; j++){
            cnt += matrix[i][j];
        }
        cout << cnt << endl;
    }
}