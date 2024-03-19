#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
	
	
	while(1) {
		
		int i,j,shuffle,num=0,flag = 0,len=0,numsum=0;
		char Cards[20001];
		
		scanf("%s",Cards);
		if(Cards[0] == '-'){
			break;
		}
		
		len = strlen(Cards);
		
		scanf("%d",&shuffle);
		
		
		for (i = 0; i < shuffle; i++) {
			
			scanf("%d",&num);
			
			for(j = 0; j < len ; j++){
				Cards[len+numsum+j] = Cards[numsum+j];
			}
			
			numsum += num;
			
		}	
		
		for(i = numsum; i < numsum + len; i++ ) {
			printf("%c",Cards[i]);
		}
			printf("\n");
	}
		
		return 0;
	
}