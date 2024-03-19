#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  unsigned long long N, M, K;
  scanf("%llu %llu %llu", &N, &M, &K);

  unsigned long long *A, *B;
  A = malloc((N + 1) * sizeof(unsigned long long));
  B = malloc((M + 1) * sizeof(unsigned long long));
  for (unsigned long long i = 0; i < N; i++) {
    scanf("%llu", &A[i]);
  }
  for (unsigned long long i = 0; i < M; i++) {
    scanf("%llu", &B[i]);
  }
  A[N] = ULLONG_MAX;
  B[M] = ULLONG_MAX;

  unsigned long long A_idx = 0, B_idx = 0;
  unsigned long long book_count = 0;
  unsigned long long total_reading_time = 0;
  while (1) {
    unsigned long long time_book_chosen;
    if (A[A_idx] > B[B_idx]) {
      time_book_chosen = B[B_idx++];
    } else {
      time_book_chosen = A[A_idx++];
    }

    if (time_book_chosen == ULLONG_MAX) {
      break;
    }

    // printf("chose: %lu\n", time_book_chosen);

    if (total_reading_time + time_book_chosen > K) {
      break;
    } else {
      total_reading_time += time_book_chosen;
      book_count++;
    }
  }
  // printf("total: %lu\n", total_reading_time);

  printf("%llu\n", book_count);

  return 0;
}
