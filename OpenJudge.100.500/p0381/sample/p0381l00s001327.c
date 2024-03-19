#include<stdio.h>
int main(void){
    int n;
    int x;
    int i;
    int j;
    int l;
    int k;
    int f = 0;
    while(1){
        scanf("%d%d",&n,&x);
        if(n==0&&x==0){
            break;
        }
        k = 1;
            for(i=k;i<=n;i++){
                for(j=i+1;j<=n;j++){
                    for(l=j+1;l<=n;l++){
                        if(i+j+l==x){
                            //printf("%d %d %d\n",i,j,l);
                            f++;
                        }
                    }
                   //printf("{%d %d %d}\n",i,j,l);
                }
               //printf("[%d %d %d]\n",i,j,l);
            }
        printf("%d\n",f);
    }
    return 0;
}