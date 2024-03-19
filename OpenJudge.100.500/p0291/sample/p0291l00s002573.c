#include <stdio.h>
#include <stdlib.h>
int main( ) {
    int t;
    int readnumber = scanf("%d", &t);
    if(t<2||t>200000)
        return 0;
    
    int arrayR[t];
    for(int i=0; i< t; i++)
    {
        int readArray = scanf("%d", &arrayR[i]);
    }
    
    int l = (t)*(t-1)/2;
    int b;
    int max = arrayR[1]-arrayR[0];
    int min;
    for(int i=t-1; i>=0; i--)
    {
         for(int j=i-1; j>=0; j--)
        {   min = arrayR[j];
            if(arrayR[j-1]< min)
            {
                min = arrayR[j];
            }
            b = arrayR[i] - min;
            if( b > max)
                max = b;
         }
    }
    printf("%d\n", max);
    return (EXIT_SUCCESS);
}
    

