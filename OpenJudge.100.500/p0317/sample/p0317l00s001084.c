#include <stdio.h>
 
typedef struct{
    int k, l, r;
}node;
 
node nodes[500001];
 
void insert(int index, int z)
{
    int x = 0, y;
 
    nodes[index].k = z;
    nodes[index].l = -1;
    nodes[index].r = -1;
 
    if(index == 0)
        return ;
 
    while(x >= 0){
        y = x;
        if(z < nodes[x].k){
            x = nodes[x].l;
        }else{
            x = nodes[x].r;
        }
    }
 
    if(z < nodes[y].k)
        nodes[y].l = index;
    else
        nodes[y].r = index;
}
 
void find(int z)
{
    int x = 0;
    while(x >= 0 && nodes[x].k != z){
        if(z < nodes[x].k){
            x = nodes[x].l;
        }else{
            x = nodes[x].r;
        }
    }
 
    if(nodes[x].k == z)
        printf("yes\n");
    else
        printf("no\n");
}
 
void pre(int id)
{
    if(id == -1)
        return ;
    printf(" %d", nodes[id].k);
    pre(nodes[id].l);
    pre(nodes[id].r);
}
 
void ino(int id)
{
    if(id == -1)
        return ;
    ino(nodes[id].l);
    printf(" %d", nodes[id].k);
    ino(nodes[id].r);
}
 
int main(void)
{
    int i, n;
    int index = 0, z;
    char buf[16];
    scanf("%d", &n);
 
    for(i = 0; i < n; i++){
        scanf("%s", buf);
        if(buf[0] == 'i'){
            scanf("%d", &z);
            insert(index++, z);
        }else if(buf[0] == 'p'){
            if(index > 0){
                ino(0);
                printf("\n");
                pre(0);
                printf("\n");
            }
        }else if(buf[0] == 'f'){
            scanf("%d", &z);
            find(z);
        }
    }
 
    return 0;
}

