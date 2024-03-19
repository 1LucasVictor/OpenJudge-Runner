#include <stdio.h>

void main()
{
  int n,i,flag=1;
  scanf("%d",&n);
  int array[n];
  for(i=0;i<n;i++){
  	scanf("%d",&array[i]);
  }
  for(i=0;i<n;i++){
  	if((array[i]%2)==0){
    	if((array[i]%3)!=0 && (array[i]%5)!=0){
          flag = -1;
          break;
        }
    }
  }
  if(flag==1)
    printf("APPROVED");
  else
    printf("DENIED");
}