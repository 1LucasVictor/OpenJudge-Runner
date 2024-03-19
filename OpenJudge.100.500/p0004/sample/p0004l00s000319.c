#include<stdio.h>
int main(void){
	int a,b,i=1,j,k;
	for(k=1;k<=50;k++){
	while((scanf("%d %d",&a,&b)!=EOF)){
		if(a>b){
			int temp=a;
			a=b;
			b=temp;
		}
	double c,d;
	c=a,d=b;
	if(b>a){
		do{
			j=b%a;
			if(j==0){
					printf("%d ",a);
					if(c/a*d<=2000000000){
						printf("%.0lf\n",(c/a)*d);	
					}
					break;
			}
			int temp;
			 temp=a;
    			b=temp;
    			a=j;
	}while(i<b);
	}
}	
}				
return 0;
}

