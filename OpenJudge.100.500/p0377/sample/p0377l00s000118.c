#include <stdio.h>

int main(void){

	/*4???13??????????¬??????????trump?????£?¨?
	 0??????S 1??????H 2??????C 3??????D */
	int trump[4][13] ;		//?????????????????????????????°???0???
	int j = 0 ;
	int i = 0 ;					//for???????????????????????°
	int n = 0 ;					//?????????????????°???????´????????????°
	char suite = '0' ;			//????????????????????????????´????????????°
	int row = 0 ;				//?????????????¨?????????????????????????
	int rank = 0 ;				//????????????????????????????´????????????°

	/*trump????????????*/
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			trump[i][j] = 0 ;
		}
	}


	/*???????????????????????????????????±?????????*/
	scanf("%d", &n);
	(void)getchar();

	/*?????????????????±?????????n?????°?????????*/
	for(i = 1 ; i <= n ; i++){
		scanf("%c",&suite);
		(void)getchar();
		scanf("%d",&rank);
		(void)getchar();

		/*??????????????±?????????????????????*/
			switch(suite){
				case 'S':			//???????????????0???
					row = 0;
					break;

				case 'H':			//????????????1???
					row = 1 ;
					break;

				case 'C':			//????????????2???
					row = 2 ;
					break;

				case 'D':			//????????????3???
					row = 3 ;
					break;
			}

		/*???????????£????????????????????????????????°????????????*/
		trump[row][rank-1] = 1 ;

	}

	/*????????°????????£?????????????????????????????¨??????????????§????????????*/

	/*????????????*/
	for( i = 0 ; i < 13 ; i++){
		if(trump[0][i] == 0){
			printf("S %d\n" ,i+1);
		}
	}

	/*?????????*/
	for( i = 0 ; i < 13 ; i++){
		if(trump[1][i] == 0){
			printf("H %d\n" ,i+1);
		}
	}

	/*?????????*/
	for( i = 0 ; i < 13 ; i++){
		if(trump[2][i] == 0){
			printf("C %d\n" ,i+1);
		}
	}

	/*?????????*/
	for( i = 0 ; i < 13 ; i++){
		if(trump[3][i] == 0){
			printf("D %d\n" ,i+1);
		}
	}


	return 0;
}