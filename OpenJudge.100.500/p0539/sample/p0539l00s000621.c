#include<stdio.h>
int main(){
	int n,k,d,c[100]={1,2,3,4,5,6,7,8,9,10,12,14,15,16,18,20,21,24,25,27,28,30,32,35,36,40,45,49,64,81};	
	scanf("%d",&n);
	
	for(k=0;k<100;k++){
 if(n==c[k]){
	d++;
}
}
if(d>0)printf("Yes");
else printf("No");

		
		
	
return 0;
}
