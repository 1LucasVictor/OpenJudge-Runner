#include <stdio.h>
#include <string.h>

#define MAX2 100000

#define number2 100000


int separating ( int *separate, int MAX, int number );

int main(void)
{
	int i = 0;
	int separate[number2+1];
	int j = 0;
	int loop = 0;
	int flag = 0;
	int nyuryoku[MAX2] = {};
	int sum[number2] = {};
	int max         = 0;
	int min         = 0;
	int order       = 0;
	int daisu       = 0;
	
	for ( i = 0; i < number2; i++ ) {
		separate[i] = i+1;
	}
	
	scanf("%d", &order);
	scanf("%d", &daisu);
	daisu--;
	for ( i = 0; i < order; i++ ) {
		scanf("%d", &nyuryoku[i+1]);
//		printf("%d\n", nyuryoku[i+1]);
	}

	separate[daisu] = order;
	
	
	
	    i = 0;
	    j = 0;
	    while ( i < order ) {
	        while ( i < separate[j] ) {
	            sum[j]+=nyuryoku[i+1];
//	            printf("%d: %d\n", j, sum[j]);
	            i++;
	        }

	        j++;
	    }

	    max = sum[0];
	    j = 0;
	    
	    while ( j < daisu+2 ) {
//	            printf("%d: %d\n", j, sum[j]);
	        
	        if ( max < sum[j] ) {
	            max = sum[j];

	        }
	        
	        j++;
	    }
	    
	    min = max;
	
//	printf("%d\n", nyuryoku[1]);
	
	while ( 1 ) {
//	    printf("max: %d\n", max);
	    for ( j = 0; j < daisu+1; j++ ) {
	        sum[j] = 0;
	    }
	    
	    
	    i = 0;
	    j = 0;
	    while ( i < order ) {
	        while ( i < separate[j] ) {
	            sum[j]+=nyuryoku[i+1];
//	            printf("%d ", nyuryoku[i+1]);
	            i++;
	        }
//	        printf("%d\n", sum[j]);
	        j++;
	    }

	    max = sum[0];
	    j = 0;

	    while ( j < daisu +1 ) {
	        
	        if ( max < sum[j] ) {
	            max = sum[j];
	        }
	        
	        j++;
	    }

	    
	    if ( min > max ) {
	        min = max;
	    }
		
		
		if ( separating( separate, order, daisu ) < 0 ) {
		    break;
		}


	}
	
	printf("%d\n", min);
	
	return 0;
}

int separating( int *separate, int MAX, int number )
{
	int j = 0;
	
	
	if ( separate[0] > MAX - number-1 ) {
        return -1;
	}
	j = number - 1;
	
	while ( 1 ) {
		if ( separate[j] < MAX - number +j ) {
			separate[j]++;
			break;
		} else {   
			j--;
		}
	}
	
	while ( j != number - 1 ) {
	    separate[j+1] = separate[j] + 1;
	    j++;
	}
	
	return 0;
}
