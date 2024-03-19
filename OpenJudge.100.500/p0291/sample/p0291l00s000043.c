#include <stdio.h>

#define INIT_LOOP 0
#define SECOND_ELEMENT 1
#define EXIT_SUCCESS 0
#define ELEMENT_MAX_INIT -1000000001

int main( void )
{
	unsigned short usW_Delement_cnt;
	unsigned short usW_Dloop_cnt;
	long ulW_Delement;
	long ulW_Delement_first;
	long ulW_Delement_min;
	long slW_Delement_max;

	scanf("%d", &usW_Delement_cnt );									/*????´??????°?????°??????*/
	for( usW_Dloop_cnt = INIT_LOOP; usW_Dloop_cnt < usW_Delement_cnt; usW_Dloop_cnt++){
		scanf("%ld", &ulW_Delement);
		if( usW_Dloop_cnt == INIT_LOOP ){
			ulW_Delement_first = ulW_Delement;
		}
		else{
			/*else???????????????????????§?????\*/
		}

		if( usW_Dloop_cnt == SECOND_ELEMENT ){
			slW_Delement_max = ulW_Delement - ulW_Delement_first;
		}
		else if( slW_Delement_max < ulW_Delement - ulW_Delement_min ){
			slW_Delement_max = ulW_Delement - ulW_Delement_min;
		}
		else{
			/*else?????????????????????????????\*/
		}

		if( usW_Dloop_cnt == INIT_LOOP ){
			ulW_Delement_min = ulW_Delement;
		}
		else if( ulW_Delement_min > ulW_Delement ){
			ulW_Delement_min = ulW_Delement;
		}
		else{
			/*else?????????????????????????????\*/
		}

	}
	printf("%ld\n", slW_Delement_max);
	return EXIT_SUCCESS;
}