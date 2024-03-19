#include <stdio.h>

int key[500001];
int left[500001];
int right[500001];
int root;
int head;

void printpre(int i){
    if(i == -1) return;
    printf(" %d", key[i]);
    printpre(left[i]);
    printpre(right[i]);
}

void printin(int i){
    if(i == -1) return;
    printin(left[i]);
    printf(" %d", key[i]);
    printin(right[i]);
}

void insert(int z){
    int y = -1;
    int x = root;
    while(x != -1){
        y = x;
        if(z < key[x])
            x = left[x];
        else
            x = right[x];
    }

    if(y == -1) {
        root = head;
    } else if(z < key[y]) {
        left[y] = head;
    } else {
        right[y] = head;
    }
    key[head] = z;
    left[head] = -1;
    right[head] = -1;
    head++;
}

int main(void){
    int n;
    scanf("%d", &n);
    root = -1;
    while(n--){
        char cmd[8];
        scanf("%s", cmd);
        if(cmd[0] == 'i'){
            int z;
            scanf("%d", &z);
            insert(z);
        } else {
            printin(root);
            puts("");
            printpre(root);
            puts("");
        }
    }
}

