#include<stdio.h>
#define COUNT_RESET 0
#define ARRAY_RESET 0
#define LOOP_RESET 0

void array_reset(unsigned char * array, unsigned short size);
unsigned short scan_word(unsigned char * str, unsigned short length_max);
void print_word(unsigned char * str, unsigned short length);
void card_shuffle(unsigned char * card, unsigned short num);
unsigned short str_to_int(unsigned char * str, unsigned short digit);

int main(){
	unsigned char card[200];
	unsigned short card_num;
	unsigned char char_times[4];
	unsigned short int_times;
	unsigned short times_digit;
	unsigned short i;
	
	while(1){
		card_num = scan_word(card, 200);
		if(*card == '-'){
			break;
		}

		times_digit = scan_word(char_times, 4);
		int_times = str_to_int(char_times, times_digit);
		for(i = 0;i < int_times;i++){
			card_shuffle(card, card_num);
		}

		print_word(card, card_num);
	}
	return 0;
}

/* 関数名：配列初期化 */
/* 概要：渡されたアドレスを先頭とする配列の値を初期化する */
/* 引数：初期化する配列の先頭アドレス、その配列の大きさ */
/* 戻り値：なし */
void array_reset(unsigned char * array, unsigned short size)
{
	unsigned short usW_C_i; 	/* ループ変数 */
	/* 配列の初期化 */
	for(usW_C_i = COUNT_RESET;usW_C_i < size;usW_C_i++){
		*(array + usW_C_i) = ARRAY_RESET;
	}
}

/* 関数名：文字列入力 */
/* 概要：文字列を入力する。入力された文字列の長さを返す */
/* 引数：文字列を格納する配列の先頭アドレス、その配列の大きさ */
/* 戻り値：入力された文字列の長さ */
unsigned short scan_word(unsigned char * str, unsigned short length_max)
{
	unsigned short usW_C_count_text = COUNT_RESET;  	/* 文字列長カウンタ */
	unsigned short usW_C_i;                         	/* ループ変数 */

	/* 配列の初期化 */
	for(usW_C_i = COUNT_RESET;usW_C_i < length_max;usW_C_i++){
		*(str + usW_C_i) = ARRAY_RESET;
	}
	
	/* 文字列の入力 */
	for(usW_C_i = LOOP_RESET;usW_C_i < length_max;usW_C_i++){
		scanf("%c", str + usW_C_i);
		/* 入力終了の処理 */
		if((*(str + usW_C_i) == ' ') || (*(str + usW_C_i) == '\n')){
			break;
		}
		/* 文字数をカウント */
		usW_C_count_text++;
	}

	/* 文字列長を返す */
	return usW_C_count_text;
}

void print_word(unsigned char * str, unsigned short length)
{
	unsigned short i;
	for(i = 0;i < length;i++){
		printf("%c", *(str + i));
	}
	printf("\n");
}

void card_shuffle(unsigned char * card, unsigned short num)
{
	unsigned char card_memo[200 * 2];
	unsigned char char_stage[4];
	unsigned short int_stage = 0;
	unsigned short stage_digit;
	unsigned short i;
	
	for(i = 0;i < num;i++){
		card_memo[i] = *(card + i);
	}

	for(i = 0;i < num;i++){
		card_memo[i + num] = *(card + i);
	}
	
	stage_digit = scan_word(char_stage, 4);
	int_stage = str_to_int(char_stage, stage_digit);

	for(i = 0;i < num;i++){
		*(card + i) = card_memo[i + int_stage];
	}
}

unsigned short str_to_int(unsigned char * str, unsigned short digit)
{
	unsigned short multi;
	unsigned short ans = 0;
	unsigned short i, j;

	for(i = 0;i < digit;i++){
		multi = 1;
		for(j = 0;j < i;j++){
			multi *= 10;
		}
		ans += *(str + digit - i -1) -48;
	}

	return ans;
}
