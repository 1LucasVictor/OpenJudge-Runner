#include<stdio.h>
int main()
{
    char str[20],a[20];
    int i,len,j;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++);
    len=i;
    for(i=len-1,j=0;i>=0;i--,j++)
    {
        a[j]=str[i];
    }
      a[len]='\0';
      printf("%s\n",a);

    return 0;
}
