#include <bits/stdc++.h>

using namespace std;

bool * used;
vector<int> *matrix;

int dfs(int v){
    used[v] = true;
    int cnt = 1;
    for (auto i:matrix[v]){
        if (!used[i]){
            cnt += dfs(i);
        }
    }
    return cnt;
}

int main() {
    int n, s, a;
    cin >> n >> s;
    s--;

    used = new bool[n];
    for(int i=0; i<n; i++) used[i]=false;

    matrix=new vector<int>[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a;
            if(a==1) {
                matrix[i].push_back(j);
            }
        }
    }
    cout << dfs(s);
}
