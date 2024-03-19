#include<stdio.h>
int main()
{
	int in[10],out[10],n,i=0,j=0,x=0;
	while(1){
		scanf("%d",&n);
		if(n==0){
			out[j]=in[i-1];
			j++;
			i--;
			}
		else{
		in[i]=n;
		i++;
		x++;
		}
		if(x==j){
			break;
			}
	}
	for(i=0;i<j;i++){
		printf("%d\n",out[i]);
		}
	return 0;
}