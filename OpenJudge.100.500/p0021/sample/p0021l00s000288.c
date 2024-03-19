#include <stdio.h>
#include <limits.h>

main(){
  int n, data[5000], ans[3];
  int i, j, k;
  int max;
  int temp, sum;
  
  while(1){
    temp=INT_MIN;
    scanf("%d", &n);
    if(n==0) break;
    for(i=0;i<n;i++){
      scanf("%d", &data[i]);
    }
    for(i=n;i>=1;i--){
      for(k=0;k+i<=n;k++){
	max=INT_MIN;
	sum=0;
	for(j=k;j<i;j++){
	  sum+=data[j];
	  if(max<sum){
	    max=sum;
	  }
	}
	if(temp<max) temp=max;
      }
    }
    printf("%d\n", temp);
  }
  return 0;
}