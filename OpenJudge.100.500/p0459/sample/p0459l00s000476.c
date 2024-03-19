main() {
  int x, y;scanf("%d %d",&x, &y);
  printf("%s\n",((y-2*x)<0 || (-y+4*x)<0 || (y-2*x)%2 || (-y+4*x)%2)?"No":"Yes");
}
