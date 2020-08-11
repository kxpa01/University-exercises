#include <stdio.h>

int main(){
	int secs;
	
	printf("Give me the seconds \n");
	scanf("%d", &secs);
	
	printf("%dh %dm %ds", secs/3600, (secs%3600)/60, secs%60);
	return 0;
}
