#include<stdio.h>
int main(void){
	int a,b,i=1,j,k;
	for(k=1;k<=50;k++){
	while((scanf("%d %d",&a,&b)!=EOF)){
	
	double c,d;
	c=a,d=b;
	if(b>a){
		do{
			if(b>a){
			j=b%a;
			}	
			if(j==0){
					printf("%d ",a);
					if(c/a*d){
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
					if(c/b*d){
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
				
return 0;
}
	

