int main(void){
	int week;
	int money = 100000;
	int i;

	scanf("%d", &week);

	for(i=0; i<week; i++){
		money += money * 0.05;
		if(money % 1000 > 0){
			money += 1000;
			money -= money%1000;
		}
	}
	printf("%d\n", money);
	return 0;
}