#include<stdio.h>


#include<string.h>
int main()
{
    char ch[1000];
    char arr[1000];
    int a,b,c,i=0,j=0,k=0,l=0,m=0,n=0;
    scanf("%s",ch);
    scanf("%s",arr);
    j=strlen(ch);
    while(i<j)
    {
     
    if(ch[i]!=arr[i])
     {
      l++;
     }
     i++;
    }
    if(l<=0)
    printf("Yes\n");
    else
    printf("No\n");
    return 0;
}