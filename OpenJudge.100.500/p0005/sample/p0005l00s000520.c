#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void)
{

    char a[21],b[21];
    int x,i,j;
    scanf("%s",a);
    x=strlen(a);

    for(i=0;i<=x;i++){

        if(i==x){
            b[i]=a[i];
        }

        else{
            b[x-i-1]=a[i];
        }

    }
    printf("%s\n",b);
    return 0;
}