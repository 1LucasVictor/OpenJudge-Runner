#include<stdio.h>
int main(void)
{
	int a,b=1000000,c=-1000000,e,f;
        long d=0;
	scanf("%d",&a);
	for(e=1;e<=a;e++){
		scanf("%d",&f);
		if(b>f){
			b=f;
		}
		if(c<f){
			c=f;
		}
		d+=f;
	}
	printf("%d %d %d\n",b,c,d);
	return 0;
}