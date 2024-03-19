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

#define MAX(a, b)       ((a) < (b) ? (b) : (a))
#define MIN(a, b)       ((a) > (b) ? (b) : (a))

typedef struct stlist   ListPair;
typedef struct stlist {
    ListPair    *next;
    long        first;
    long        second;
} ListPair;

bool
ListContain(ListPair *iel, long ff)
{

    while (iel != NULL) {
        if (iel->first == ff) {
            return true;
        }
        iel = iel->next;
    }
    return false;
}

void
ListPairPush(ListPair **head, long ff, long ss)
{
    ListPair *nel;
    ListPair *iel;
    ListPair **pel;

    nel = malloc(sizeof(ListPair));
    nel->first = ff;
    nel->second = ss;
    nel->next = NULL;

    pel = head;
    iel = *head;
    while (iel != NULL) {
        if (iel->first == ff) {
            free(nel);
            return;
        }
        pel = &(iel->next);
        iel = iel->next;
    }
    *pel = nel;
    return;
}

int
main()
{
    long        vn;
    int         idx;
    int         ik;
    ListPair**  gar;
    int         uu, vv;
    int         kk;
    
    vn = readnum();
    gar = calloc(vn + 1, sizeof(ListPair*));
    for (idx = 0; idx < vn; idx++) {
        scanf("%d", &uu);
        scanf("%d", &kk);
        for (ik = 0; ik < kk; ik++) {
            if (scanf("%d", &vv) <= 0) goto err;
            ListPairPush(&(gar[uu]), vv, 1);
        }            
    }

    for (uu = 1; uu <= vn; uu++) {
        ListPair*       lpv = gar[uu];

        for (vv = 1; vv <= vn; vv++) {
            int tf = 0;

            if ((lpv != NULL) && (vv == lpv->first)) {
                tf = 1;
                lpv = lpv->next;
            } else {
                tf = 0;
            }
            if (vv == vn) {
                printf("%d\n", tf);
            } else {
                printf("%d ", tf);
            }
        }
    }
    
    exit(EXIT_SUCCESS);

  err:
    exit(EXIT_FAILURE);
}

