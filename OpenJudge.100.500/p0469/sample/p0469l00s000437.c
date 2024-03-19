
#include <stdio.h>

int main()
{
    int k,a,b;
    int temp;
    
    scanf("%d %d %d",&k,&a,&b);
    
    if(a%k==0){
        printf("OK");
    }else{
        temp = a-a%k+k;
        if(temp<=b) printf("OK");
        else printf("NG");
    }

    return 0;
}
