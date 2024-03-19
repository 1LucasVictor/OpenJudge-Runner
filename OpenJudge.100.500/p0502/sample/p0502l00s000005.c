#include<stdio.h>
int main(void)
{
  int i,n;
  int x;
  int a[100];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++){
    if(a[i]%2==0){
      if(a[i]%3!=0 && a[i]%5!=0)
        x=1;}}
    if(x==1)
      puts("DENIED");
    else  
      puts("APPROVED");
    return 0;
}
