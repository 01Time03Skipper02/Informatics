#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
        cin >> matrix[i][j];
    }
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++){
        if (matrix[i][j] == 1){
            cout << i+1 << " " << j+1 << endl;
        }
    }
    return 0;
}
