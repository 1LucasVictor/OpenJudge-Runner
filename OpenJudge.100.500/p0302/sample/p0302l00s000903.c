#include<stdio.h>
#include<string.h>

#define M 100000000
#define Long 14

char H[M][Long]; /*Hash Table*/
char str[Long]; //文字列

int getChar(char);//文字を数字
int getkey(void);//
int find(void);//検索
void insert(void);//代入

int main(){
  int i,n,h;
  char command[9];//命令

  for(i = 0;i < M;i++){
    H[i][0] = '\0';
  }
  scanf("%d",&n);//命令回数の入力

  for(i = 0;i < n;i++){//命令と文字列の入力
    scanf("%s %s",command,str);

    if(command[0] == 'i'){
      insert();
    }
    else{
      if(find()){
	printf("yes\n");
      }
      else{
	printf("no\n");
      }
    }
  }
  return 0;
}
int getChar(char ch){//各文字の数字を返す
  if(ch == 'A')return 1;
  else if(ch == 'C')return 2;
  else if(ch == 'G')return 3;
  else if(ch == 'T')return 4;
}

/*convert a string into an integer value*/
int getkey(){//文字列の合計数を返す
  int sum = 0, p = 1, i;
  for(i = 0;i < strlen(str);i++){
    sum += p*(getChar(str[i]));
    p *= 5;
  }
  return sum;
}


int find(){//合計数番目の配列に 1 があるかないか.
  int key = getkey();
  if(H[key][0]){//ある場合その文字列が存在する.
    return 1;
  }
  return 0;
}

void insert(){//合計数番目の配列に 1 を代入して存在を示す
  H[getkey()][0] = 1;
}