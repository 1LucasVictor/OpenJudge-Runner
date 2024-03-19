#include<stdio.h>

int main()
{
    char a[3];

    int c=0;
    for(int i=0;i<3;i++){
        scanf("%c",&a[i]);
    }
    for(int i=0;i<3;i++){
        if(a[i]=='1'){
            c++;
        }
    }
    printf("%d\n",c);


}