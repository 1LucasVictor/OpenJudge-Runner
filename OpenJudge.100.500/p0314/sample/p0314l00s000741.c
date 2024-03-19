#include<stdio.h>

#define N 25
#define Gard -1

typedef struct{
  int parent;
  int leftch;
  int rightch;
}Tree;

Tree PreT[N];
Tree InT[N];
Tree PostT[N];

void Pre(int );
void In(int );
void Post(int );

int main(){
  int loop,freq,leftnum,rightnum;
  int i;
  int cheker1=0;
  int cheker2=0;
  int cheker3=0;

  scanf("%d",&loop);
  for(i=0;i<loop;i++){
    PreT[i].parent=Gard;
    InT[i].parent=Gard;
    PostT[i].parent=Gard;
  }

  for(i=0;i<loop;i++){
    scanf("%d %d %d",&freq,&leftnum,&rightnum);

    PreT[freq].leftch=leftnum;
    PreT[freq].rightch=rightnum;
    
    InT[freq].leftch=leftnum;
    InT[freq].rightch=rightnum;

    PostT[freq].leftch=leftnum;
    PostT[freq].rightch=rightnum;

    if(leftnum!=Gard){
      PreT[leftnum].parent=freq;
      InT[leftnum].parent=freq;
      PostT[leftnum].parent=freq;
    }

    if(rightnum!=Gard){
      PreT[rightnum].parent=freq;
      InT[rightnum].parent=freq;
      PostT[rightnum].parent=freq;
    }
  }

  for(i=0;i<loop;i++){

    if(PreT[i].parent==Gard){
      cheker1=i;
    }

    if(InT[i].parent==Gard){
      cheker2=i;
    }

    if(PostT[i].parent==Gard){
      cheker3=i;
    }
    
  }

  printf("Preorder\n");

  Pre(cheker1);

  printf("\n");

  printf("Inorder\n");

  In(cheker2);

  printf("\n");

  printf("Postorder\n");

  Post(cheker3);

  printf("\n");
  
  return 0;
}

void Pre(int judge){

  if(judge==Gard){
    return;
  }

  printf(" %d",judge);

  Pre(PreT[judge].leftch);

  Pre(PreT[judge].rightch);
  
}

void In(int judge){

  if(judge==Gard){
    return;
  }

  In(InT[judge].leftch);

  printf(" %d",judge);

  In(InT[judge].rightch);
   
}

void Post(int judge){

  if(judge==Gard){
    return;
  }

  Post(PostT[judge].leftch);

  Post(PostT[judge].rightch);

  printf(" %d",judge);
  
}

