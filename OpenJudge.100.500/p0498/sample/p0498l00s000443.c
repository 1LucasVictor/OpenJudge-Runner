#include <stdio.h>

int main(){
    int n,pag;

    scanf("%d",&n);

    if(n%2==0){
        pag=n/2;

    }else{
        pag=(n/2 +1);
    }



    printf("%d\n",pag);

    return 0;
}
