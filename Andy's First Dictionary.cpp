#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    set<string>se;
    string line,word;
    while (cin>>line){
        for (int i = 0; i<line.size(); i++){
            if (isalpha(line[i])){
                line[i] = tolower(line[i]);
            }
            else{
                line[i] = ' ';
            }
        }

    stringstream ss(line);
    while (ss>>word){
        se.insert(word);
    }
}
    for (auto x : se){
        cout << x << endl;
    }
return 0;
}
