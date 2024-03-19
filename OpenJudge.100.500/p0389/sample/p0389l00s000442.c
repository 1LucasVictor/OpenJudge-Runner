#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
	unsigned char word[201],tmp[201];
	int m,h,len;

	for(;;){
		// Input Word
		scanf("%200s",word);
		len = strlen(word);
		// Check Finish
		if( word[0] == '-' ){
			break;
		}
		// Input M
		scanf("%d",&m);
		// Input H & Shuffle
		while( m-- > 0 ){
			scanf("%d",&h);
			memcpy( tmp, word, h );
			memmove( word, word+h, len-h);
			memcpy( word+len-h, tmp, h);
		}
		// Output
		printf("%s\n",word);
	}

	return 0;
}