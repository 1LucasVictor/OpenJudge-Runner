#include <stdio.h>
main()
{
  int a[10000];
  int n, flag, i, j, count=0;

  scanf("%d", &n);

  for(i=0; i<n; i++){
	scanf("%d", &a[i]);

	if(a[i]==2) count++;
	else{
	  flag = 0;
	  for(j=2; j<a[i]; j++){
		if(a[i] % j ==0){
		  flag = 1;
		  break;
		}
	  }
	  if(flag==0) count++;
	}
  }
  printf("%d\n", count);

  return 0;
}