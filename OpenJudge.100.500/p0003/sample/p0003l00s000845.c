#include <stdio.h>

int main (int argc, char* argv[])
{
  int i, j, k;
  double a[2][3], dat;

  while (scanf("%lf %lf %lf %lf %lf %lf", &a[0][0], &a[0][1], &a[0][2], &a[1][0], &a[1][1], &a[1][2]) != EOF) {
    for (k=0; k<2; k++) {
      for (j=k+1; j<=2; j++) {
	a[k][j] /= a[k][k];
      }
      for (i=0; i<2; i++) {
	if (i != k) {
	  for (j=k+1; j<=2; j++) {
	    a[i][j] -= a[i][k] * a[k][j];
	  }
	}
      }
    }
    for (i=0; i<2; i++) {
      dat = a[i][2] - (int)a[i][2];
      if (0.0005 <= dat) {
	a[i][2] += 0.001;
      }
    }
    printf("%.3f %.3f\n", a[0][2], a[1][2]);
  }
  return 0;
}