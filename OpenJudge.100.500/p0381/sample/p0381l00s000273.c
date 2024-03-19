#include <stdio.h>

int main(void){
    int n,x;
    int i,j,k;
    int a=0;
    while(1){
        fscanf(stdin,"%d",&n);
        fscanf(stdin,"%d",&x);
        if(n == 0 && x == 0){
            break;
        } 
        for(i=1;i<=n-2;i++){
            for(j=i+1;j<=n-1;j++){
                for(k=j+1;k<=n;k++){
                    if(i+j+k == x){
                        a++;
                    }
                }
            }
        }
        printf("%d\n",a);
    }
    return 0;
}