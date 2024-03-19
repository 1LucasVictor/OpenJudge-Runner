#include<stdio.h>

#define N 25
#define Gard -1

typedef struct{
  int parent;
  int leftch;
  int rightch;
}Tree;

void Pre(int );
void In(int  );
void Pos(int  );

Tree PreTwot[N];
Tree InTwot[N];
Tree PostTwot[N];

int main(){
  int loop,freq,lchild,rchild;
  int i;
  int checker1=0;
  int checker2=0;
  int checker3=0;

  scanf("%d",&loop);
  for(i=0;i<loop;i++){
    PreTwot[i].parent=Gard;
    InTwot[i].parent=Gard;
    PostTwot[i].parent=Gard;
  }

  for(i=0;i<loop;i++){
    scanf("%d %d %d",&freq,&lchild,&rchild);
    PreTwot[freq].leftch=lchild;
    PreTwot[freq].rightch=rchild;

    if(lchild!=Gard){
      PreTwot[lchild].parent=freq;
    }

    if(rchild!=Gard){
      PreTwot[rchild].parent=freq;
    }
    
    InTwot[i]=PreTwot[i];
    PostTwot[i]=PreTwot[i];
  }

  for(i=0;i<loop;i++){

    if(PreTwot[i].parent==Gard){
      checker1=i;
    }

    
    if(InTwot[i].parent==Gard){
      checker2=i;
    }
    
    if(PostTwot[i].parent==Gard){
      checker3=i;
    }
    
  }
  
  printf("Preorder\n");

  Pre(checker1);

  printf("\n");
 
  printf("Inorder\n");

  In(checker2);

  printf("\n");
  
  printf("Postorder\n");

  Pos(checker3);
  
  printf("\n");
  
  return 0;
}

void Pre(int judge){

  if(judge==Gard){
    return;
  }

  printf(" %d",judge);

  Pre(PreTwot[judge].leftch);

  Pre(PreTwot[judge].rightch);
 
}

void In(int judge){

  if(judge==Gard){
    return;
  }

  In(InTwot[judge].leftch);

  printf(" %d",judge);

  In(InTwot[judge].rightch);
}

void Pos(int judge){

  if(judge==Gard){
    return;
  }

  Pos(PostTwot[judge].leftch);

  Pos(PostTwot[judge].rightch);

  printf(" %d",judge);
}

