#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int check;


//変数として文字列をとり、その文字列が辞書のどこに入るのかを、配列番号で返す。ぴったり一致するものがあった場合、checkを1にする。
int v_search(char *x,char **dic,int a,int b){
  check=0;
  if(a<=b){
    int c;
    c=(a+b)/2;
    if(strcmp(x,dic[c])==0){
      check=1;
      return c+1;
    }
    else if(strcmp(x,dic[c]) <0) return v_search(x,dic,c+1,b);
    else return v_search(x,dic,a,c-1);
  }
  else if(check==0 && a-1>=0){
    if(strcmp(x,dic[a])*strcmp(x,dic[a-1]) <0) return a;
    else return b;
  }//一致する番号がなかった場合。aかbが格納するべき場所になる。
  else if(check==0 && a-1<0) return a;
}

int main(){
  int n;
  char inst[8];
  char x[13];
  char **dic;
  int i,j;
  int y;
  int size=0;
  
  scanf("%d",&n);
  dic=malloc(n*sizeof(char *));
  for(i=0;i<n;i++) dic[i]=malloc(13*sizeof(char));
  

  for(i=0;i<n;i++){
    scanf("%*[\n ]%s",inst);
    if(inst[0]=='i'){
      scanf("%*[ ]%s",x);
      y=v_search(x,dic,0,size-1);
      for(j=size;j>=y+1;j--) strcpy(dic[j],dic[j-1]);
      strcpy(dic[y],x);
      size+=1;
    }
    
    else if(inst[0]=='f'){
      scanf("%*[ ]%s",x);
      v_search(x,dic,0,size-1);
      if(check==0) printf("no\n");
      else printf("yes\n");
    }
  }
  return 0;
}



//strcpyは第一因数がコピー先
