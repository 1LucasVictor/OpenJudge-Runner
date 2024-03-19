#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i,j,n;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        if(i%3==0){
            printf(" %d",i);
        }else{
        }
        j=i;
        if(j%10==3 && j%3!=0){
                printf(" %d",j);
        }
        j /= 10;
    }
    printf("\n");
    return 0;
}