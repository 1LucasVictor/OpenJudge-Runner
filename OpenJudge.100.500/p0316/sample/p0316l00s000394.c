#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    int k;
    int l;
    int r;
} Tree;
 
void insert(int, int);
void chu(int);
void sen(int);
Tree t[500001];
int main()
{
    char s[8];
    int m;
    int num;
    int i;
 
    scanf("%d", &m);
 
    int count=0;
    for(i=0; i<m; i++){
        scanf("%s", &s);
        if(s[0]=='i'){ 
          scanf("%d", &num); 
          insert(count, num); 
          count++; 
        }
        if(s[0]=='p'){
          if(count>0) chu(0);
            printf("\n");
            if(count>0) sen(0);
            printf("\n");
        }
    }
     
    return 0;
 
}
 
void chu(int p){
    if(t[p].l>=0) chu( t[p].l);
    printf(" %d", t[p].k);
    if(t[p].r>=0) chu( t[p].r);
}
 
void sen(int p){
    printf(" %d", t[p].k);
    if(t[p].l>=0) sen(t[p].l);
    if(t[p].r>=0) sen(t[p].r);
}
 
void insert(int count, int z){
    int x=0, y;
    if(count<1) x=-1;
 
    t[count].k = z;
    t[count].l = -1;
    t[count].r = -1;
 
    while(x>=0){
        y = x; 
        if(z < t[x].k)x = t[x].l; 
        else x = t[x].r; 
    }
 
    if(count<1){}
    else if(z < t[y].k)t[y].l = count; 
    else t[y].r = count; 
    
}