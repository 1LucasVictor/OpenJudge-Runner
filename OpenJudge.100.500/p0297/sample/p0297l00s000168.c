#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct process{
  char *name;
  long time;
  struct process *next;
}Process;

Process *push_back(Process *begin, long time, char *name) {
  Process *p = (Process*)malloc(sizeof(Process));
  p->name = (char*)malloc(sizeof(char)*(strlen(name)+1));
  strcpy(p->name,name);
  p->time = time;
  p->next = NULL;
  if(begin == NULL) return p;
  Process *p_before = begin;
  while(p_before->next != NULL) p_before = p_before->next;
  p_before->next = p;
  return begin;
}

Process *remove_process(Process *begin, char *name){
  Process *p,*temp;
  if(strcmp(begin->name,name) == 0) {
    p = begin->next;
    free(begin);
    return p;
  }
  p = begin;
  while(strcmp(p->next->name,name) != 0) p = p->next;
  temp = p->next;
  p->next = p->next->next;
  free(temp);
  return begin;
}

int main() {
  long n,i,time;
  int q;
  char name[11];
  scanf("%ld %d", &n, &q);
  Process *begin = NULL;
  Process *p;
  Process *finished = NULL;

  for(i = 0; i < n; i++) {
    scanf("%s %ld", name, &time);
    begin = push_back(begin, time, name);
  }
  p = begin;
  time = 0;
  push_back(finished, time + p->time, p->name);

  
  
  while(begin != NULL) {
    time += q;
    p->time -= q;
    if(p->time <= 0) {
      time += p->time;
      finished = push_back(finished, time, p->name);
      strcpy(name, p->name);
      if(p->next == NULL) {
	p = begin;
      }else{
	p = p->next;
      }
      begin = remove_process(begin, name);
    }else{
      if(p->next == NULL) {
	p = begin;
      }else{
	p = p->next;
      }
    }
  }
  
  p = finished;
  while(p != NULL) {
    printf("%s %ld\n", p->name, p->time);
    p = p->next;
  }
  
  
  return 0;
}