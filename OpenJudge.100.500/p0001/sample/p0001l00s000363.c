#include<stdio.h>

int main()
{
	int a,b,i,j,x;
	while(scanf("%d %d",&a,&b)!=EOF){
		j=0;
		i = a + b;
        if(i>=10){
            while(1){
            	i/=10;
            	j++;
            	if(i<10)
            	    break;
            }
        }
        printf("%d\n",j+1);
    }
    return 0;
}