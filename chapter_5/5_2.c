#include <stdio.h>

int main(int argc, char **argv){
	int number = 0;

	printf("Please input number: ");
	scanf("%d", &number);

	int i;
	for(i = 0; i <= 10; i++){
		printf("%d ", number + i);
	}
	return 0;
}
