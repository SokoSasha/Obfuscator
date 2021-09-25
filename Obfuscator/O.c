#include <stdio.h>
#include <string.h>
char Base64[64] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_";

int main()
{
	char passwd[5];
	printf("Enter the password: ");
	gets_s(passwd, 5);
	selection(passwd);
	return 0;
}
