#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* encr(char passwd[])
{
	int k = 7;
	for (unsigned int i = 0; i < strlen(passwd); i++)
		passwd[i] ^= k;
	return passwd;
}
/*ahsjdbahsd
shdbjhs*/

void passcheck(char passwd[]) /*qwer*/
{
	FILE* pass;
	pass = fopen("C:\\Users\\asoko\\Desktop\\Ó(÷)åáà\\ÎÈÁ\\6\\pass_check\\pass_check\\pass.txt", "r");
	char check[64];
	fgets(check, 64, pass); //kashbashbd\
	akhsdbkahsd
	fclose(pass);
	if (!strcmp(check, encr(passwd))) //qwertyu
		printf("Allowed\n");
	else printf("Denied\n");//qwertyu
}
//kajsdkjdn\akshdbkshd
int main()
{
	char passwd[64];
	printf("Enter password ");
	scanf("%s", &passwd);
	passcheck(passwd);
	system("pause");
	return 0;
}