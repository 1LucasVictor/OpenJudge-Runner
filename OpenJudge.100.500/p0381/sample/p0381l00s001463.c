#include<stdio.h>

int main(void){
    int n=0 ,x=0 ;
    int i=0 ,j=0 ,k=0;
    int flg=0 ;

    while(1){
        scanf("%d%d",&n ,&x);

        if (n==0 && x==0) break;
        for (i=1 ;i<n-1 ;i++){
            for (j=i+1 ;j<n ;j++){
                for (k=j+1 ;k<n+1 ;k++){
                    if ((i+j+k)==x) flg++;
                }
            }
        }
        printf("%d\n",flg);
    }

    return 0;
}