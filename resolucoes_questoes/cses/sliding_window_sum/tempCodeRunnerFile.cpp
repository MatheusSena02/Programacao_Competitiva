#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

    ll n, k; cin >> n >> k;

    ll x, a, b, c; cin >> x >> a >> b >> c;

    vector<int> ai (n);

    for(int i = 0; i < n; i++){

        if(i == 0){
            ai[i] = x;
        }else{
            ai[i] = (a*ai[i - 1] + b) % c; 
        }
        
    }

    int windowSum = 0;

    for(int j = 0; j < k; j++){
        windowSum += ai[j];
    }

    int answer = windowSum;

    for(int l = k; l < n; l++){
        windowSum += ai[l] - ai[l - k]; 

        answer = answer^windowSum;
    }

    cout << answer << endl;
}