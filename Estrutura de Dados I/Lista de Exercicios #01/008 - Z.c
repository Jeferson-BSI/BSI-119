#include <stdio.h>

int main(){
	int n, k, fat;

	printf("> ");
	scanf(" %i",&n);

	fat = k = n;

	while(n > 1){
		n--;
		fat *= n;

	}
	
	printf("%i! == %i\n",k , fat );
}