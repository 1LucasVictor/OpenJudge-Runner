#include <stdio.h>
#include <string.h>

int main(){
  char line[202];
  char card[202];
  int m;						/* シャッフル回数 */
  int h[100];					/* シャッフルする枚数 */
  int i, j;
  int rest_card_length;			/* 残りのカード枚数 */
  int card_length;				/* カード総数 */
  while(1){
	//文字列の読み込み
	fgets(card, sizeof(card), stdin);
	if(card[strlen(card)-1]=='\n') /* カードなら改行文字が末尾につくから削除する */
	  card[strlen(card)-1]='\0';
	if(strcmp(card, "-")==0)		/* 終了条件 */
	  break;
	card_length=strlen(card);
	//シャッフル回数と下からシャッフルする枚数のよみこみ
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &m);
	for(i=0; i<m; ++i){
	  fgets(line, sizeof(line), stdin);
	  sscanf(line, "%d", &h[i]);
	}
	//shuffle
	for(i=0; i<m; ++i){
	  for(j=0; j<h[i]; ++j){	/* カードを取り出す */
		line[j]=card[j];
	  } 
	  line[h[i]]='\0';
	  for(j=0; j<(card_length-h[i]+1); ++j){
		card[j]=card[h[i]+j];
	  }
	  rest_card_length=strlen(card);
	  for(j=0; j<h[i]; ++j){
		card[rest_card_length+j]=line[j];
	  }
	  card[card_length]='\0';
	}
	//出力
	printf("%s\n", card);
  }
  return 0;
}

