#include<stdio.h>

int main()
{
	int x,y,i;
	char number[1001];
	while(1){
		x = 0;
	    scanf("%s", number);
	    if(number[0] == '0'){
	    	break;
	    }
	    for(i=0; number[i] != '\0'; i++){
	    	y = number[i] - '0';
	    	x += y;
	    }
	    printf("%d\n",x);
	}
	return 0;
}