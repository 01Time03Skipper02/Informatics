#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    for(int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> matrix[i][j];
    int colors[n];
    int cnt = 0;
    for(int i = 0; i < n; i++) cin >> colors[i];
    for(int i = 0; i < n; i++) for (int j = i + 1; j < n; j++) {
        if (matrix[i][j] == 1){
            if (colors[i] != colors[j]) cnt++;
        }
    }
    cout << cnt;
}
