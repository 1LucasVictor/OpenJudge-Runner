//
//  main.c
//  atcoder_c
//
//  Created by nyuhei on 2019/06/23.
//  Copyright © 2019 nyuhei. All rights reserved.
//

#include <stdio.h>
int main(void) {
  char s[4];
  int i, check = 0;
  scanf("%s", s);
  for (i = 0; i <= 2; i++) {
    if (s[i] == s[i + 1]) {
      check = 1;
      break;
    }
  }
  if (check == 0) {
    printf("Good");
  } else {
    printf("Bad");
  }
  return 0;
}
