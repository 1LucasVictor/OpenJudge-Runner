#include<stdio.h>
int main(void)
{
    int a[100],b[100];
    int i,count = 0,cou = 0;
    for(i = 0;;){
        scanf("%d",&a[i]);
        if(a[i] == 0){
            i--;
            b[cou] = a[i];
            cou++;
            count--;
            if(count == 0){
                break;
            }
        }
        else {
            count++;
            i++;
        }
    }
    for(i = 0; i < cou; i++){
        printf("%d\n",b[i]);
    }

    return 0;
}