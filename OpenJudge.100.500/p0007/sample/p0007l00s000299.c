#include<stdio.h>
int main(){
int num;
int a,b,c,d;
int counter=0;
while(scanf("%d",&num)!=EOF){
   for(a=0;a<=9;a++)
     for(b=0;b<=9;b++)
	   for(c=0;c<=9;c++)
	     for(d=0;d<=9;d++)
		    if(a+b+c+d==num)
			   counter++;
	printf("%d\n",counter);
	counter=0;                 /*&#35760;得恢&#22797;counter*/
	}
	return 0;
	}