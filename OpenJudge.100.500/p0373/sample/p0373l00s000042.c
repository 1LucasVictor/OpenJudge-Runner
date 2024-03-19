#include <stdio.h>
main()
{
	int tate, yoko, i, j;



	while(1){
		scanf("%d %d", &tate, &yoko);
		if(tate == 0 && yoko == 0){
			break;
		}

		for(i = 0; i < tate; i++){
			for(j = 0; j < yoko; j++){
				if( (i > 0 && i < tate-1) && (j > 0 && j < yoko-1) ){
					printf(".");
				}else{
					printf("#");
				}
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}