#include <stdio.h>
#include <stdlib.h>
int main(){
  int n,*data,i,j,c,count=0;
  scanf("%d",&n);
  data=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++) scanf("%d",&data[i]);

  while(1){

    if(n<=0) break;
    j=data[n-1];
    c=0;
    while(1){
      if(data[n-1]!=2&&data[n-1]%2==0) break;
      if(j==0) break;
      if(data[n-1]%j==0) c++;
			   j--;
          }
    if(c==2)count++;
    n--;
  }
  printf("%d\n",count);
  free(data); 
}