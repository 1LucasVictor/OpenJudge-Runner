#include<stdio.h>

int main()
{
	int a;
	while((scanf("%d",&a))!=EOF){
		int n,m,b,c;
		int t;
		t=0;

		for(n=0;n<10;n++)
			for(m=0;m<10;m++)
				for(b=0;b<10;b++)
					for(c=0;c<10;c++){
						if(n+m+b+c==a)
							t++;
					}
					printf("%d\n",t);
	}
	return 0;
}