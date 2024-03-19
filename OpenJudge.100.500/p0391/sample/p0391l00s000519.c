#include <stdio.h>
#include <string.h>

int print(char *s, int a, int b){
  for(int i = a; i <= b; i++){
	printf("%c", s[i]);
  }
  printf("\n");
  return 0;
}

char *reverse(char *str, int a, int b){
    char temp[1001];
    int j = 0;
    strcpy(temp, str);

    for(int i = a; i <= b; i++){
        temp[j] = str[i];
        j++;
    }

    j = 0;
    for(int i = b; i >= a; i--){
        str[i] = temp[j];
        j++;
    }

    return str;
}

char *replace(char *s, int a, int b, char *p){
  for(int i = a; i <= b; i++){
	s[i] = *p;
	p++;
  }
  return s;
}

int main(){
  char str[1001];
  int q, a, b;
  char cmd[10];
  char p[1001];

  scanf("%s", str);
  scanf("%d", &q);
  for(int i = 0; i < q; i++){
	scanf("%s", cmd);
	if(!strcmp(cmd,"print")){
	  scanf("%d", &a);
	  scanf("%d", &b);
	  print(str, a, b);
	}else if(!strcmp(cmd,"reverse")){
	  scanf("%d", &a);
	  scanf("%d", &b);
	  reverse(str, a, b);
	}else if(!strcmp(cmd,"replace")){
	  scanf("%d", &a);
	  scanf("%d", &b);
	  scanf("%s", p);
	  replace(str, a, b, p);
	}else{
	  printf("ERROR\n");
	}
  }

  return 0;
}
