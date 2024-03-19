main () {
  int a, b;
  char op;
  while(~scanf("%d%*c%c%*c%d", &a, &op, &b)) {
    switch(op) {
      case '+': printf("%d\n", a + b); break;
      case '-': printf("%d\n", a - b); break;
      case '*': printf("%d\n", a * b); break;
      case '/': printf("%d\n", a / b); break;
      default: return 0;
    }
  }
}
