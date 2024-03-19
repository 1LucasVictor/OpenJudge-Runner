#include<stdio.h>
int main(void)
{
    int s;
    scanf("%d", &s);
    if(s == 111)
    {
    	printf("3");
    }
    else if(s == 110 || s == 101 || s == 011)
    {
    	printf("2");
    }
    else if(s == 100 || s == 010 || s == 001)
    {
    	printf("1");
    }
    else
    {
    	printf("0");
    }
	return 0;
}

