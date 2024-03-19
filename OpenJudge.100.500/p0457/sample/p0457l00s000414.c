#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int yo(const void *a,const void *b)
{
  return (*(int*)a-*(int*)b);
}
int main()
{
    int ch[500000];
    char kh[1000000],arr[1000000];
    int a=0,b=0,c,d,e,i=0,j=0,k=0,l=0,tep,temp,m,n,x,y;

    scanf("%d%d%d",&a,&b,&c);
    
    for(i=0;i<a+b;i++)
     {
      scanf("%d",&ch[i]);
     }
    qsort(ch,(a+b),sizeof(int),yo);
    for(i=0;j<(a+b) && k<=c ; i++)
    {
     k+=ch[i];
     j++;
    }
    printf("%d\n",(k>c)?--j:j);
    return 0;
}