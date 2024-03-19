#include <stdio.h>

int main(){

    int i,k,l;
    int data[10];
    
    for (i=0;i<3;++i) {
		scanf("%d",&data[i]);
     }
   
    for (i=0;i<3;++i) {
	  for(k=i+1;k<3;++k){
		if (data[i]>data[k]){
			l=data[i];
			data[i]=data[k];
			data[k]=l;
	     }
	    }
	 }

		printf("%d %d %d\n",data[0],data[1],data[2]);

    return 0;
}