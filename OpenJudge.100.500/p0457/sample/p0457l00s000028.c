#include<stdio.h>

int main(void){
    int n,m,k,i,c=0,s=0,t=0;

    scanf("%d %d %d",&n,&m,&k);

    int a[n],b[m];

    for(i = 0; i <= n-1; i++){
        a[i] = '\0';
    }
    for(i = 0; i <= m-1; i++){
        b[i] = '\0';
    }
    for(i = 0; i <= n-1 ;i++){
        scanf("%d",&a[i]);
    }
    for(i = 0; i <= m-1 ;i++){
        scanf("%d",&b[i]);
    }


    while(c <= k){
        if(a[s] <= b[t]){
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
