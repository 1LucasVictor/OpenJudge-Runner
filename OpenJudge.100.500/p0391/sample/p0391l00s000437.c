#include <stdio.h>
#include <string.h>
//prototyoe
int main(void);

int main(void){
    char str[1001];
    char judge_str[1001];
    char order[8];
    int  q;
    int  count = 0;
    char PRINT[]   = "print";
    char REVERSE[] = "reverse";
    char REPLACE[] = "replace";

    scanf("%s", str);
    scanf("%d", &q);


    while (count < q) {
      int a, b;
      char change[1000];

      scanf("%s", order);

      if(strcmp(order, PRINT) == 0){
        scanf("%d %d", &a, &b);

        for (int i = a; i <= b; i++) {
          printf("%c", str[i]);
        }
        printf("\n");
      }
      else if(strcmp(order, REVERSE) == 0){
        scanf("%d %d", &a, &b);

        memcpy(judge_str, str, 1001);
        int j = b;
        for (int i = a; i <= b; i++) {
          judge_str[j] = str[i];
          j--;
        }
        memcpy(str, judge_str, 1001);
      }
      else if(strcmp(order, REPLACE) == 0){
        scanf("%d %d %s", &a, &b, change);

        memcpy(judge_str, str, 1001);
        int j = 0;
        for (int i = a; i <= b; i++) {
          judge_str[i] = change[j];
          j++;
        }
        memcpy(str, judge_str, 1001);
      }
      count++;
    }

    return 0;
}

