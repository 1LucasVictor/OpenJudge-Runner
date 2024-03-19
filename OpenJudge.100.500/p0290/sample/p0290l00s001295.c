#include<stdio.h>
#include<stdlib.h>
int main() {
  int i,count=0,n,flag,j,*sosu;
    scanf("%d",&n);
    
    sosu = (int *)malloc(n * sizeof (int));
    
   
    
    for(i=0;i<n;i++){
        scanf("%d",&sosu[i]);
        for(j=2;j<sosu[i];j++){
	  if(sosu[i] % j == 0) flag=1;
        }
	if(flag == 0) count++;
	flag = 0;
    }
    
    printf("%d\n",count);
    return 0;
}

