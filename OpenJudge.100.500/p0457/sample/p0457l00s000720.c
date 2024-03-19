#include<stdio.h>

int main(){
    int n, m;
    long long int k;
    scanf("%d%d%lld", &n, &m, &k);
    long long int a[n], b[m];
    for(int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
    
    for(int i = 0; i < m; i++){
        scanf("%lld", &b[i]);
    }
    long long int minute = 0, ans = 0;
    int i =0, j = 0;
    while(minute <= k){
        if(a[i] <= b[j]|| j== m){
            minute = minute + a[i];
            i++;
        }
        else if(a[i] > b[j]|| i== n){
            minute = minute + b[j];
            j++;
        }    
        if(minute <= k){
            ans++;
        } 
        else{break;}
        if(i == n && j == m){break;}
        
        
    }
    printf("%lld", ans);
    return 0;
}    
