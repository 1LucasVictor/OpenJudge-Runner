#include<stdio.h>
int main(){
    char a[3];
    int  count = 0;
    scanf("%s",a);

        if(a[0]=='1')count++;
        if(a[1]=='1')count++;
        if(a[2]=='1')count++;
    printf("%d\n",count);
    return 0;
}
