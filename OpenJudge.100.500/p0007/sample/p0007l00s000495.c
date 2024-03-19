#include<stdio.h>

int main(){
	int a,b,c,d;
	int N;
	int M;
	while(scanf("%d",&N)!=EOF){
		M=0;
		for(a=0;a<=9;a++)
			for(b=0;b<=9;b++)
				for(c=0;c<=9;c++)
					for(d=0;d<=9;d++)
						if(a+b+c+d==N)
							M++;
		printf("%d\n",M);
	}		
	return 0;
}