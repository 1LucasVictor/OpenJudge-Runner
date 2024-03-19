#include <stdio.h>
#include <math.h>
int main()
{
  int a[10000];
  int n, flag, i, j, count=0;
  
  scanf("%d", &n);
  
  for(i=0; i<n; i++){
	scanf("%d", &a[i]);
	flag=1;

	if(a[i]<2) flag=0;
	else if(a[i]==2) flag=1;
	else if(a[i]%2 == 0) flag=0;
	else{
	  for(j=3; j<= a[i]/j; j+=2){
		if(a[i]%j==0) flag=0;
	  }
	}
	if(flag==1) count++;
  }
  
  printf("%d\n", count);
  
  return 0;
}