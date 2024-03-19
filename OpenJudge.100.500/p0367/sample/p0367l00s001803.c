#include <stdio.h>

int main(){

    int i,j,a,b,c;
     
 	  scanf("%d",&a);
	  scanf("%d",&b);
	  scanf("%d",&c);	      
     
    j=0;
     
    for(i=a;i<=b;++i){
	   if(c%i==0){
		   j++;
	   }
    }

 	printf("%d\n",j);

	return 0;
}