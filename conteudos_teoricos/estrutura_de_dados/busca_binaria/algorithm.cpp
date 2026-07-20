#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll binarysearch(vector<string>& names, ll l, ll r, string goal){

    if(l >= r){
        return -1;
    }

    ll mid = (l + (r - 1)) / 2;

    if(names[mid] == goal){
        return mid;
    }else if(names[mid] > goal){
        return binarysearch(names, l, mid - 1, goal);
    }else{
        return binarysearch(names, mid + 1, r, goal);
    }
}


int main(){


}