#include<stdio.h>

int main(void){
        int n;
        scanf("%d", &n);
        for(int i=1; i<=n; i++){
                if(i%3==0) printf(" %d", i);
                else{
                        int x = i;
                        while(x){
                                if(x%10==3){
                                        printf(" %d", i);
                                        break;
                                }
                                x /= 10;
                        }
                }
        }
        puts("");
        return 0;
}
