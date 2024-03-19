#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct dict{
  char str[16];
  struct dict *next;
}T_dict;
T_dict dic;
T_dict *head;
void insert(char *);
int find(char *);
void freed();

int main(){
  int n, i;
  char cmd[16], str[16];
  head = NULL;
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%s %s", cmd, str);
    if(!strcmp(cmd, "insert")){
      if(!find(str))
	insert(str);
    }
    else if(!strcmp(cmd, "find")){
      if(find(str))
	printf("yes\n");
      else
	printf("no\n");
    }
    else
      printf("no command\n");
  }
  //freed();
  return 0;
}

void insert(char *str){
  T_dict *ins;
  ins = (T_dict *)malloc(sizeof(T_dict));
  strcpy(ins->str, str);
  ins->next = head;
  head = ins;
}

int find(char *str){
  T_dict *fnd;
  for(fnd = head; fnd != NULL; fnd = fnd->next)
    if(!strcmp(str, fnd->str))
      return 1;
  return 0;
}

void freed(){
  T_dict *fnd;
  for(fnd = head; fnd != NULL; free(head), head = fnd, fnd = fnd->next)
    //printf("%s\n", fnd->str);
    ;
  //return;
}