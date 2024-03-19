#include<stdio.h>
#include<math.h>
#define N 200

int main()
{
	int a,b,data[N],i=0,j,n;
	while(scanf("%d %d",&a,&b) != EOF){
		data[i]=a+b;
		i++;
	}
	for(n=0;n<i;n++){
		for(j=6;j>=0;j--){
			if((data[n])/((int)pow(10,j))){
				printf("%d\n",j+1);
				break;
			}
		}
	}
         return 0;
}