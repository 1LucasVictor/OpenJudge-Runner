#include <stdio.h>
#include <limits.h>

main(){
  int n, data[5000], i, j, k, max, temp, sum, p1, p2;
  
  while(1){
    temp=INT_MIN;
    p1=p2=0;
    scanf("%d", &n);
    if(n==0) break;
    for(i=0;i<n;i++){
      scanf("%d", &data[i]);
      if(data[i]<=0) p1++;
      if(data[i]>=0) p2++;
    }
    if(p1==n){
      for(i=0;i<n;i++){
	if(temp<data[i]) temp=data[i];
      }
      printf("%d\n", temp);
      return 0;
    }
    if(p2==n){
      sum=0;
      for(i=0;i<n;i++){
	sum+=data[i];
      }
      printf("%d\n", sum);
      return 0;
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