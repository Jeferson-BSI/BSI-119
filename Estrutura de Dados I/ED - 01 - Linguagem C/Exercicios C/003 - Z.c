#include <stdio.h>
#include <ctype.h>

int main(){
	char a;

	printf("> ");
	scanf("%c", &a);

	a = toupper(a);

	printf("%c\n", a);
}