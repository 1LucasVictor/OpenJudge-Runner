/*
 * ver0.1
 * どうすればいいねん
 * わからん
 */#include<stdio.h>
int main(void)
{
	int a,b,c,d,n,i;
	while(scanf("%d",&n)!=EOF){
		for(a=0;a<10;a++){
		for(b=0;b<10;b++){
		for(c=0;c<10;c++){
		for(d=0;d<10;d++){
			if(n==a+b+c+d)
				i++;
		}
		}
		}
		}
		printf("%d\n",i);
		i=0;
	}
	return 0;
}