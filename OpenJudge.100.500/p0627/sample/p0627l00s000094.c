    #include <stdio.h>
     
    int main() {
      int a, b;
      int arr[3] = {0};
      int max = -1000;
      
      scanf("%d %d", &a, &b);
      
      arr[0] = a + b;
      arr[1] = a - b;
      arr[2] = a * b;
      
      int i;
      for (i = 0; i < 3; i++) {
        if (max < arr[i]) {
          max = arr[i];
        }
      }
      
      printf("%d\n", max);
      
      return 0;
    }