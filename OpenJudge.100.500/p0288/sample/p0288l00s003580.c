#include <stdio.h>
#include <stdlib.h>
int main( ) {
    
       int NumberOfElements;
       int readScan = scanf("%d ", &NumberOfElements);
      
       if(readScan != 1)
    {
        printf("data format error!");
        return(EXIT_FAILURE);
    }
   
      
        int array[NumberOfElements];

        for( int ix=0; ix < NumberOfElements; ix++ )
       {
            int readScan = scanf("%d", &array[ix]);
            if(readScan != 1)
            {
                 printf("data format error!");
                 exit;
            }
            printf("%d ", array[ix]); 
        }
        printf("\n");
      
        int key;
        
        for(int i = 1; i< NumberOfElements; i++)
        {
            key = array[i];
            int j = i - 1;
            while( j >= 0 && array[j] > key)
            {
                array[j+1] = array[j];
                j--;
            }     
             array[j+1] = key;
         
             for(int k=0; k<NumberOfElements; k++)
            {
                printf("%d ", array[k]);
            }
            printf("\n");
        }
        printf("\n");
    return (EXIT_SUCCESS);
}
