// 0 <= x <= 10^7
#include<bits/stdc++.h>
using namespace std;
int cnt[10000001];
int main(){
    int  n;
    cin >> n;
    int a[1000];
    int m = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
        m = max(m, a[i]);
    }
    for(int i = 0; i <= m; i++){
        if(cnt[i] != 0){
            for (int j = 0; j< cnt[i]; j++){
                cout << i << " ";
            }
        }
    }
}

// 8
// 1 3 5 2 1 4 7 9