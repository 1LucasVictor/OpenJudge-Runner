#include<stdio.h>
#include<stdlib.h>

typedef struct list{
    int H;
    int W;
    struct list *next;
}List;

List *head = NULL;


void insert(int a, int b){
    List *node = (List *) malloc(sizeof(List));
    node->H = a;
    node->W = b;
    node->next = NULL;

    if (head == NULL){
        head = node;
    }

    else
    {
        List *p = head;

        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = node;
    }
}

void print(){
    List *p = head;

    while (p != NULL)
    {
        // printf("%d %d\n",p->H , p->W);

        for (int i = 0; i < p->H; i++)
        {
            for (int j = 0; j < p->W; j++){
                if (i == 0 || i == p->H - 1){
                printf("#");
                }

                else if (j == 0 || j == p->W - 1){
                    printf("#");
                }

                else{
                    printf(".");
                }
            }

            printf("\n");

        }
        printf("\n");

        p = p->next;
    }

}



int main(){
    while(1){
        int H, W;
        scanf("%d" "%d" , &H, &W);
        if (H == 0 && W == 0){
            break;
        }
        insert(H, W);
    }

    print();



    return 0;
}

