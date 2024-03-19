#include<stdio.h>
#include<string.h>
int main(void)
{
    int i = 0,j,k;
    char s1,s2,s3;
    scanf("%c%c%c",&s1,&s2,&s3);
    //printf("%c",s1);
    if(s1 == '1'){
        i++;
    }
    if(s2 == '1'){
        i++;
    }
    if(s3 == '1'){
        i++;
    }
    printf("%d",i);

    return 0;
}
