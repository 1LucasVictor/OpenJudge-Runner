#include <stdio.h>
 
int main(void) {
    int prime[1000000],i,j,n,num;
    for(i = 0;i < 1000000;i++) prime[i] = 1;
    for(i = 2;i < 1000;i++){
        for(j = i * 2;j < 1000000;j += i) prime[j] = 0;
    }
    while(scanf("%d",&n) != EOF){
        num = 0;
        for(i = 2;i <= n;i++) if(prime[i]) num++;
        printf("%d\n",num);
    }
    return 0;
}
