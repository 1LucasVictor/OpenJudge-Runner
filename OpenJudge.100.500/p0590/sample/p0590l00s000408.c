#include <stdio.h>

int main(int argc, char* argv[])
{
	int data[5];
	int k;

 	int ok = 1;

 	for (int n = 0; n < 5; n++) {
		scanf("%d", &data[n]);
      	if (data[n] < 0 || data[n] > 123) {
          ok *= 0;
        }
		//printf("%d\n", data[n]);
	}
	scanf("%d", &k);
	if (k < 0 || k > 123) {
		ok *= 0;
	}
	//printf("%d\n", k);

  
  	for (int i = 0; i < 4; i++) {
      for (int j = i+1; j < 5; j++) {
        int d = data[j] - data[i];
        if (d > k) {
          ok *= 0;
        }
      }
   }
  
  	if (ok == 1) { printf("Yay!\n"); }
  	else if (ok == 0) { printf(":(\n"); }
  
	return 0;
}