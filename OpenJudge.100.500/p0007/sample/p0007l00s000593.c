#include<stdio.h>
int main()
{
	int n,i,i2,i3,i4,a;
	
	while(scanf("%d",&n)!=EOF){
		a=0;
		for(i=0;i<10;i++){
			for(i2=0;i2<10;i2++){
				for(i3=0;i3<10;i3++){
					for(i4=0;i4<10;i4++){
						if(n==i+i2+i3+i4){
							a++;
						}
					}
				}
			}
		}
		printf("%d\n",a);
	}
	return 0;
}