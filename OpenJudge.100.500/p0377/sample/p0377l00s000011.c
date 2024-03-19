

#include <stdio.h>

int main(){

	int n, i;
	int num;
	char mar, sim[]={'S','H','C','D'};
	int card[52];

	for(i=0; i<52; i++) card[i]=0;

	scanf( "%d", &n);


	for( i=0; i<=n; i++){
		scanf( "%c %d\n", &mar, &num );

		switch(mar){
		case 'S': card[ 0+num-1] = 1; break;
		case 'H': card[13+num-1] = 1; break;
		case 'C': card[26+num-1] = 1; break;
		case 'D': card[39+num-1] = 1; break;
		} 
	}

	for( i=0; i<52; i++ ){
		if( card[i] == 0 ){
			printf( "%c %d\n", sim[i/13], (i%13)+1  );
		}
	}
		



	return 0;

}