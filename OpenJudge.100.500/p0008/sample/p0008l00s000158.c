#include<stdio.h>
#include<math.h>

#define max 100000

int main()
{
	int a;
	int x,y,z;
	int r[max];
	for(x=3;x<=max;x+=2){
			r[x]=1;
	}
	for(z=3;z<=1000;z+=2)
			if(r[z]==1){
			for(x=3;x<=max/z;x+=2){
					r[x*z]=0;
			}
			}
	while((scanf("%d",&a))!=EOF){
		
		if(a==1){
			printf("%d\n",0);
		continue;
		}
		int t;
		t=1;
		
			for(x=3;x<=a;x+=2){
			if(r[x]==1)
				t++;
			}
			printf("%d\n",t);
	}
	return 0;
}