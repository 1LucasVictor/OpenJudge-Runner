#include<stdio.h>
 int zetta(int x){
	 if(x<0)
		 return -x;
	 else
		 return x;
 }
 
	 int main(){
		 int a,b;
		 int c,k;
		 scanf("%d%d",&a,&b);
		 c=a+b;
		 k=zetta(c)/2;
		 if(c%2==1)
			 printf("IMPOSSIBLE");
		 else
			 printf("%d",k);
		 return 0;
	 }
	 
			 
			 