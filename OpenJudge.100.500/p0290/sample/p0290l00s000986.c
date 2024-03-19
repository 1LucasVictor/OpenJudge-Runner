#include<stdio.h>
int main(void){

  int a[10000];
  int n;
  int i,j;
  int hit=0,cnt=0;

  scanf("%d",&n);
  for(i=0;i<n;i++)scanf("%d",&a[i]);

  for(i=0;i<n;i++){
    hit=0;
    for(j=2;j<=a[i]/2;j++){
      if((a[i]%j)==0){
	hit=1;
	break;
      }
    }
    if(hit==0)cnt++;
  }

  printf("%d\n",cnt);

  return 0;
}


  /* int n,a; */
  /* int i,j; */
  /* int hit,cnt; */

  /* scnaf("%d",&n); */

  /* for(i=0;i){ */

