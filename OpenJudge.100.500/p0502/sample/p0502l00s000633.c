#include <stdio.h>

int main(void)
{
  int n,i,j;
  int gu=0;
  int wari=0;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(j=0;j<n;j++){
    if(a[j]%2==0){
      gu += 1;
      if(a[j]%3==0||a[j]%5==0)
        wari += 1;
    } 
  }
    if(gu == wari)
      printf("APPROVED");
    else
      printf("DENIED");  
  return 0;
}
    