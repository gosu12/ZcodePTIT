//
// Created by Nguyen Quang Huy on 10/3/2020.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k, check=0;
        cin >> n >> k;
        int a[n+1];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for(int j = 0; j < n; ++j) {
            if(a[j] == k){
                cout << j+1 << endl;
                check = 1;
                break;
            }
        }
        if(!check) cout << -1 << endl;
    }
}
