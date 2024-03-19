#include<stdio.h>
#include<string.h>
#include<math.h>
  
  
      
int main(){
 

int i,j=0,n,kane;

scanf("%d",&n);

kane=100000;

for(i=0;i<n;i++){
	kane*=1.05;
	if(kane%1000>0){
		kane-=kane%1000;
		kane+=1000;
	}
}

printf("%d\n",kane);

    return 0;
}