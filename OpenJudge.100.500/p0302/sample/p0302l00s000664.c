#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const int kHashSize = 244140624;
static const size_t kP[] = {
  1,
  5,
  25,
  125,
  625,
  3125,
  15625,
  78125,
  390625,
  1953125,
  9765625,
  48828125,
  244140625,
};

static int Id(char c) {
  switch (c) {
    case 'A':
      return 1;
    case 'C':
      return 2;
    case 'G':
      return 3;
    case 'T':
      return 4;
  }
  // should not reach here.
  return 0;
}

static size_t Encode(const char* k, size_t n) {
  size_t h = 0;
  for (size_t i = 0; i < n; ++i) {
    h += kP[i] * Id(k[i]);
  }
  return h;
}

typedef struct Dictionary Dictionary;
struct Dictionary {
  int* table;
};

static void dictionary_init(Dictionary* d) {
  d->table = (int *)malloc(sizeof(int) * kHashSize);
  if (!d->table) {
    return;
  }
}

static void dictionary_destroy(Dictionary* d) {
  free(d->table);
}

static void dictionary_insert(Dictionary* d, const char* k, size_t n) {
    const size_t i = Encode(k, n);
    d->table[i] = 1;
}

static int dictionary_find(const Dictionary* d, const char* k, size_t n) {
  return d->table[Encode(k, n)] > 0;
}

int main() {
  int n;
  scanf("%d", &n);

  Dictionary d;
  dictionary_init(&d);

  char op[7];
  char str[13];
  for (int i = 0; i < n; ++i) {
    scanf("%s %s", op, str);
    const char c = op[0];
    const size_t len = strnlen(str, 13);
    if (c == 'i') {
      dictionary_insert(&d, str, len);
      continue;
    }

    if (dictionary_find(&d, str, len)) {
      printf("yes\n");
    } else {
      printf("no\n");
    }
  }
  dictionary_destroy(&d);

  return 0;
}