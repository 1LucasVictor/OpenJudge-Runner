  
#include<stdio.h>
#include<math.h>

#define N 10000

int main(){

  int n, a[N], i, j, flag=0, count=0;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]==1)flag=1;
    else if(a[i]==2||a[i]==3)flag=0;
    else if(a[i]%2==0)flag=1;
    else{
    for(j=3;j<=sqrt(a[i]);j++){
      if(a[i]%j==0){
	flag=1;
	break;
      }}}
    if(flag==0)count++;
    flag=0;
  }
  printf("%d\n",count);

  return 0;
}
  