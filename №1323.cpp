#include <iostream>
#include <string>

using namespace std;

bool compareStrings(string a, string b){
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++){
        if (a[i] != b[i]) return false;
    }
    return true;
}

int getPrefix(string str, int ind){
    if (ind == 0) return 0;
    int cnt = 1;
    int res = 0;
    for (int i = 0; ind > 0; i++, ind--){
        string a = str.substr(0, cnt);
        string b = str.substr(ind, cnt);
        //cout << a << "    " << b << endl;
        cnt++;
        if (compareStrings(a,b)) res = a.size();
    }
    return res;
}

int main() {
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++){
        cout << getPrefix(str, i) << " ";
    }
}
