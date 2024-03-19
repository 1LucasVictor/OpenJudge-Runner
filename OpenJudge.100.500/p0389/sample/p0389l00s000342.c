/* Includes */
#include<stdio.h>
#include<ctype.h>
#include<string.h>

/* Defines */
#define MAX_INPUT_WORDS (201)

/* Prototypes */

/* Valuables */
char words_input[MAX_INPUT_WORDS];
char words_save[MAX_INPUT_WORDS];

int num_shuffle_times;
int num_input_words;
int num_take_cards;
int f;

/* Main */
int main ()
{    
    while(1){
        /* 文字列の取得 */
	    scanf("%s", words_input);

        /* 文字列の長さを取得 */
	    num_input_words = strlen(words_input);


        /* words_saveの末尾に終端文字を代入 */
        words_save[num_input_words] = '\0';

        /* 処理終了判定 */
	    if ((words_input[0] == '-') && (num_input_words == 1)) {
            break;
        }
        else {
            /* NOP */
        }

        /* シャッフルの回数の取得 */
		scanf("%d", &num_shuffle_times);

		for(int i = 0; i < num_shuffle_times; i++) {

			scanf("%d", &num_take_cards);

            for (int j = 0; j < num_input_words; j++) {
                if (j < num_take_cards) {
                    words_save[num_input_words - num_take_cards + j] = words_input[j];
                }
                else {
                    words_save[j - num_take_cards] = words_input[j];
                }
            }

			for (int j = 0; j < num_input_words; j++) {
				words_input[j] = words_save[j];
			}
            
		}
        
        printf("%s\n",words_input);

	}

}
