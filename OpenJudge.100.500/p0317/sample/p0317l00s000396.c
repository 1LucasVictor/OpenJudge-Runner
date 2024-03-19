#include <stdio.h>
#define N 500001

int key[N];
int left[N];
int right[N];
int root;
int head;

void printpre(int x){
    if(x == -1) return;
    printf(" %d", key[x]);
    printpre(left[x]);
    printpre(right[x]);
}

void printin(int x){
    if(x == -1) return;
    printin(left[x]);
    printf(" %d", key[x]);
    printin(right[x]);
}

int find(int x, int y){
    if(x == -1)
        return -1;
    if(y < key[x])
        return find(left[x], y);
    else if(y == key[x])
        return x;
    else
        return find(right[x], y);
}

void insert(int x){
    int y = -1;
    int z = root;
    while(z != -1){
        y = z;
        if(x < key[z])
            z = left[z];
        else
            z = right[z];
    }

    if(y == -1) {
        root = head;
    } else if(x < key[y]) {
        left[y] = head;
    } else {
        right[y] = head;
    }
    key[head] = x;
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
        } else if(cmd[0] == 'f') {
            int z;
            scanf("%d", &z);
            printf("%s\n", find(root, z) == -1 ? "no" : "yes");
        } else {
            printin(root);
            puts("");
            printpre(root);
            puts("");
        }
    }
}


