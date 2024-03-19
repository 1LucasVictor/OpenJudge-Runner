#include<stdio.h>
int main(void)
{
	int a,x,i;
	while((scanf("%d",&a))!=EOF){
		x=0;
		for(i=2;i<a+1;i++){
			if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0){
				x++;
			}
			else if(i==2||i==3||i==5||i==7){
				x++;
			}
		}
		printf("%d\n",x);
	}
	return 0;
}