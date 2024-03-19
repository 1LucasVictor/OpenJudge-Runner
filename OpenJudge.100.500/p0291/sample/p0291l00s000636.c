#include <stdio.h>

int main () {

    int x[200000], a, i, j, max, min, mark1, ans, mark2, min2, temp, ans1, ans2 ;
	min = 10000000 ;
	max = 0 ;
	ans1 = 0 ;
    scanf ("%d", &a) ;
    
    for ( i = 0 ; i < a ; i++) {
    	scanf ("%d", &x[i]) ;
	}
	

	
	for ( i = 0 ; i < a ; i++ ) {
		for ( j = i ; j < a ; j++ ) {
		 	temp =  x[j] - x[i] ;
			if ( ans1 < temp) {
				ans1 = temp ;
			}
		}
	}
	


	for ( i = 0 ; i < a ; i++ ) {
		if ( min > x[i] ) {
			min = x[i] ;
			mark1 = i ;
		}
	}
	
	if ( mark1 != a - 1) {
		
		for ( i = mark1 ; i < a ; i++ ) {
			if ( max < x[i]) {
				max = x[i] ;
			}
		}
	ans2 = max - min ; 
    
	}
	else if ( mark1 == a - 1 ) {
		min2 = 100000 ;
		for ( i = 0 ; i < mark1 ; i++ ) {
			if ( min2 > x[i] ) {
				min2 = x[i] ;
			mark2 = i ;
			}
		}
		for ( i = mark2 ; i < a ; i++ ) {
			if ( max < x[i]) {
				max = x[i] ;
			}
		}
		if ( max > min2 ) {
		ans2 = max - min2 ; 
		}
		else if ( (mark1 == a - 1) || ( max < min2 ) ) {
			ans2 = min - max ;
		}
	}
	
	if (ans1 > ans2 )
	printf("%d\n", ans1 ) ; 
	else
	printf ("%d\n", ans2) ;

return 0;
}