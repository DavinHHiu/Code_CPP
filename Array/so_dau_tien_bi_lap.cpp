#include<bits/stdc++.h>
using namespace std;
void getAr(int *a,int n){
    for(size_t i=0;i<n;i++){
        cin >> *(a+i);
    }
}
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n],tmp=-5;
        getAr(a,n);
        for(size_t i=0;i<n-1;i++){
            for(size_t j=i+1;j<n;j++){
                if(a[i]==a[j]){ 
                    tmp=a[i];
                    break;
                }
            }
            if(tmp>=0) break;
        }
        if(tmp==-5) cout << "NO" << endl;
        else cout << tmp << endl;
    }
}