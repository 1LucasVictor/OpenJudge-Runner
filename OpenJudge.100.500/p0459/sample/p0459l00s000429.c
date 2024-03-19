main() {
  int x, y;scanf("%d %d",&x, &y);
  if((y-2*x)<0 || (-y+4*x)<0 || (y-2*x)%2 || (-y+4*x)%2){
    printf("No\n");
    return 0;
  }
  printf("Yes\n");
}