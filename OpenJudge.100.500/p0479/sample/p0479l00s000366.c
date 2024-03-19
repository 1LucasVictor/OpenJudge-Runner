#include<stdio.h>
#include<stdlib.h>
int max(int a,int b){return a>b?a:b;}
int min(int a,int b){return a<b?a:b;} 
int main(void)
{
  int n,a[200000]={0},b[200000]={0};
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++)
    b[a[i]-1]++;
  for(int i=0;i<n;i++)
    printf("%d\n",b[i]);
  
}
