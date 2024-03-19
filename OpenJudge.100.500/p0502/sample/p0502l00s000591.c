#include<stdio.h>
 
int main (void)
{
  int n,j=0;
  int a[100];
  
  scanf("%d\n", &n);
  
  for (int i=0; i<=n; i++){
    scanf("%d", &a[i]);
    
    if(a[i]%2==0&&a[i]%3!=0&&a[i]%5!=0){
	  printf("DENIED");
	  j++;
	  break;
	}
  }
  
  if (j==0)
    printf("APPROVED");
  
  return 0;
}