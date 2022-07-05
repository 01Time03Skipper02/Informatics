#include <bits/stdc++.h>

using namespace std;

bool contains(vector<pair<int,int>> vec, pair<int,int> val){
    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i] == val)
        {
            return true;
        }
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> check;
    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        pair<int,int> buf = make_pair(a, b);
        if (contains(check, buf)){
            cout << "YES";
            return 0;
        } else {
            check.push_back(buf);
        }
    }
    cout << "NO";
    return 0;
}