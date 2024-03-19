#include <stdio.h>

int main(void){
    int n=-1,x=-1,i,j,k,cnt,l=0,res[1000];
    while (!(n==0 && x==0)){
        cnt=0;
        scanf("%d %d",&n,&x);
        for(i=1;i<=n;i++){
            for(j=i+1;j<=n;j++){
                for(k=j+1;k<=n;k++){
                    if (i+j+k==x) cnt++;
                }
            }
        }
        res[l]=cnt, l++;
    }
    for(i=0;i<l-1;i++) printf("%d\n",res[i]);
    return 0;
}

