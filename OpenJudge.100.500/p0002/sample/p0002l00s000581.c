#include<stdio.h>
int main(void){
    int a[3],N,i;
        scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d%d%d",&a[0],&a[1],&a[2]);
        if(a[0]*a[0]==a[1]*a[1]+a[2]*a[2]){
            printf("YES\n");
    }
        if(a[1]*a[1]==a[2]*a[2]+a[0]*a[0]){
            printf("YES\n");
    }
        if(a[2]*a[2]==a[1]*a[1]+a[0]*a[0]){
            printf("YES\n");
    }
        else{
            printf("NO\n");
    }
    }
return 0;
}