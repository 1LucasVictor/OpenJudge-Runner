#include <stdio.h>
 
int main(void) {

	char word[1201];
	int i;
     
	fgets(word, 1201, stdin);

	for(i=0; '\0'!=word[i]; i++ ) {//65=A 90=Z 97=a 122=z
		if(65<=word[i] && word[i]<=90) {
			word[i]=32+word[i];
	}	/* ???????????\?????????????????§??????????????? */

	else if(97<=word[i] && word[i]<=122) {
		word[i]=word[i]-32;//65-97
	}	/* ??\??????????????±?????????????????§?°??????\????????? */

	else{
		printf("");
		}
	}	/* ??\??????????????±????????????????????????????????? */

	word[i]='\0';
		printf("%s", word);	/* ??§?°??????\???????????£?????±??????????????? */

	return 0;
}