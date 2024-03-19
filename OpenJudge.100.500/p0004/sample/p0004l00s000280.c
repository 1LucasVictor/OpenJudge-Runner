#include<stdio.h>
int main(void){
	int a,b,i=1,j,k;
	for(k=1;k<=50;k++){
	while((scanf("%d %d",&a,&b)!=EOF)){
	if(a<=2000000000&&b<=2000000000){
	double c,d;
	c=a,d=b;
	if(b>a){
		do{
			if(b>a){
			j=b%a;
			}	
			if(j==0){
					printf("%d ",a);
					if(c/a*d<=2000000000){
						printf("%.0lf\n",(c/a)*d);	
					}
					break;
			}
			int temp=a;
    			b=temp;
    			a=j;
	}while(i<b);
	}
	if(a>b){
		do{
		if(a>b){
			j=a%b;
		}
			if(j==0){
					printf("%d ",b);
					if(c/b*d<=2000000000){
					printf("%.0lf\n",(c/b)*d);
					}
					break;
			}
			int temp=b;
    			a=temp;
    			b=j;
	}while(i<b);
}
	}	
	}
	}			
return 0;
}
	

