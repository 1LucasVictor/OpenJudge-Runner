#include<stdio.h>
#include<stdlib.h>
#define MAX 110

typedef struct cell{
 int id;
 struct cell *next;
}cell;



cell* makecell(int x){
cell *new=malloc(sizeof(cell));

new->id=x;
new->next=NULL;

return new;
}

void enque(int QUE[],int x,int *left,int *right){

QUE[*right]=x;
(*right)++;

return;
}


int deque(int QUE[],int *left,int *right){


(*left)++;

return QUE[(*left)];
}






void BFS(cell *S[],int s,int n){
int F[MAX];
int i,u,v;
int QUE[MAX];
int left=-1;
int right=0;
cell *p;

for(i=1;i<=n;i++)F[i]=-1;


F[s]=0;
enque(QUE,s,&left,&right);

while(right-left!=1){
 v=deque(QUE,&left,&right);
 p=S[v];
 
 while(p!=NULL){
  if(F[p->id]==-1){
    F[p->id]=F[v]+1;
    enque(QUE,p->id,&left,&right);
  }
  p=p->next;
 }

}



for(i=1;i<=n;i++){
 printf("%d %d\n",i,F[i]);
}

return;
}


int main(){
int n,i,j;
int x,y,z;
cell *S[MAX];
cell **p;
cell *new;


scanf("%d",&n);

for(i=0;i<n;i++){
 scanf("%d %d",&x,&y);

 if(y==0)S[x]=NULL;
 else{p=&S[x];
  for(j=0;j<y;j++){
   scanf("%d",&z);
   new=makecell(z);
   (*p)=new;
   p=&((*p)->next);
  }
 }
}




BFS(S,1,n);





return 0;
}
