#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 100000
#define REMOVED '2'

struct LIST {
  struct LIST *next;
  struct LIST *prev;
  char value;
};

int main() {
  char S[MAX_N];

  struct LIST *head;
  struct LIST *list;
  struct LIST *prev;

  int len;
  int has_changed;
  int i;
  int result;

  scanf("%s", S);
  len = strlen(S);

  // 単方向リスト作成
  head = (struct LIST *)malloc(sizeof(struct LIST));
  head->value = S[0];
  prev = head;

  for (i = 1; i < len; i++) {
    list = (struct LIST *)malloc(sizeof(struct LIST));
    list->next = NULL;
    list->prev = prev;
    list->value = S[i];
    prev->next = list;
    prev = list;
  }

  result = 0;

  do {
    has_changed = 0;
    list = head;
    while (list != NULL && list->next != NULL) {
      if (list->value != list->next->value) {
        has_changed = 1;
        result += 2;
        if (list->prev == NULL && list->next->next == NULL) {
          printf("%d\n", result);
          return 0;
        } else if (list->prev == NULL) {
          list->next->next->prev = NULL;
          head = list->next->next;
          list = head;
        } else if (list->next->next == NULL) {
          list->prev->next = NULL;
          list = NULL;
        } else {
          list->prev->next = list->next->next;
          list->next->next->prev = list->prev;
          list = list->next->next;
        }
      } else {
        list = list->next;
      }
    }
  } while (has_changed == 1);

  printf("%d\n", result);

  return 0;
}
