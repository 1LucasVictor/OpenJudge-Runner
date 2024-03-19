main () {
    int a;
    scanf("%d", &a);
    switch(a % 10) {
      case 0:
      case 1:
      case 6:
      case 8:
        puts("pon");
        return 0;
      case 3:
        puts("bon");
        return 0;
      default:
        puts("hon");
    }
}
