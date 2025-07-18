#include <bits/stdc++.h>
using namespace std; 
#define sp " "
struct star{
    int x, y, z; 
}; 
int main(){
    #ifdef LOCAL
    freopen("in.txt", "r", stdin); 
    #endif
    int n; cin >> n ;
    star arr[n]; 
    for(int i=0; i<n; i++){
        cin >> arr[i].x; 
        cin >> arr[i].y; 
        cin >> arr[i].z; 
    }; for(int i=0; i<n; i++){
        int xcnt =0, ycnt=0, zcnt =0; 
        for(int j=0;j<n; j++){
            if (j == i) continue;
            if (arr[j].x == arr[i].x) xcnt ++;  
            if (arr[j].y == arr[i].y) ycnt ++;  
            if (arr[j].z == arr[i].z) zcnt ++;  
        }
        cout << xcnt << sp << ycnt << sp << zcnt << endl; 
    }

    return 0; 
}
