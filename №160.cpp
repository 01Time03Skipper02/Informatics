#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> g;
int n, s;

void BFS(int to){
    queue<int> q;
    q.push(s);
    vector<bool> used(n);
    vector<int> d(n), p(n);
    used[s] = true;
    p[s] = -1;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for (size_t i = 0; i < g[v].size(); i++){
            int to = g[v][i];
            if (!used[to]){
                used[to] = true;
                q.push(to);
                d[to] = d[v] + 1;
                p[to] = v;
            }
        }
    }
    cout << d[to] << endl;
    if (!used[to]){
        cout << "No way";
    } else {
        vector<int> way;
        for (int i = to; i != -1; i = p[i]){
            way.push_back(i);
        }
        reverse(way.begin(), way.end());
        for (size_t i = 0; i < way.size(); i++){
            cout << way[i] + 1 << " ";
        }
    }
}

int main() {
    cin >> n;
    g.resize(n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int a;
            cin >> a;
            if (a == 1) g[i].push_back(j);
        }
    }
    int to;
    cin >> s >> to;
    s--;
    to--;
    BFS(to);
    return 0;
}

