#include <stdio.h>

#define S_MAX       201

char data[100][S_MAX+2] = {{}};
int adrs[100][S_MAX+2] = {{}};

void show(int n);

void shuffle(int d_idx, int n)
{
    int i, idx;
    int front_head, back_head;
    int *front_tail, *back_tail;
    int *head = &adrs[d_idx][0], *tail = &adrs[d_idx][S_MAX+1];

    front_head = adrs[d_idx][0];
    back_tail = &adrs[d_idx][adrs[d_idx][S_MAX+1]];

    i = 0;
    idx = front_head;
    while(i < n-1) {
        idx = adrs[d_idx][idx];
        i++;
    }
    *tail = idx;
    front_tail = &adrs[d_idx][idx];
    back_head = adrs[d_idx][idx];

    *head = back_head;
    *back_tail = front_head;
    *front_tail = S_MAX+1;

    return;
}

int read(int d_idx)
{
    int i;
    int n, h;
    int flag = 0;
    int len = 0;
    char c;
//    printf("in read() : d_idx=%d\n", d_idx);
//printf("reeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeed\n");

    while(1) {
        scanf("%c", &c);

        if(c == '-') {
            flag = 1;
//            printf("breeeeeeeeeeek!!!\n");
            break;
        }

        if(c == '\n') {
            adrs[d_idx][len] = S_MAX+1;
            adrs[d_idx][S_MAX+1] = len;
            break;
        }

        data[d_idx][len+1] = c;
        adrs[d_idx][len] = len + 1;
        len++;
    }
    if(flag == 1) {
//        printf("retuuuuuuuuuuunnnnnnnnn!!!\n");
        return 0;
    }
//    printf("%s", data[d_idx]);

    scanf("%d", &n);

    for(i=0;i<n;i++) {
        scanf("%d", &h);
        shuffle(d_idx,h);
    }
    scanf("%*c");
    show(d_idx);

    return 1;
}

void show(int n)
{
    int i;

//    for(i=0;i<n;i+=2) {
//        int idx = adrs[i][0];
        int idx = adrs[n][0];
        while(1) {
//            printf("%c", data[i][idx]);
            printf("%c", data[n][idx]);
//            idx = adrs[i][idx];
            idx = adrs[n][idx];
            if(idx == S_MAX+1) break;
        }
//        printf(" %d", i);
        putchar('\n');
//    }
    return;
}

int main(void)
{
    int idx = 0;

    while(read(idx++) != 0);
//    printf("idx=%d\n", idx-1);

//    show(idx-1);

    return 0;
}