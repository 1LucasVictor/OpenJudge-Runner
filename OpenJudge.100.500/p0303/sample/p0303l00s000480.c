#include <stdio.h>

int main()
{
  int i, n, k, P, ld, m, head, tail;
  fscanf(stdin, "%d %d", &n, &k);
  int w[n];
  head = tail = 0;
  for (i=0; i<n; i++) {
    fscanf(stdin, "%d", w+i);
    tail += w[i];
  }    

  while (head<tail-1) {
    P = (head+tail)/2;
    ld = 0; 
    m = 1;
    for (i=0; i<n; i++) {
      ld += w[i];
      if (ld>P) { 
	m++; 
	if (k<m) break; 
	if (w[i]>P) break;
	ld = w[i];
      }
    }
    if (i==n)  tail=P;
    else       head=P;
  }
  printf("%d\n", tail);

  return 0;
}
