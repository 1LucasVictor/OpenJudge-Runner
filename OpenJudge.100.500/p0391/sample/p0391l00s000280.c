#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
	unsigned char str[1001],p[1001],cmd[8],tmp;
	short a,b,q,i;

	// Input str q
	scanf("%1000s%hd",str,&q);

	// Input & Execute
	while(q-- > 0 ){
		scanf("%7s%hd%hd",cmd,&a,&b);
		if( strcmp(cmd, "print") == 0 ) {
			tmp = str[b+1];
			str[b+1]= '\0';
			puts(str+a);
			str[b+1] = tmp;
		} else if( strcmp(cmd, "reverse") == 0 ){
			memcpy( p, str+a, b-a+1 );
			for(i=0;i<b-a+1;i++){
				str[a+i] = p[b-a-i];
			}
		} else if( strcmp(cmd, "replace") == 0 ){
			scanf("%1000s",p);
			memcpy( str+a, p, b-a+1 );
		}
	}

	return 0;
}