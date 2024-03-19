#include <stdio.h>
#define MAX 100
#define number 2000

struct graph{
   int next;
   int length;
};  

int nord[MAX];
int start = 0;
int memo[MAX] = {0};
struct graph LIST[MAX][50];

int searchmin(int n, int *C) {
   int i, j;
   for (i = 0; i < n; i++) {
	  for (j = 0; j < memo[i]; j++) {
		 if (LIST[i][j].length == *C && (nord[i] == 0 && nord[LIST[i][j].next] == 1 || nord[LIST[i][j].next] == 0 && nord[i] == 1)) {
			nord[i] = 1;
			nord[LIST[i][j].next] = 1;
			return LIST[i][j].length;
		 }
	  }
   }
   *C = *C + 1;
   return searchmin(n, C);
}

int main() {
   int n, ans = 0;
   int check = 0, cost;
   int i, j, d;

   scanf("%d", &n);    //n???????????°??????????????°???????????????

   for (i = 0; i < n; ++i) {
      nord[i] = 0;
      for (j = 0; j < n; ++j) {
		 scanf("%d", &d);
		 if (j > i && d != -1) {
			LIST[i][memo[i]].next = j;
			LIST[i][memo[i]].length = d;
			++memo[i];
		 }
	  }
   }

   nord[0] = 1;
   cost = 1;
   while (check == 0) {
	  ans += searchmin(n, &cost);
	  check = 1;
	  for (i = 0; i < n; ++i) {
		 check = check * nord[i];
		 if (nord[i] == 0)  break;
	  }
   }
   printf("%d\n", ans);
   return 0;
}