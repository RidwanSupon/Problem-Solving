#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    int t; cin >> t;
    while(t--){
        int a,b; cin >> a >> b;
        int count = 0;
        string s1; cin >> s1;
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='B'){
                count++;
                i+=b-1;
            }
        }
        cout << count << endl;
    }

return 0;

}
