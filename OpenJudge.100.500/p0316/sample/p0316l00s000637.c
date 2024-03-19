#include <stdio.h>
#include <stdlib.h> 
typedef struct{
    int a,b,c;
}Node;
void insert(int, int);
void inParse(int);
void preParse(int);
Node A[500001];
int main(void)
{
    char s[8];
    int m;
    int num,count=0;
    int i;
  
    scanf("%d", &m);  
    for(i=0; i<m; i++){
        scanf("%s", &s);
        if(s[0]=='i'){ 
          scanf("%d", &num); 
          insert(count, num); 
          count++; 
        }
        if(s[0]=='p'){
          if(count>0) inParse(0);
            printf("\n");
            if(count>0) preParse(0);
            printf("\n");
        }
    }  
    return 0;  
}
  
void inParse(int p){
    if(A[p].b>=0) inParse( A[p].b);
    printf(" %d", A[p].a);
    if(A[p].c>=0) inParse( A[p].c);
}
  
void preParse(int p){
    printf(" %d", A[p].a);
    if(A[p].b>=0) preParse(A[p].b);
    if(A[p].c>=0) preParse(A[p].c);
}
  
void insert(int count, int z){
    int x=0, y;
    if(count<1) x=-1;
  
    A[count].a = z;
    A[count].b = -1;
    A[count].c = -1;
  
    while(x>=0){
        y = x; 
        if(z < A[x].a)x = A[x].b; 
        else x = A[x].c; 
    }
    if(count<1){}
    else if(z < A[y].a)A[y].b = count; 
    else A[y].c = count; 
}

