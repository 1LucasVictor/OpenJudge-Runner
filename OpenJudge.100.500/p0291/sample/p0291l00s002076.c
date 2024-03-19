#include <stdio.h>
int main(void){
    int n,t,j;
    int r[20000];
    int x;
    int max = -100000000;
    
    scanf("%d\n",&n);
    for(t=1;t<=n;t++){
        scanf("%d",&r[t]);
        }
    for(t=1;t<n;t++){
        for(j=t+1;j<=n;j++){
            x=r[j]-r[t];
            if(x>max){
                max = x;
            }
        }
    }
printf("%d",max);
return 0;
}