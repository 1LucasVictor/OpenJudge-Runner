#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short *attkVals;
    unsigned int i, numOfAttks; 
    signed int health; 
    scanf("%i %u", &health, &numOfAttks);
    
    attkVals = (short*) malloc (numOfAttks* sizeof(short));
    
    for (i=0; i<numOfAttks ; i++)
    {
        scanf("%hu", &attkVals[i]);
        health -= attkVals[i];
    }
    
    if (health > 0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    
    return 0;
}
