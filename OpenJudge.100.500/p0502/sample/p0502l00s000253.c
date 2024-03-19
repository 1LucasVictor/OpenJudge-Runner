#include<stdio.h>
#include<string.h>
#include<math.h>
 
 
int main(){
   int n;
   scanf("%d ", &n);
   int a,f=0,ff=0;
   for(int i=0;i<n;i++){
   	scanf("%d ", &a);
    if(a%2==0){
      ff++ ;
      if(a%3==0 || a%5==0){
       	f++; 
      }
    }
   }
   //printf("%d %d",f,ff);
	if(f==ff){
     	printf("APPROVED"); 
    } else{
       printf("DENIED");
    }
   return 0;
 
}