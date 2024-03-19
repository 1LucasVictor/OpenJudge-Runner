#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define MAXVAL 100
#define MAXTIME 1000001

struct Node{
    int data;
    char name[11];
    struct Node * next;
    struct Node * before;
};

typedef struct Node Node;

Node * create_node(int new_data,char *new_name){
    Node * new_node = (Node *) malloc(sizeof(Node));
    if(!new_node){
        fprintf(stderr, "could not allocate a node.\n");
        exit(1);
    }
    new_node->data = new_data;
    strcpy(new_node->name, new_name);
    new_node->next = NULL;
    new_node->before = NULL;
    return new_node;
}

void push_front(Node ** front,Node ** rear, int new_data, char * new_name){
    Node * new_node = create_node(new_data, new_name);
    if(*front == NULL){
        *front = new_node;
        *rear = new_node;
        return;
    }
    (*front)->before = new_node;
    new_node->next = *front;
    *front = new_node;
}

Node * pop_back(Node ** pfront, Node ** prear){
    if(*prear == NULL) return NULL;
    Node * del_node = *prear;
    int ret_data =(*prear)->data;
    char ret_name[11];
    strcpy( ret_name, (*prear)->name);
    *prear = (*prear)->before;
    if(*prear == NULL){
        *pfront = NULL;
        *prear = NULL;
        free(del_node);
        return create_node(ret_data, ret_name);
    }
    (*prear)->next = NULL;
    free(del_node);
    return create_node(ret_data, ret_name);
}

void clear_list(Node * front){
    while(front){
        Node * target = front;
        front = front->next;
        free(target);
    }
}

/*void print_list(const Node * front){
    while(front){
        printf("| %d |-> ", front->data);
        front = front->next;
    }
    printf("NULL\n");
}*/

void print_queue(const Node * front){
    printf("front ");
    while(front){
        printf("| %d %s | ",front->data, front->name);
        front=front->next;
    }
    printf("rear\n");
}

void test(){
    size_t size;
    scanf("%zu", &size);
    Node * front = NULL;
    Node * rear = NULL;

    int data;
    char name[11];
    
    for(size_t i = 0; i < size; i++){
        scanf("%s %d", name, &data);

        push_front(&front, &rear, data, name);
    }
    print_queue(front);
    for(size_t i = 0; i < size; i++){
        //int data = pop_back(&front, &rear);
        //printf("pop(): %d\n", data);
    }
    clear_list(front);
    return;
}


int main(){
    int n, q;
    scanf("%d %d",&n,&q);

    Node * front = NULL;
    Node * rear = NULL;
    char name[11];
    int time;
    for(size_t i = 0; i < n; i++){
        scanf("%s %d", name, &time);
        create_node(time, name);
        push_front(&front, &rear, time, name);
    }
    int pos_q = q;
    int pos_t = 0;
    for(size_t t = 0; t < MAXTIME; ++t){
        if(pos_q != 0){
            pos_q--;
        }
        else{
            if(rear == NULL) break;
            if((rear->data) > q){
                Node * pos_node = pop_back(&front, &rear);
                (pos_node->data) -=q;
                push_front(&front, &rear, pos_node->data, pos_node->name);
                pos_t += q;
                free(pos_node);
            }
            else{
                Node * pos_node = pop_back(&front, &rear);
                int ans_time = pos_t + (pos_node->data);
                char ans_name[11];
                strcpy(ans_name,pos_node->name);
                printf("%s %d\n", ans_name, ans_time);
                pos_t += pos_node->data;
                free(pos_node);
            }
        }
    }


    return 0;
}
