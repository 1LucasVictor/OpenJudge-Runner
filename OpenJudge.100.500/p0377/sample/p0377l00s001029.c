#include <stdio.h>
#include <string.h>

int main(void) {
  int N, i, j;
  char trumps[4][13];
  char mark[4] = {'S', 'H', 'C', 'D'};

  /* 初期化 */
  memset(trumps, 0, 4*13);

  /* かーど枚数読取り */
  scanf("%d\n", &N);

  /* かーど情報格納 */
  for (i = 0; i < N; i++) {
    int num, j;
    char pict;
    scanf("%c %d\n", &pict, &num);
    for (j = 0; pict != mark[j]; j++);
    trumps[j][--num] = 1;
  }

  /* かーど情報確認 */
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 13; j++) {
      if (!trumps[i][j])
        printf("%c %d\n", mark[i], j+1);
    }
  }
  return 0;
}