#include <stdio.h>

int getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

main()
{
	char line[1000];
	int found = 0;

	while (getline(line, 1000) > 0)
		if (strindex(line,pattern) >= 0) {
			printf("%s",line);
			found++;
		}
	return found;
}

