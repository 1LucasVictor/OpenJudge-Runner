#include<stdio.h>

int main(){
    int n= -1,x = -1;
    int i,j;
    int z;
    int c = 0;
    while(n != 0 || x != 0){
        scanf("%d %d",&n,&x);
        if(n != 0){
            for(i = 1; i < n-1; ++i){
                for(j = i + 1; j <n; ++j){
                    z = x - j - i;
                    if(z > j && z <= n){
                        c++;
                    }
                }
            }
            printf("%d\n",c);
            c = 0;
        }
    }
    return 0;
}
