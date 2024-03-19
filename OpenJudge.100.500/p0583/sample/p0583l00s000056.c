#include <stdio.h>

int main() {
  long long int number_n, point_a, point_b, point_c, point_d, flag = 0, i;
  scanf("%lld %lld %lld %lld %lld", &number_n, &point_a, &point_b, &point_c, &point_d);
  point_a--;
  point_b--;
  point_c--;
  point_d--;
  char str[number_n];
  scanf("%s", str);
  if(point_c > point_d) {
    for(i = point_b; i <= point_d; i++) {
      if(str[i] == '.') {
        flag++;
      } else {
        flag = 0;
      }
      if(flag == 3) {
        break;
      }
    }
    if(flag != 3) {
      printf("No\n");
      return 0;
    }
  }
  while(point_b != point_d) {
    if(str[point_b+1] == '.') {
      point_b += 1;
    } else if(str[point_b+2] == '.') {
      point_b += 2;
    } else {
      flag = -1;
      break;
    }
  }
  while(point_a != point_c) {
    if(str[point_a+1] == '.') {
      point_a += 1;
    } else if(str[point_a+2] == '.') {
      point_a += 2;
    } else {
      flag = -1;
      break;
    }
  }
  if(flag == -1) {
    printf("No\n");
  } else {
    printf("Yes\n");
  }
  return 0;
}
