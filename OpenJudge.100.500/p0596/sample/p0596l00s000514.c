#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cell { char ch; struct cell *next, *prev; } *cellp;
typedef struct data { cellp head; int len; } *datap;

datap data_new(int size, char *str) {
    datap p = (datap)malloc(sizeof(struct data));
    p->head = (cellp)malloc(sizeof(struct cell));
    p->len = size;
    cellp cur, bef = p->head; int i;
    for(i = 0; i < size; ++i) {
        cur = (cellp)malloc(sizeof(struct cell));
        bef->next = cur; cur->prev = bef; bef = cur;
    }
    p->head->prev = cur; cur->next = p->head;
    
    //データの挿入
    cur = p->head->next;
    for(i = 0; i < size; ++i) {
        cur->ch = str[i]; cur = cur->next;
    }

    return p;
}

void delete(datap p, cellp cur) {
    if( cur == p->head) { return ; }
    cur->prev->next = cur->next;
    cur->next->prev = cur->prev;
    free(cur); --p->len;
}

/*
void prdata(datap p) {
    cellp cur = p->head->next;
    printf("len: %d\n", p->len);
    while( cur != p->head) {
        printf("%c ", cur->ch);
        cur = cur->next; 
    }
    printf("\n");
}
*/

int check(datap p) {
    cellp cur = p->head->next;
    int ans = 0; char a1, a2;
    while( cur != p->head && cur->next != p->head ){
        a1 = cur->ch; cur = cur->next;
        a2 = cur->ch; cur = cur->next;
        if( (a1 == '0' && a2 == '1') || (a1 == '1' && a2 == '0') ) {
            delete(p, cur->prev); delete(p, cur->prev);
            ans +=2;
        } else {
            cur = cur->prev;
        }
    }
    return ans;
}

void solve(datap p, int *ans) {
    *ans = 0;
    int i;
    while( (i = check(p)) != 0) {
        *ans += i;
    }
}

#define LEN (1e5 + 5)

int main() 
{
    int ans = 0;
    char *str = (char *)malloc(LEN * sizeof(char));
    scanf("%s", str);
    datap p = data_new(strlen(str), str);
    
    //prdata(p);
    /*
    cellp cur = p->head->next;
    printf("len: %d\n", p->len);
    while( cur != p->head) {
        printf("%c ", cur->ch);
        cur = cur->next;
    }
    printf("\n");
    */

    solve(p, &ans);
    /*
    char a1, a2; int check;
    do {
        check = 0; cur = p->head->next;
        while( cur != p->head && cur->next != p->head) {
            a1 = cur->ch; cur = cur->next;
            a2 = cur->ch; cur = cur->next;
            if( (a1 == '0' && a2 == '1') || (a1 == '1' && a2 == '0') ) {
                delete(p, cur->prev); delete(p, cur->prev);
                check += 2;
            } else {
                cur = cur->prev;
            }
        }
        ans += check;
        prdata(p); printf("check : %d\n", check);
    } while ( check != 0) ;
    */

    printf("%d\n", ans);
    return 0;
}