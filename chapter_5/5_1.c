#include <stdio.h>

int main(int argc, char **argv){
	const int MINUTES = 60;
	int hour = 0, minute = 0;

	printf("Please input minutes to convert: ");
	scanf("%d", &minute);

	while(minute > 0){
		hour = minute / MINUTES;
		printf("%d minutes is %dh %dm\n", minute, hour, minute%MINUTES);
		printf("Please input minutes to convert or input 0 to end: ");
		scanf("%d", &minute);
	}




	return 0;
}
