#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,D,i=0,temp;

    scanf("%d%d",&D,&N);
    
if(D==0){
    printf("%d",N);
}else{
        printf("%d",(N^D)*100);
}


    return 0;
}
