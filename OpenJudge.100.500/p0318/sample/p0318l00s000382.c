#include <stdio.h>

int key[500001];
int parent[500001];
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

int find(int r, int v){
    if(r == -1)
        return -1;
    if(v < key[r])
        return find(left[r], v);
    else if(v == key[r])
        return r;
    else
        return find(right[r], v);
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
    parent[head] = y;
    left[head] = -1;
    right[head] = -1;
    head++;
}

void delete(int i){
    int p = parent[i];
    if(left[i] == -1 && right[i] == -1){
        if(key[i] < key[p])
            left[p] = -1;
        else
            right[p] = -1;
    } else if(left[i] == -1){
        if(key[i] < key[p])
            left[p] = right[i];
        else
            right[p] = right[i];
        parent[right[i]] = p;
    } else if(right[i] == -1){
        if(key[i] < key[p])
            left[p] = left[i];
        else
            right[p] = left[i];
        parent[left[i]] = p;
    } else {
        key[i] = key[right[i]];
        delete(right[i]);
    }
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
        } else if(cmd[0] == 'd'){
            int z;
            scanf("%d", &z);
            delete(find(root, z));
        } else {
            printin(root);
            puts("");
            printpre(root);
            puts("");
        }
    }
}

