#include <stdio.h>
#include <stdlib.h>

struct Node{
    int key,parent,left,right;
};

void pre(struct Node *T,int h){
    if(h==-1) return;
    printf(" %d",T[h].key);
    pre(T,T[h].left);
    pre(T,T[h].right);
}
void in(struct Node *T,int h){
    if(h==-1) return;
    in(T,T[h].left);
    printf(" %d",T[h].key);
    in(T,T[h].right);
}

int main(void){
    int m,n,i,h=-1;
    char command[10];
    scanf("%d",&m);
    struct Node *T=malloc(sizeof(struct Node)*m);
    for(i=0;i<m;i++){
        T[i].parent=-1;
        T[i].left=T[i].right=-1;
    }
    for(i=0;i<m;i++){
        scanf("%s",command);
        if(command[0]=='i'){
            int x=h,y=-1,z;
            scanf("%d",&z);
            T[i].key=z;
            while(x!=-1){
                y=x;
                if(z<T[x].key) x=T[x].left;
                else x=T[x].right;
            }
            T[i].parent=y;
            if(y==-1) h=i;
            else if(z<T[y].key) T[y].left=i;
            else T[y].right=i;
        }
        else if(command[0]=='f'){
            int x=h,k;
            scanf("%d",&k);
            while(x!=-1){
                if(k==T[x].key) break;
                else if(k<T[x].key) x=T[x].left;
                else x=T[x].right;
            }
            if(x!=-1) printf("yes\n");
            else printf("no\n");
        }
        else if(command[0]=='p'){
            in(T,h);
            printf("\n");
            pre(T,h);
            printf("\n");
        }
    }
    
    return 0;
}

