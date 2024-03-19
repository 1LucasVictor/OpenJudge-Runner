#include <stdio.h>

#define MAX_TYPE 4
#define MAX_RANK 13

int main(int argc, char **argv){
	int i,j;
	char buf[256];
	int data[MAX_TYPE][MAX_RANK] = {};
	int len,rank,type;
	char ch_type;
	
	// Input
	fgets( buf, 256, stdin);
	sscanf( buf, "%d",&len);
	for(i=0;i<len;i++){
		fgets( buf, 256, stdin);
		sscanf( buf,"%c %d",&ch_type,&rank);
		// Convert Type
		type = 0;
		switch(ch_type){
		case 'S':
			type = 0;
			break;
		case 'H':
			type = 1;
			break;
		case 'C':
			type = 2;
			break;
		case 'D':
			type = 3;
			break;
		default:
			return 1;
		}
		// Found
		data[type][rank-1] = 1;
	}
	
	// Output
	for(i=0;i<MAX_TYPE;i++){
		for(j=0;j<MAX_RANK;j++){
			if( !data[i][j] ){
				// Convert Type
				ch_type = 'S';
				switch(i){
				case 0:
					ch_type = 'S';
					break;
				case 1:
					ch_type = 'H';
					break;
				case 2:
					ch_type = 'C';
					break;
				case 3:
					ch_type = 'D';
					break;
				default:
					break;
				}
				printf("%c %d\n",ch_type,j+1);
			}
		}
	}
	
	return 0;
}