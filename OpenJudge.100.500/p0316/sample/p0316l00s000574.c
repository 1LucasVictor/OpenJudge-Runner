#include<stdio.h>
#include<stdlib.h>


typedef struct cell{
 int id;
 struct cell *right;
 struct cell *left;
}cell;


void preorder(cell *root){
cell *p=root;
printf(" %d",p->id);

if(p->left!=NULL){preorder(p->left);}
if(p->right!=NULL){preorder(p->right);}

return;
}

void inorder(cell *root){
cell *p=root;
if(p->left!=NULL){inorder(p->left);}
printf(" %d",p->id);
if(p->right!=NULL){inorder(p->right);}

return;
}



cell* makecell(int x){
cell *new=malloc(sizeof(cell));
new->id=x;
new->left=NULL;
new->right=NULL;

return new;
}

void insert(cell **p,cell *new){

cell *temp;

if((*p)==NULL){(*p)=new;return;}
else{

 if( (*p)->left==NULL && (*p)->right==NULL ){/*子なし*/
   if((*p)->id < new->id){
     (*p)->right=new;return;}
   else{
     (*p)->left=new;return;}
  }
  else if((*p)->left==NULL&&(*p)->right!=NULL){/*左なし右あり*/
   if( (*p)->id > new->id ){
     (*p)->left=new;return;}
   else{insert(&((*p)->right),new);}
  }
  else if((*p)->left!=NULL&&(*p)->right==NULL){/*左あり右なし*/
   if( (*p)->id < new->id){
     (*p)->right=new;return;}
   else{insert(&((*p)->left),new);}
  }
  else{/*どっちも子あり*/
   if((*p)->id < new->id){
     insert(&((*p)->right),new);
   }
   else{insert(&((*p)->left),new);}
 }
}

return;
}
     










int main(){
int n,i,x;
char com[7];
cell *root=NULL;
cell *new;

scanf("%d",&n);

for(i=0;i<n;i++){
 scanf("%s",com);

 switch(com[0]){
  case 'i':scanf("%d",&x);
           new=makecell(x);
           insert(&root,new);
           break;

  case 'p':inorder(root);
           printf("\n");
           preorder(root);
           printf("\n");
           break;


 }/*switch end*/

}/*for end*/

return 0;
}
