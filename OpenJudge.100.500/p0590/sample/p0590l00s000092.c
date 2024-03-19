#include<stdio.h>
int main(void)
{
    int i,j,num,array[5];
    num=0;
    for(i=0;i<6;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(array[j]-array[i]>num) num = array[j]-array[i];
        }
    }
    if(num>array[5]) printf(":(\n");
    else printf("Yay!\n");
    return 0;
}
