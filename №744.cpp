#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, bool> hash;
    char a;
    string key;
    while(a != '#'){
        cin >> a;
        if (a == '#') break;
        cin >> key;
        if (a == '?'){
            if (hash.find(key) == hash.end()){
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
        if (a == '+'){
            hash[key] = true;
        }
    }
}
