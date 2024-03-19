#include<stdio.h>
	int main(){
      int m,n,count;
      double rest;
      scanf("%d %d",&m,&n);
      rest=m*1.0/n;
      count=m/n;
      if(rest==count){
        printf("%d\n",count);
      }else{
        printf("%d\n",count+1);
      }
      return 0;
    }