#include<stdio.h>
#include<string.h>
main()

{
    char a[10005];
   unsigned long long int i,j,sum=0;
    for(j=0;j==0;)
    {
    scanf("%s",a);
    if(strcmp(a,"0")==0) break;
    for(i=0;a[i]!='\0';i++)
    {
        sum=sum+(a[i]-'0');
    }
    printf("%llu\n",sum);
    sum=0;
    }
}

