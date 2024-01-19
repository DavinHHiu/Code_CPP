#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int nguyenTo(int n){
    if(n == 2) return 1;
    if(n % 2 == 0 || n < 2) return 0;
    for(int i = 3; i <= sqrt(n); i+=2){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int t; scanf("%d", &t);
    scanf("\n");
    while(t--){
        char s[10001];
        int a[10001], res = 0, n =0;
        fgets(s, sizeof(s), stdin);
        s[strlen(s) - 1] = '\0';
        for(int i=0; i < strlen(s); i++){
            if(!isalpha(s[i])) res = res * 10 + s[i] - 48;
            if(isalpha(s[i])){
                if(nguyenTo(res)){
                    a[n] = res;
                    n++;
                }
                res=0;
            }
        } 
        if(nguyenTo(res)){
            a[n] = res; n++;
        }
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(a[i] > a[j]){
                    int tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
        }
        for(int i = 0; i < n; i++) printf("%d ", a[i]);
        printf("\n");
    }
}