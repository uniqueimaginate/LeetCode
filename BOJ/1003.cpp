#include <bits/stdc++.h>

using namespace std;

pair<int, int> dp[41];

int main(){
    dp[0] = make_pair(1,0);
    dp[1] = make_pair(0,1);

    for(int i=2; i<41; ++i){
        dp[i].first = dp[i-1].first + dp[i-2].first;
        dp[i].second = dp[i-1].second + dp[i-2].second;
    }


    int c; cin >> c;
    while(c--){
        int temp; cin >> temp;
        cout << dp[temp].first << " " << dp[temp].second << endl;
    }
}