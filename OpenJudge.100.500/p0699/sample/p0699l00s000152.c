#include<stdio.h>
 
int main(){
	int a,count=0;
  	for(int i=0;i<3;i++){
    	scanf("%d",&a);
      	if(a==5||a==7){
        	count+=a;
        }else{
        	break;
        }
    }
  	if(count==17){printf("YES");}else{printf("NO");}
  	return 0;
}