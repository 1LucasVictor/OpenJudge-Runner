#include <stdio.h>
int main(){
	int n;
	int card[110];
	char t;
	int i;
	int x;
	scanf("%d\n",&n);
	for(i=0;i<110;i++){
		card[i]=0;
	}
	for(i=0;i<n;i++){
		scanf("%c %d\n",&t,&x);
		x-=1;
		if(t=='H') x+=13;
		else if(t=='C') x+=26;
		else if(t=='D') x+=39;
		card[x]=1;
	}
	for(i=0;i<52;i++){
		if(card[i]==0){
			if(i<13) printf("S ");
			else if(i<26) printf("H ");
			else if(i<39) printf("C ");
			else  printf("D ");
			printf("%d\n",(i%13)+1);
		}
	}
	return 0;
}