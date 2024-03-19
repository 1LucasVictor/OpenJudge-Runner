#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//============================================================================
#define pred(x) ((x)-1)
#define succ(x) ((x)+1)
//============================================================================
struct List{
    struct List *prev;
    struct List *next;
    char   *cptr;
    long   key;
};
typedef struct List TList;
//----------------------------------------------------------------------------
typedef struct{
    TList *top,*btm;
    long item;
}TSearch;
//----------------------------------------------------------------------------
struct node {
    char *pword; int count; struct node *left, *right;
};
//----------------------------------------------------------------------------
typedef struct node NODE;
//============================================================================
#define MAXCMD 4
const char Command[MAXCMD][20]={
    "insert",
    "delete",
    "deleteFirst",
    "deleteLast"
};
TList *Ltop,*Lbtm;
char buffer[100];
//============================================================================
void dump(int *A, int N)
{
    int i;

    for (i=0; i<N; i++){
        if (i)
            printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");
}
//============================================================================
void cdump(char *str)
{
    int i;

    printf("%d:", strlen(str));;
    for (i=0; i<strlen(str); i++){
        if (i)
            printf(" ");
        printf("%02X", (unsigned char)str[i]);
    }
    printf("\n");
}
//============================================================================

//============================================================================
//============================================================================
//============================================================================
TList *forwardlist(TList *lst, long val)
{
    long i;

    for (i=0; i<val && lst!=NULL; i++, lst=lst->next);
    return lst;
}
//============================================================================
TList *backwardlist(TList *lst, long val)
{
    long i;

    for (i=0; i<abs(val) && lst!=NULL; i++, lst=lst->prev);
    return lst;
}
//============================================================================
TList *searchlist(TSearch *src, char *str)
{
    TList *lst; long ptr,top,btm;   long item,res;

    ptr = src->item/2;
    lst = forwardlist(src->top, ptr);
    for (top=0,btm=src->item; lst!=NULL; ){
        res=strcmp(lst->cptr, str);
        if (!res)
            return lst;
        if (res<0){
            btm = ptr;
            ptr = succ(ptr-top)/2;
            lst = forwardlist(lst, ptr);
        }else{
            top = ptr;
            ptr = succ(btm-ptr)/2;
            lst = backwardlist(lst, ptr);
        }
    }
    return NULL;
}
//============================================================================
void insertlist(TList *lst, TList *ins)
{
    ins->prev=lst->prev;
    ins->next=lst;
    lst->prev=ins;
    if (ins->prev!=NULL){
        ins->prev->next=ins;
    }
}
//============================================================================
void addlist(char *str)
{
    TList *lst;

    lst=malloc(sizeof(TList));
    //memset(lst, 0, sizeof(TList));
    if (Ltop==NULL){
        Ltop=lst;
        Lbtm=lst;
        Ltop->prev=NULL;
        Ltop->next=NULL;
    }else{
       lst->next=Lbtm->next;
       lst->prev=Lbtm;
       Lbtm->next=lst;
       Lbtm=lst;
    }
    lst->cptr=malloc(succ(strlen(str)));
    strcpy(lst->cptr, str);
}
//============================================================================
void deletelist(TList *lst)
{
    if (lst==NULL)
        return;
    if (lst==Ltop)
        Ltop=Ltop->next;
    if (lst==Lbtm)
        Lbtm=Lbtm->prev;
    if (lst->prev!=NULL)
        lst->prev->next=lst->next;
    if (lst->next!=NULL)
        lst->next->prev=lst->prev;
    if (lst->cptr)
        free(lst->cptr);
    free(lst);
}
//============================================================================
void cleanlist(TSearch *src)
{
    if (src->top==NULL)
        return;
    while (src->top->next!=NULL){
        deletelist(src->top->next);
    }
    deletelist(src->top);
}
//============================================================================
void initsearch(TSearch *src)
{
    src->top=src->btm=NULL;
    src->item=0;
}
//============================================================================
void addsearch(TSearch *src, char *str)
{
    TList *lst,*top;

    lst=malloc(sizeof(TList));
    //memset(lst, 0, sizeof(TList));
    lst->cptr=malloc(succ(strlen(str)));
    src->item++;
    strcpy(lst->cptr, str);
    if (src->top==NULL){
        src->top=lst;
        src->btm=lst;
        src->top->prev=NULL;
        src->top->next=NULL;
    }else{
       for (top=src->top; top!=NULL; top=top->next)
            if (0<strcmp(top->cptr, lst->cptr)){
                insertlist(top, lst);
                break;
            }
        if (top==NULL){
            lst->next=src->btm->next;
            src->btm->next=lst;
            lst->prev=src->btm;
            src->btm=lst;
        }
       /*lst->next=src->btm->next;
       lst->prev=src->btm;
       src->btm->next=lst;
       src->btm=lst;*/
    }
}
//============================================================================
TList *wordsearch(TSearch *src, char *str)
{
    TList *lst;

    lst=src->top;
    while(lst!=NULL){
        if (!strcmp(lst->cptr, str))
            return lst;
        lst=lst->next;
    }
    return NULL;
}
//============================================================================
NODE *search(NODE *p)
{
    int indic;

    if (p==NULL)
        return NULL;
    indic = strcmp(buffer, p->pword);
    return indic < 0 ? search(p->left) :
                indic >0 ? search(p->right) : p;
}
//----------------------------------------------------------------------------
void printtree(NODE *p)
{
    if (p != NULL){
        printtree(p->left);
        printf("%5d %s\n", p->count, p->pword);
        printtree(p->right);
    }
}
//----------------------------------------------------------------------------
char *my_alloc(int n)
{
    char *p;

    p = malloc(n);
    if (p == NULL){
        printf("Not enough memory\n"); exit(1);
    }
    return p;
}
//----------------------------------------------------------------------------
NODE *addnode(NODE *p)
{
    char *my_alloc();
    int indic;

    if (p == NULL){
        p = (NODE *)my_alloc(sizeof(NODE));
        p->pword = my_alloc(strlen(buffer) + 1);
        strcpy(p->pword, buffer);
        p->count = 1; p->left = p->right = NULL;
    }else{
        indic = strcmp(buffer, p->pword);
        if (indic < 0)
            p->left = addnode(p->left);
        else if (indic > 0)
            p->right = addnode(p->right);
        else
            p->count++;
    }
    return p;
}
//----------------------------------------------------------------------------
int fillbuffer(FILE *fp)
{
    char *dest, *source, ch;

    if (fscanf(fp, "%s", buffer) == 0)
        return 0;
    if (strcmp(buffer, "&&&") == 0)
        return 0;
    dest = source = buffer;
    while (ch = *source++){
        ch = toupper(ch);
        if (isalpha(ch))
            *dest++ = ch;
    }
    *dest = '\0';
    return dest > buffer ? 1 : -1;

}
//----------------------------------------------------------------------------
void deltree(NODE **pp)
{
    if (*pp != NULL){
        deltree(&(*pp)->left); deltree(&(*pp)->right);
        free(*pp);
        *pp=NULL;
    }
}
//----------------------------------------------------------------------------
NODE *buildtree(NODE *root)
{
    char filnam[40];
    FILE *fp;
    NODE *addnode();
    int indic;

    printf("Input file: "); scanf("%s", filnam);
    fp = fopen(filnam, "r");
    if (fp == NULL){
        printf("File not available"); exit(1);
    }
    while (indic = fillbuffer(fp))
        if (indic > 0)
            root = addnode(root);
    fclose(fp);
    return root;
}
//----------------------------------------------------------------------------
void nodemain()
{
    NODE *root, *ptr, *buildtree(), *search();

    root = NULL;
    root = buildtree(root);
    printf("\nFrequency distribution:\n\n");
    printtree(root);
    while(printf(
                "\n\nEnter a word, or type &&& to stop: "),
                fillbuffer(stdin),
                strcmp(buffer, "&&&")){
        ptr = search(root);
        if (ptr == NULL)
            printf("Does not occur.\n");
        else
            printf("Number of occcurrences: %d\n", ptr->count);
    }
}
//----------------------------------------------------------------------------
void input(void)
{
    long n,i; char command[10]; NODE *Asrc,*Csrc,*Gsrc,*Tsrc,**Psrc;

    Asrc=Csrc=Gsrc=Tsrc=NULL;
    scanf("%ld", &n);
    for (i=0; i<n; i++){
        scanf("%s %s", command, buffer);
        switch(*buffer){
            //case 'A': Psrc=&Asrc; break;
            case 'C': Psrc=&Csrc; break;
            case 'G': Psrc=&Gsrc; break;
            case 'T': Psrc=&Tsrc; break;
            default: Psrc=&Asrc;  break;
        }
        if (*command=='i')
            *Psrc=addnode(*Psrc);
        else
        if  (*command=='f')
            printf("%s\n", (search(*Psrc)!=NULL)?"yes":"no");
    }
    deltree(&Asrc);
    deltree(&Csrc);
    deltree(&Gsrc);
    deltree(&Tsrc);
}
//============================================================================
int main()
{
    input();
    return 0;
}
//---------------------------------------------------------------------------