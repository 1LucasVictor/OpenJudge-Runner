#include <stdio.h>
 
int main()
{
    int n,i=1,x;
    scanf("%d",&n);
    while(i<=n){
        if(i%3==0){
            printf(" %d",i);
        }
        else{
            if(i%10==3){
                printf(" %d",i);
            }
            else{
                x=i;
                while(x){
                    if(x%10!=3){
                    x/=10;
                    }
                    else{
                        printf(" %d",i);
                        break;
                    }
                }
            }
        }
        i++;
    }
    printf("\n");
    return 0;
}
