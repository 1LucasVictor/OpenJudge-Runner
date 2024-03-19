#include <stdio.h>

typedef struct pair* ppair;

typedef struct pair {
  int first, second;
} pair;


int size;
pair v[1000000];
int psize;
int preorder[1000000];

void swap(ppair a, ppair b) {
  pair t = *a;
  *a = *b;
  *b = t;
}

int getp(int begin, int end) {
  int i;
  int p = begin;
  for(i = begin+1; i < end; ++i) {
    if(v[i].first < v[p].first) {
      p = i;
    }
  }
  swap(&v[end-1], &v[p]);
  return end-1;
}

void qsort(int begin, int end) {
  int i, j;
  if(begin >= end) return;
  getp(begin,end);
  preorder[psize++] = v[end-1].second;
  if(begin+1 == end) return;
  for(i = begin, j = begin; i < end; ++i) {
    if(v[i].second < v[end-1].second) {
      swap(&v[i], &v[j++]);
    }
  }
  swap(&v[j],&v[end-1]);
  qsort(begin, j);
  qsort(j+1, end);
}

int main() {
  int i, j;
  int n, k;
  char s[100];
  size = 0;
  scanf("%d", &n);
  for(i = 0; i < n; ++i) {
    scanf("%s", s);
    if(s[0] == 'i') {
      scanf("%d", &k);
      v[size++] = (pair){i,k};
    } else {
      psize = 0;
      qsort(0, size);
      for(j = 0; j < size; ++j) {
        printf(" %d", v[j].second);
      }
      printf("\n");
      for(j = 0; j < size; ++j) {
        printf(" %d", preorder[j]);
      }
      printf("\n");
    }
  }
  return 0;
}
