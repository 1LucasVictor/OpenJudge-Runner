#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define BUFSIZE         (1024)

char buf[BUFSIZE];

long
readnum()
{
    long        ret;
    char        *bp;

    bp = fgets(buf, BUFSIZE, stdin);
    if (bp == NULL) goto err;
    ret = atol(buf);
    return ret;

  err:
    perror("error fgets");
    exit(EXIT_FAILURE);
}

int
readnar(char *buf, long *nar, int sz)
{
    int         idx;
    char        *rp;
    char        *nrp;
    long        num;

    rp = buf;
    for (idx = 0; idx < sz; ++idx) {
        num = strtol(rp, &nrp, 10);
        *nar = num;
        ++nar;
        if (rp == nrp) break;
        rp = nrp;
    }
    return idx;
}

void
print_arr(int *arr, int sz)
{
    int idx;

    printf("%d", arr[0]);    
    for (idx = 1; idx < sz; ++idx) {
        printf(" %d", arr[idx]);
    }
    puts("");
}


#define MAX(a, b)       ((a) < (b) ? (b) : (a))
#define MIN(a, b)       ((a) > (b) ? (b) : (a))

#define HAMAX    (1000 * 1000)
#define VALLEN          (12)

typedef struct stlist   List;;
typedef struct stlist {
    struct stlist *next;
    char        value[VALLEN + 1];
} List;

List    *har[HAMAX] = {NULL};

bool
ListContain(List *iel, char *avalue)
{

    while (iel != NULL) {
        if (strcmp(iel->value, avalue) == 0) {
            return true;
        }
        iel = iel->next;
    }
    return false;
}

void
ListPush(List **head, char *avalue)
{
    List *nel;
    List *iel;
    List **pel;

    nel = malloc(sizeof(List));
    strcpy(nel->value, avalue);
    nel->next = NULL;

    pel = head;
    iel = *head;
    while (iel != NULL) {
        if (strcmp(iel->value, avalue) == 0) {
            free(nel);
            return;
        }
        pel = &(iel->next);
        iel = iel->next;
    }
    *pel = nel;
    return;
}

const char      cmd_insert[] = "insert ";
const int       cmd_insert_len = sizeof(cmd_insert) - 1;
const char      cmd_find[] = "find ";
const int       cmd_find_len = sizeof(cmd_find) - 1;

long
calcHashValue(char *str)
{
    long        hv;
    bool        cont;
    int         len;

    hv = 0;
    len = 0;
    //puts(str);
    cont = true;
    while (cont && len < VALLEN) {
        switch (*str) {
        case 'A':
            hv = (hv << 4) + 1;
            break;
        case 'C':
            hv = (hv << 4) + 2;
            break;
        case 'G':
            hv = (hv << 4) + 4;
            break;
        case 'T':
            hv = (hv << 4) + 8;
            break;
        default:
            cont = false;
            break;
        }
        hv %= HAMAX;
        str++;
        len++;
    }
    //printf("hv = %lx\n", hv);
    return hv;
}

int
main()
{
    long        tn;
    int         idx;
    long        hv;
    
    tn = readnum();
    //printf("tn = %ld\n", tn);
    for (idx = 0; idx < tn; idx++) {
        if (fgets(buf, BUFSIZE, stdin) == NULL) goto err;
        //printf("inlen = %ld", sizeof(cmd_insert));
        if (strncmp(buf, cmd_insert, cmd_insert_len) == 0) {
            hv = calcHashValue(buf + cmd_insert_len);
            ListPush(&(har[hv]), buf + cmd_insert_len);
        } else if (strncmp(buf, cmd_find, cmd_find_len) == 0) {
            hv = calcHashValue(buf + cmd_find_len);
            printf("%s\n", ListContain(har[hv], buf + cmd_find_len)
                   ? "yes" : "no");
        } else {
            goto err;
        }
    }

    exit(EXIT_SUCCESS);

  err:
    exit(EXIT_FAILURE);
}

