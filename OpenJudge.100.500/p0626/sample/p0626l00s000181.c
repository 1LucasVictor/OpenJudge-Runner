#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,D,i=0,temp;

    scanf("%d%d",&D,&N);

    if(D==0){
        printf("%d\n",N);
    } else if(D==2){

         if(N==100){
            printf("%d\n",(N+1)*10000);
        }else{printf("%d\n",N*10000);}

    }else{
        printf("%d\n",(N^D)*100);
    }



    return 0;
}
