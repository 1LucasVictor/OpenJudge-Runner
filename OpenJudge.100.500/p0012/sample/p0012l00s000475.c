#include<stdio.h>
int main(void)
{
    int a[100],b[100];
    int i = 0,count = 0,cou = 0;
    while(scanf("%d",&a[i]) != EOF){
        if(a[i] == 0){
            i--;
            b[cou] = a[i];
            cou++;
        }
        else i++;
    }
    for(i = 0; i < cou; i++){
        printf("%d\n",b[i]);
    }

    return 0;
}