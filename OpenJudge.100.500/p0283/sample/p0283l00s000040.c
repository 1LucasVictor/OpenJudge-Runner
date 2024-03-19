#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUF_SIZE 10

int get_int(void) {
  int num;
#ifdef BUF_SIZE
  char line[BUF_SIZE];
  if(!fgets(line, BUF_SIZE, stdin)) return 0;
  sscanf(line, "%d", &num);
#else
#error
#endif
  return num;
}

int get_int2(int *a1, int *a2) {
#ifdef BUF_SIZE
  char line[BUF_SIZE];
  if(!fgets(line, BUF_SIZE, stdin)) return -1;
  sscanf(line, "%d %d", a1, a2);
#else
#error
#endif
  return 0;
}

#define TABLE_SIZE 8
#define min(a,b) ((a) > (b) ? (b) : (a))

struct point2d {
    int x;
    int y;
};

static char checked[TABLE_SIZE][TABLE_SIZE] = {{0}};
void update_checked(int row, int col, int size) {
    int i;
    // fill
    for(i = 0; i < TABLE_SIZE; i++) {
        checked[row][i] = 1;
        checked[i][col] = 1;
    }
    int sum = row+col;

    // "/"
    for(i = 0; i <= min(TABLE_SIZE-1, sum); i++) {
        if(sum - i >= TABLE_SIZE) continue;
        checked[i][sum-i] = checked[sum-i][i] = 1;
    }
    // "\"
    for(i = 0; i < TABLE_SIZE; i++) {
        if(row+i < TABLE_SIZE && col+i < TABLE_SIZE) {
            checked[row+i][col+i] = 1;
        }
        if(row-i >= 0 && col-i >= 0) {
            checked[row-i][col-i] = 1;
        }
    }
    checked[row][col] = 0;
    return;
}

char used[100];
int p[100];
void perm(int *arr, int pos, int size, int* in, int* ans) {
    int i;
    if(pos == size) {
        memset(checked, 0, TABLE_SIZE*TABLE_SIZE);
        int flag = 1;
        for(i = 0; i < size; i++) {
            int col = arr[p[i]];
            if(in[i] != -1 && in[i] != col) { flag = 0; break; }
            if(checked[i][col]) {
                flag = 0;
                break;
            }
            update_checked(i, col, size);
        }
        if(flag) {
            for(i = 0; i < size; i++) {
                ans[i] = arr[p[i]];
            }
        }
        return;
    }

    for(i = 0; i < size; i++) {
        if(used[i]) continue;
        used[i] = 1;
        p[pos] = i;
        perm(arr, pos+1, size, in, ans);
        used[i] = 0;
    }
    return;
}

int main(void) {
    int num = get_int();
    int dep[TABLE_SIZE];
    int i, j;
    for(i = 0; i < TABLE_SIZE; i++) dep[i] = -1;
    for(i = 0; i < num; i++) {
        int row, col;
        get_int2(&row, &col);
        dep[row] = col;
    }

    int col_idx[TABLE_SIZE] = {0,1,2,3,4,5,6,7};
    int ans[8] = {0}; // ans[col_idx] = row_idx;
    // find ans;
    perm(col_idx, 0, TABLE_SIZE, dep, ans);
    for(i = 0; i < TABLE_SIZE; i++) {
        int col = ans[i];
        for(j = 0; j < TABLE_SIZE; j++) {
            putchar(j == col ? 'Q' : '.');
        }
        putchar('\n');
    }

    return 0;
}
