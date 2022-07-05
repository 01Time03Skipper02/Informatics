#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> matrix[i][j];
    for (int i = 0; i < n; i++){
        int cnt1 = 0;
        int cnt2 = 0;
        for (int j = 0; j < n; j++){
            cnt1 += matrix[i][j];
            cnt2 += matrix[j][i];
        }
        cout << cnt2 << endl << cnt1 << endl;
    }
}