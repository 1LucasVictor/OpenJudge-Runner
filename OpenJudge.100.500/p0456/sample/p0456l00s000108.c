int main(){
	char str[200010];
	char lett;
	int len = 0, count = 0;
	scanf("%c", &lett);
	while(lett != '\n'){
		len++;
		str[len] = lett;
		scanf("%c", &lett);
	}
	for(int i = 1; i <= len; i++){
		scanf("%c", &lett);
		if(lett != str[i])
			count++;
	}
	printf("%d", count);
	
	return 0;
}