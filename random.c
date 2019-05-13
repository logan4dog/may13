#include <stdio.h>
#include <stdlib.h>

int main(){
	int c,n;
	printf("Ten random numbers within 1 to 100\n");
	for (c=1;c<=10;c++){
		n = rand() % 100 +1;
		printf("%d\n",n);
	}
}
