#include <stdio.h>

int main(){
    int vet[1001],flag=0,n;

    scanf("%d",vet);

    if((vet[0]=7) ||  (vet[1]=7) || (vet[2]=7))
        flag=1;
    else
        flag =0;

    if(flag)
        printf("Yes\n");
    else
        printf("No\n");


    return 0;
}
