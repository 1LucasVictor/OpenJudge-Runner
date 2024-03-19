#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,j,l;
    char a[21];
    char b[21];

    scanf("%s",a);
    j=strlen(a);
    for(i=0; i<=j+1; i++){
        if(j==i)
        b[i]=a[i];
        else
        b[j-i-1]=a[i];
    }

    printf("%s\n",b);

    return 0;
}