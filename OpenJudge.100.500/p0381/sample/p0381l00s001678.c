#include<stdio.h>

int main(void)
{
    int n[1024], x[1024], data=0, i, j, k, l, count[1024]={0};
    
    while(1){
        scanf("%d %d", &n[data], &x[data]);
        if(n[data]==0 && x[data]==0) break;
        data++;
    }
    
    for(i=0; i<data; i++){
        for(j=0; j<n[i]-2; j++){
            for(k=j+1; k<n[i]-1; k++){
                for(l=k+1; l<n[i]; l++){
                    if(j+k+l+3==x[i]) count[i]++;
                }
            }
        }
    }
    
    for(i=0; i<data; i++){
        printf("%d\n", count[i]);
    }
    
    return 0;
}
