#include<stdio.h>
int main(void){
	int a,b,c,d,e,f;
	while(1){
		scanf("%d %d",&a,&b);
		c=a;
		d=b;
		
		if(a==0&b==0){
			goto hata;
		}
		else{
			for(e=1;e<=c;e++){
				for(f=1;f<=d;f++){
					if(e==1){
						putchar('#');
					}
					else if(f==1){
						putchar('#');
					}
					else if(e==c){
						putchar('#');
					}
					else if(f==d){
						putchar('#');
					}
					else{
						putchar('.');
					}
				}
				putchar('\n');
			}
			putchar('\n');
		}
	}
	hata:
	return 0;
}