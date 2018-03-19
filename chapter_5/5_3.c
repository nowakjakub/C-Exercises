#include <stdio.h>

int main(int argc, char **argv){
	const int WEEK = 7;
	int days = 0, weeks = 0;

	printf("Please input number of days: ");
	scanf("%d", &days);

	while ((days != 0) && (days != -20)){
		weeks = days / WEEK;
		printf("%d days are %d weeks, %d days.\n", days, weeks, days % WEEK);
		printf("Please input number of days (0 or -20 to end): ");
		scanf("%d", &days);
	}


	return 0;
}
