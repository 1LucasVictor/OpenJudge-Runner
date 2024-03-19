#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct shufProj{
	char deck[201];	/*文字列の長さ <= 200*/
	int shuf_cnt;	/*シャッフル回数 <= 100*/
	int shuf_no[101];	/*シャッフル位置 <= 文字列の長さ*/
};


int main(){
	
	int i,j,k,l;
	int cnt;
	struct shufProj deckNo[10];
	char deck_cpy[201]={0};
	char test_str[201]={0};
	
	for(i=0; ; i++){
		scanf("%s",deckNo[i].deck);
		if( strcmp(deckNo[i].deck,"-") == 0){
				break;
		}
		scanf("%d",&deckNo[i].shuf_cnt);
		for(j=0; j<deckNo[i].shuf_cnt; j++){
			scanf("%d",&deckNo[i].shuf_no[j]);
		}
	}	
	
	cnt = i;
	for(i=0; i<cnt; i++){
		for(j=0; j<deckNo[i].shuf_cnt; j++){		/*Input 2行目で指定したシャッフル回数だけ繰り返す*/
			l=0;
//			printf("詰める前：\n%s\n",deckNo[i].deck);
			for(k=deckNo[i].shuf_no[j]; k < strlen(deckNo[i].deck); k++){	/*初期値=入替位置、条件：文字列の長さの回数ループ*/
//				printf("%d番目：%cをセット\n",k,deckNo[i].deck[k]);
				deck_cpy[l] = deckNo[i].deck[k];
//				printf("%c\n");
				l++;
			}
//			printf("詰めた後：\n%s\n",deck_cpy);
/*			{	//test_結合前に確認
				strncat(test_str, &deckNo[i].deck[0], deckNo[i].shuf_no[j]);
				printf("以下を結合：\n%s\n",test_str);
				memset(test_str, '\0', sizeof(test_str));
			}
*/			strncat(&deck_cpy[l], &deckNo[i].deck[0], deckNo[i].shuf_no[j]);
			deck_cpy[k] = '\0';
			strcpy(deckNo[i].deck,deck_cpy);
//			printf("%s\n(%d回:%d)\n",deck_cpy,j,deckNo[i].shuf_no[j]);
			memset(deck_cpy, '\0', sizeof(deck_cpy));
//			printf("入れ替え%d回目：%s\n",j,deck_cpy);
//			printf("(Originへのコピー：%s)\n",deckNo[i].deck);
		}
		printf("%s\n",deckNo[i].deck);
	}
	
	return 0;
}
