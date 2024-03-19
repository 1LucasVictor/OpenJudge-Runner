#include <stdio.h>
 
int main(void) {
    int a,b,i,j;
    while(scanf("%d %d",&a,&b)!=EOF){
        i=1000000;
        j=7;
    while((a+b)/i!=1&&i>1)
    {
    	if(0==(a+b))
    	{
    		j=0;
    		break;
    	}
    	i=i/10;
        j--;
    }
    printf("%d\n",j);
    }
    return 0;
}