#include <stdio.h>
int main(){
  int i,j=0,c=0,n1,n2,retu1[501],retu2[501],arr;
  scanf("%d",&n1);
  for(i=0;i<n1;i++){
    scanf("%d",&arr);
    retu1[i]=arr;
  }
  scanf("%d",&n2);
  for(i=0;i<n2;i++){
    scanf("%d",&arr);
    retu2[i]=arr;
  }
  /*lin.S*/
  for(i=0;i<n1;i++){
    j=0;
    while(j<n2){
      if(retu1[i]==retu2[j]){
	c++;
	break;
      }
      else j++;
    }
  }
  printf("%d\n",c);
  return 0;
}