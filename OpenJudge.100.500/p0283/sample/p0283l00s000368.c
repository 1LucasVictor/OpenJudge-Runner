#include<stdio.h>

#define M 8
#define Clear -1
#define GOver 1

void Setup(int);

int Queen[M][M];
int RJud[M];
int CJud[M];
int Lobjud[2*M-1];
int Rdbjud[2*M-1];

int main(){
  int loop;
  int i,j;
  int Ver,Side;

  scanf("%d",&loop);

  for(i=0;i<M;i++){
    
    for(j=0;j<M;j++){
      Queen[i][j]=0;
    }
  }

  for(i=0;i<M;i++){
    RJud[i]=Clear;
    CJud[i]=Clear;
  }

  for(i=0;i<2*M-1;i++){
    Lobjud[i]=Clear;
    Rdbjud[i]=Clear;
  }
  
  for(i=0;i<loop;i++){
    scanf("%d %d",&Ver,&Side);
      Queen[Ver][Side]=1;
  }

  Setup(0);
  
  return 0;
}

void Setup(int Qnum){
  int i,j;
  
  if(Qnum==M){

    for(i=0;i<M;i++){
      for(j=0;j<M;j++){
	if(Queen[i][j]==1){
	  if(RJud[i]!=j){
	    return;
	  }
	}
      }
    }
    
    for(i=0;i<M;i++){
      for(j=0;j<M;j++){
	
	if(RJud[i]==j){
	  printf("Q");
	}
	
	else{
	  printf(".");
	}
      }
      printf("\n");
    }
    
    return;
  }

  else{
    
    for(i=0;i<M;i++){
      if((CJud[i]==GOver) || (Lobjud[i+Qnum]==GOver) || (Rdbjud[Qnum-i+M-1]==GOver)){
	continue;
      }

      else{
	RJud[Qnum]=i;
	CJud[i]=GOver;
	Lobjud[Qnum+i]=GOver;
	Rdbjud[Qnum-i+M-1]=GOver;

	Setup(Qnum+1);

	CJud[i]=Clear;
	Lobjud[i+Qnum]=Clear;
	Rdbjud[Qnum-i+M-1]=Clear;
      }
    }
  }
  
}

