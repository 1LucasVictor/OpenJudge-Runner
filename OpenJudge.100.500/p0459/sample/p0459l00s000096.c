#include<stdio.h>
signed main(){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a*2<=b && b<=a*4 && b%2==0){
                printf("Yes");
        }
        else{
                printf("No");
        }
        return(0);

        }

        
