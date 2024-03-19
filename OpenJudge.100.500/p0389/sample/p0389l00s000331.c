#include <stdio.h>
#include <string.h>

int main(){
	char card[1000], temp[1000];
	int i,j,k;
	int c_num,s_num,shuffle;
	
	while(1){
		for(i=0;i<1000;i++){
			scanf("%c", &card[i]);
//			printf("%d ", i);
			if(card[i] == '\n'){
				c_num = i;
				break;
			}
			if(card[0] == '-'){
				break;
			}
		}
			
		if(card[0] == '-'){
				break;
		}
		
		scanf(" %d", &s_num);
				
		for(j=0;j<s_num;j++){
			scanf("%d\n", &shuffle);
			for(k=0;k<shuffle;k++){
				temp[c_num - shuffle + k]=card[k];
//				printf("%d%c%d ", k, temp[c_num - shuffle + k],c_num - shuffle + k);
			}
//			printf("\n");
			for(k=0;k<c_num-shuffle;k++){
				temp[k]=card[shuffle + k];
//				printf("%d%c%d ", k, temp[k], shuffle + k);
			}
//			printf("\n");
			for(k=0;k<c_num;k++){
				card[k]=temp[k];
			}
			
		}
		
		for(i=0;i<c_num;i++){
			printf("%c", temp[i]);
		}
		
		printf("\n");
}	
    return 0;

}