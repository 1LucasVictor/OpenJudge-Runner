#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUMBER '0'
#define MAXOP 100

struct Node{
  double data;
  struct Node *next;
};

typedef struct Node Node;


Node *create_node(double new_data){
  Node *new_node = (Node *) malloc(sizeof(Node));
  if (!new_node){
    fprintf(stderr, "could not allocate a node. \n");
    exit(1);
  }
  new_node->data = new_data;
  new_node->next = NULL;
  return new_node;
}


void push(Node **head, double new_data){
  Node *new_node = create_node(new_data);
  new_node->next = *head;
  *head = new_node;
}


double pop(Node **head){
  Node *temp = *head;
  *head = (*head)->next;
  return temp->data;
  free(temp);
}


void clear_list(Node *head){
  while(head){
    Node *target = head;
    head = head->next;
    free(target);
  }
}


#define BUFSIZE  100

char buf[BUFSIZE];
int bufp = 0;

int mygetch(void){
  return (bufp > 0) ? buf[--bufp] : getchar();
}


void myungetch(int c){
  if (bufp >= BUFSIZE)
    printf("ungetch: too many cahracters\n");
  else
    buf[bufp++] = c;
}


int mygetop(char *s){
  char i, c;
  while((s[0] = c = mygetch()) == ' ' || c == '\t')
    ;
  s[1] = '\0';
  if (!isdigit(c) && c != '.')
    return c;
  i = 0;
  if (isdigit(c))
    while (isdigit(s[++i] = c = mygetch()))
      ;
  if (c == '.')
    while (isdigit(s[++i] = c = mygetch()))
      ;
  s[i] = '\0';
  if (c != EOF)
    myungetch(c);
  return NUMBER;
}

/*
int mygetop(char *s){
  char c;

  if (isdigit(c = s[0])) {
    return NUMBER;
  }
  else if (c == '-' && isdigit(s[1])){
    return NUMBER;
  }
  else
    return c;
}
*/



int main(){

  Node *head = NULL;
  int type;
  double op;
  char s[MAXOP];

  while((type = mygetop(s)) != EOF){
    switch(type){
    case NUMBER:
      push(&head, atof(s));
      break;
    case '+':
      push(&head, pop(&head) + pop(&head));
      break;
    case '*':
      push(&head, pop(&head) * pop(&head));
      break;
    case '-':
      op = pop(&head);
      push(&head, pop(&head) - op);
      break;
    case '\n':
      printf("%.8g\n", pop(&head));
      clear_list(head);
      break;
    default:
      printf("error: unknown command %c\n", type);
      break;
    }
  }
  return 0;
}



