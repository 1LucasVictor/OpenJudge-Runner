#include<stdio.h>
#include<string.h>

struct DATA_SET
{
    int integer1;
    int integer2;
};

int main()
{
    struct DATA_SET integer[3];
	int count,sum,counta[3]={0,0,0};
    
    for(count=0;count<3;count++)
    {
        scanf("%d %d", &integer[count].integer1,&integer[count].integer2);
        sum = integer[count].integer1 + integer[count].integer2;
        
        while(sum != NULL)
        {
            counta[count]++;
            sum = sum / 10;
        }
    }
    
    for(count=0;count<3;count++)
    {
        printf("%d\n", counta[count]);
    }
    return 0;
}