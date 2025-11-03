#include <bits/stdc++.h>

using namespace std;
#define fi(l,r) for(int i = l; i < r; i++)
signed main(){

    double n; char c;
    double ans = 0;
    while(cin >> c >> n){
        switch(c){
            case '+':
                ans += n;
                break;
            case '-':
                ans -= n;
                break;
            case '*':
                ans *= n;
                break;
            case '/':
                if(!n) cout << "Warning! Mathematichal Exception.";
                else ans /= n;
                break;
        }
        cout << "ans:" << ans << '\n';
    }
    
}