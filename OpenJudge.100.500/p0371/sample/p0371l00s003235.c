  


#include <stdio.h>

int main(void){ 

int i,kazu; 

long sum=0,a,min=1000001,max=-1000001; 

scanf("%d",&kazu);  

for(i=0;i<kazu;i++){ 

scanf("%ld",&a); 

if(a<=min){ 

min=a; 

} 

if(a>=max){ 

max=a; 

} 

sum=sum+a; 

} 

printf("%d %d %ld\n",min,max,sum); 

return 0;

}
 