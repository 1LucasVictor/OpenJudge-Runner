#include <stdio.h>
#include <stdlib.h>
int main( ) {
    int t;

    int readnumber = scanf("%d", &t);
    
    if(t<=2||t>200000)
        return 0;
    
    int arrayR[t];
    for(int i=0; i< t; i++)
    {
        int readArray = scanf("%d", &arrayR[i]);
    }
    
    int l = (t)*(t-1)/2;
        int barray[l];
        int b, count;
        count = 0;
    for(int j=t-1; j>=0; j--)
    {
        for(int i= j-1; i>=0; i-- )
        {
             b = arrayR[j] - arrayR[i]; 
             barray[count++] = b;
        }
    }
    int max;
    max = barray[0];
    for(int i=1; i<t; i++)
    {
        if(barray[i] > max)
        {
            max = arrayR[i];
        }
    }  
    printf("%d", max);
    return (EXIT_SUCCESS);
}
