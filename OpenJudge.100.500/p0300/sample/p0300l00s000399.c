#include<stdio.h>

int main(void) {

  int  i,j,k,n1,n2,num1[10000],num2[10000],cnt = 0;
  
  scanf("%d",&n1);
  for(i=0;i<n1;i++)
    scanf("%d",&num1[i]);
  
  scanf("%d",&n2);
  for(j=0;j<n2;j++) 
    scanf("%d",&num2[j]); 
  
  for(i=0;i<n1;i++) {
    k = 0;   
    for(j=0;j<n2;j++) {
      if(k == 0) {
	if(num1[i] == num2[j]) {     
	  cnt++;	
	  k++;
	  break;  
	}  
      }
    }
  } 
  
  printf("%d\n",cnt);
  return 0;
}