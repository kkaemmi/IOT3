#include <stdio.h>
char *my_strcat(char *pd, char *ps);
char my_strlen(char *ps);
int my_strcmp(char *pa, char *pb);
int main(void)
{
	char str[80] = "strawberry";

	my_strcat(str, "apple123");
	printf("%s \n", str);
	printf("%d \n", my_strlen(str));
	printf("%d \n", my_strcmp);

	return 0;
}
char *my_strcat(char *pd, char *ps)     // char *pd = str, char *ps = "apple123"
{
	char *po = pd;

	while (*pd != 0) {
		pd++;
	}
	while (*ps != 0) {
		*pd++ = *ps++;
	}
	*pd = 0;

	return po;
}
char my_strlen(char *ps)     // char *ps = strwberryapple123
{
	int cnt = 0;

	while (*ps++ != 0) {
		cnt++;
		//ps++;
	}

	return cnt;
}
int my_strcmp(char *pa, char *pb)
{
	while ((*pa++ == *pb++) && (*pa != '\0')) {
		//pa++;
		//pb++;
	}
	if (*pa > *pb) return 1;
	else if (*pa < *pb) return -1;
	else return 0;
}