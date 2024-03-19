#include<stdio.h>

int main(void){
    int i,s=0,t=0;
    unsigned long int n,m,k,c=0;

    scanf("%lu %lu %lu",&n,&m,&k);

    unsigned long int a[n],b[m];

    for(i = 0; i <= n-1; i++){
        a[i] = '\0';
    }
    for(i = 0; i <= m-1; i++){
        b[i] = '\0';
    }
    for(i = 0; i <= n-1 ;i++){
        scanf("%lu",&a[i]);
    }
    for(i = 0; i <= m-1 ;i++){
        scanf("%lu",&b[i]);
    }


    while(c <= k){
        if(a[s] < b[t]){
            c = c + a[s];
            s++;
        }else if(a[s] > b[t]){
            c = c + b[t];
            t++;
        }else if(a[s+1] <= b[t+1]){
            c = c + a[s];
            s++;
        }else{
            c = c + b[t];
            t++;
        }
    }
    printf("%d",s + t - 1);

    
    return 0;
    
}
