/*	ex9_2
	suzuto	*/

#include <stdio.h>
#include <stdlib.h>

#define  SIZE 100000

typedef struct cube{ /*積まれたキューブを下から順に参照するための構造体を作る*/
  char color;
  struct cube *next;
}cube;

/*プロトタイプ宣言*/
cube *insert_cube(cube *cube_bottom, char add_elem);
cube *delete_cube(cube *cube_ptr, cube *prev_ptr, cube *cube_bottom);

int main(void) {
  cube *lower_stack, *upper_stack; /*変数の宣言*/
  char inp[SIZE + 1], ins;
  int i, count = 0;

  lower_stack = NULL; /*リストの初期化*/
  scanf("%s", inp); /*文字列を入力*/

  for(i = 0; i < SIZE + 1; i++){ /*入力をリストに追加していく*/
    ins = inp[i];
    if(ins == '\0'){ /*末尾の識別*/
      break;
    }
    lower_stack = insert_cube(lower_stack, ins); /*リストを拡張*/
  }

  upper_stack = NULL; /*参照位置より上のキューブを記憶するためのリストを初期化*/
  while(lower_stack != NULL){ /*参照位置の上下で色が一致するかを調べる*/
    if(upper_stack == NULL){ /*上に何もなければ参照位置を一つ下げるだけ*/
      upper_stack = insert_cube(upper_stack, lower_stack->color);
      lower_stack = delete_cube(lower_stack, NULL, lower_stack);
    }else if(upper_stack->color != lower_stack->color){ /*色が不一致の時はそれらを削除*/
      upper_stack = delete_cube(upper_stack, NULL, upper_stack); /*参照位置の上を削除*/
      lower_stack = delete_cube(lower_stack, NULL, lower_stack); /*参照位置の下を削除*/
      count += 2; /*カウントを更新*/
    }else{ /*色が一致している時は参照位置を下げる*/
      upper_stack = insert_cube(upper_stack, lower_stack->color);
      lower_stack = delete_cube(lower_stack, NULL, lower_stack);
    }
  }
  printf("%d\n", count); /*結果を出力*/
  return 0;
}

cube *insert_cube(cube *cube_bottom, char add_elem){ /*リストの先頭に要素を追加する関数*/
  cube *new; /*変数の宣言*/

  if((new = calloc(1, sizeof(cube))) == NULL){ /*配列の領域が確保を確保できなかった時のエラー出力*/
    fprintf(stderr, "Calloc error.\n");
  }
  new->color = add_elem; /*新しく確保した領域に要素を格納*/
  new->next = cube_bottom; /*先頭を更新*/
  return new;
}

cube *delete_cube(cube *cube_ptr, cube *prev_ptr, cube *cube_bottom){ /*リスト内の指定した位置の要素を削除する関数*/
  cube *res_bottom; /*変数の宣言*/

  if(prev_ptr == NULL){ /*消す位置が先頭の時*/
    res_bottom = cube_ptr->next; /*リストの先頭を変更*/
    free(cube_ptr); /*削除した位置を解放*/
    return res_bottom;
  }
  prev_ptr->next = cube_ptr->next; /*リストを接続し直す*/
  free(cube_ptr); /*削除した位置を解放*/
  return cube_bottom;
}
