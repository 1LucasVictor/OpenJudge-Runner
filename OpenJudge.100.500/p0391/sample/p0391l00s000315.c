#include<stdio.h>
#include<string.h>

void print(char *str, int p, int q){
  char *ptr = str + p;
  for(int i=p;i<=q;i++){
    printf("%c", *ptr++);
  }
  printf("\n");
}

void reverse(char *str, int p, int q){
  char tmp[q-p+1], *ptmp=tmp+q-p, *ptr = str + p;
  for(int i=p;i<=q;i++){
    strncpy(tmp, ptr, q-p+1);
  }
  for(int j=0;j<=q-p;j++){
    str[p+j] = *ptmp--;
  }
}

void replace(char *str, int p, int q, char *tmp){
  char *ptr=str+p, *ptmp=tmp;
  for(int i=p;i<=q;i++){
    *ptr++ = *ptmp++;
  }
}


int main(void){
  int times, p, q;
  char tmp[1000], str[1000];

  scanf("%s", str);
  scanf("%d", &times);
  for(int i=0;i<times;i++){
    scanf("%s", tmp);
    if(strcmp(tmp, "print") == 0){
      scanf("%d %d", &p, &q);
      print(str, p, q);

    }else if(strcmp(tmp, "reverse") == 0){
      scanf("%d %d", &p, &q);
      reverse(str, p, q);

    }else{
      scanf("%d %d %s", &p, &q, tmp);
      replace(str, p, q, tmp);
    }
  }
  return 0;
}

