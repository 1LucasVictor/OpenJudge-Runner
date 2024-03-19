#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

struct cell{
    char name[100]; //単語の先頭のアドレス
    struct cell *next;
    int count;
};

 struct cell *next(struct cell *ptr) {
    return(ptr->next);
  }



struct cell *search(struct cell *head, char *target) {
    while (head != NULL) {
	if(strcmp(head->name,target)==0){
	    return head;
	} else {
	    head = next(head);
	}
    }
    return NULL;
}

int stringhash(char *c, int M){
    int h = 0,a = 127;
    for(; *c != '\0';c++){
	h = (a * h + *c + M) % M;
    }
    return(h+M)%M;
}

int main(void) {
    char order[10];
    struct cell *table[499];
    static char word[1000000][15];
    struct cell *data;
    for(int j = 0;j < 499;j++ ){
        table[j] = NULL;
    }

    int N;
    scanf("%d",&N);
    for (int i = 0;i < N;i++) {
        //fprintf(stderr, "idx : %d\n", i);
        scanf("%10s %15s",order, word[i]);
        if (strcmp("insert", order) == 0) {
            int num = 1;
            int h = stringhash(word[i],499);
            //fprintf(stderr, "hash : %d\n", h);
	        struct cell *p = search( table[h], word[i]);
            if(p==NULL) {
	            data = (struct cell *)malloc(sizeof(struct cell));
                data->count = 1;
                strcpy(data->name,word[i]);
                data->next = table[h];
                table[h] = data;
            }
            else {
                p->count++;
            }
        }
        else {
            int h = stringhash(word[i],499);
            struct cell *q = search(table[h], word[i]);
            if (q == NULL) printf("no\n");
            else printf("yes\n");
        }
    }
}
/*
int main(void){
    struct cell *table[499];

    FILE *fp;
    int f;
    // こことstructの方を100にしただけ
    static char word[1000000][100];
    int i = 0;
    int j = 0;
    char buffer[20];
    struct cell *data;
    int h;

    //fp = fopen("/Users/take/Documents/c_task/src/input1.txt","r");

    for( j = 0;j < 499;j++ ){
        table[j] = NULL;
    }

    while(1){
        //f = fscanf(fp,"%s",word[i]);
        scanf("%s", word[i]);
        if(f == EOF) break;
        h = stringhash(word[i],499);
	    struct cell *p = search( table[h], word[i]);
        if(p==NULL) {
	        data = (struct cell *)malloc(sizeof(struct cell));
            data->count = 1;
            strcpy(data->name,word[i]);
            data->next = table[h];
            table[h] = data;
        }
        else {
            p->count++;
        }
        i++;
    }
    //fclose(fp);


    
    for(int i = 0; i < 5; i++) {
        //printf("文字を入力してください。\n");
        scanf("%s",buffer);

        h = stringhash(buffer,499);
        struct cell *q = search(table[h],buffer);
        if(q==NULL){
	        printf("[%s],count = 0 \n");
        } else{
	        printf("[%s],count = %d\n",buffer,q->count);
        }
    }
    


}
*/


