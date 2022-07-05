#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
        cin >> matrix[i][j];
        if (i == j && matrix[i][j] == 1){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
