#include<stdio.h>
#include<stdlib.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)

const int INF = 1001001001;

/*リスト一式*/
/*NDDTPTHで置換する型を変更してリストのデータを指定*/
/*使用する前にPTHをアルファベットで置換*/
typedef struct node{
  int nx, hv;
} NDDTPTH;
typedef struct listElementPTH{
  NDDTPTH data;
  struct listElementPTH *next;
  struct listElementPTH *prev;
} LIELPTH;
typedef struct listPTH{
  int size;
  LIELPTH *front;
  LIELPTH *back;
} LISTPTH;
LIELPTH *new_listElement_PTH(NDDTPTH d){
  LIELPTH *ret = (LIELPTH *)malloc(sizeof(LIELPTH));
  ret->data = d;
  ret->next = NULL;
  ret->prev = NULL;
  return ret;
}
LISTPTH *new_list_PTH(void){
  LISTPTH *ret = (LISTPTH *)malloc(sizeof(LISTPTH));
  ret->back = NULL;
  ret->front = NULL;
  ret->size = 0;
  return ret;
}
void push_back_PTH(NDDTPTH d, LISTPTH *list){
  LIELPTH *new = new_listElement_PTH(d);
  if(list->size == 0){
    list->front = list->back = new;
  }else{
    list->back->next = new;
    new->prev = list->back;
    list->back = new;
  }
  list->size++;
}
void push_front_PTH(NDDTPTH d, LISTPTH *list){
  LIELPTH *new = new_listElement_PTH(d);
  if(list->size == 0){
    list->front = list->back = new;
  }else{
    list->front->prev = new;
    new->next = list->front;
    list->front = new;
  }
  list->size++;
}
int pop_back_PTH(LISTPTH *list){
  if(list == NULL || list->size == 0){
    return 1;
  }
  if(list->size == 1){
    free(list->back);
    list->front = list->back = NULL;
    list->size = 0;
    return 0;
  }
  LIELPTH *bk = list->back;
  LIELPTH *nbk = bk->prev;
  free(bk);
  nbk->next = NULL;
  list->back = nbk;
  list->size--;
  return 0;
}
int pop_front_PTH(LISTPTH *list){
  if(list == NULL || list->size == 0){
    return 1;
  }
  if(list->size == 1){
    free(list->back);
    list->front = list->back = NULL;
    list->size = 0;
    return 0;
  }
  LIELPTH *fr = list->front;
  LIELPTH *nfr = fr->next;
  free(fr);
  nfr->prev = NULL;
  list->front = nfr;
  list->size--;
  return 0;
}
/*ここまでリスト一式*/

#define N 100

int main(){
  int n;
  scanf("%d", &n);
  LISTPTH *gr[N];
  rep(i, n){
    gr[i] = new_list_PTH();
  }
  rep(i, n){
    int a;
    scanf("%d", &a);
    int k;
    scanf("%d", &k);
    rep(j, k){
      int v, c;
      scanf("%d%d", &v, &c);
      NDDTPTH nd;
      nd.hv = c; nd.nx = v;
      push_back_PTH(nd, gr[i]);
    }
  }
  int d[N];
  rep(i, n){
    d[i] = INF;
  }
  int chk[N];
  rep(i, n){
    chk[i] = 0;
  }
  d[0] = 0;
  chk[0] = 1;
  int now = 0;
  rep(i, n-1){
    for(LIELPTH *p = gr[now]->front; p != NULL; p = p->next){
      NDDTPTH nd = p->data;
      if(chk[nd.nx] == 1) continue;
      int a1 = d[nd.nx];
      int a2 = d[now] + nd.hv;
      if(a1 < a2) d[nd.nx] = a1;
      else d[nd.nx] = a2;
    }
    int mn = INF, nx = -1;
    rep(j, n){
      if(chk[j] == 1) continue;
      if(mn > d[j]){
        mn = d[j];
        nx = j;
      }
    }
    if(nx == -1) break;
    chk[nx] = 1;
    now = nx;
  }

  rep(i, n){
    printf("%d %d\n", i, d[i]);
  }
  return 0;
}

