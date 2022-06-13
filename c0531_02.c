#include <stdio.h>
#include <string.h>
int main(void)
{
	/*
	char str[80] = "apple";
	printf("%d, %d \n", sizeof(str), sizeof(str));
	*/
	char str1[80] = "pear";
	char str2[80] = "peach";
	/*
	if (strcmp(str1, str2) == 0) {        // 같으면 --> return 값이 ? 0
		printf("두 개의 값은 같다. \n");  // 같지 않으면 --> return 값은 1
	}
	else {
		printf("두 개의 값은 같지않다. \n");
	}
	*/
	if (strncmp(str1, str2, 3) == 0) {                     // 같으면 --> return 값이 ? 0
		printf("두 개의 값은 3글자까지는 같다. \n");       // 같지 않으면 --> return 값은 1
	}
	else {
		printf("두 개의 값은 3글자까지는 같지않다. \n");
	}

	return 0;
}