#include<stdio.h>
int main(void){
	int cards[4][13];
	int x,i,j,n;
	char ch,d;
	
	/*配列の場所*/
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			cards[i][j]=0;
		}
	}
	
	scanf("%d", &n);		/*太郎が持っているカードの枚数ｎ*/
	
	/*カードの柄*/
	for(i=0;i<n;i++){
		scanf("%c", &d);		/*改行の分*/
		scanf("%c %d", &ch, &x);		/*与えられるｎ組*/
		
		if(ch == 'S'){
			cards[0][x]=1;		/*１はとりあえず入れなあかんからいれた数？*/
		}
		else if(ch == 'H'){
			cards[1][x]=1;
		}
		else if(ch == 'C'){
			cards[2][x]=1;
		}
		else if(ch == 'D'){
			cards[3][x]=1;
		}
	}
	
	/*カードの数字*/
	for(j=1;j<=13;j++){
		if(cards[0][j]!=1){		/*！＝１のとき出力やからないカードが出る！！*/
			printf("S %d\n", j);
		}
	}
	for(j=1;j<=13;j++){
		if(cards[1][j]!=1){
			printf("H %d\n", j);
		}
	}
	for(j=1;j<=13;j++){
		if(cards[2][j]!=1){
			printf("C %d\n", j);
		}
	}
	for(j=1;j<=13;j++){
		if(cards[3][j]!=1){
			printf("D %d\n", j);
		}
	}
	return 0;
}
