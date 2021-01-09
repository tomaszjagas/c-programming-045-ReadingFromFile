#include <stdio.h>

int main() {
	FILE* fp;
	int c;

	fp = fopen("file.txt", "r");

	if (fp == NULL) {
		perror("Error in opening file");
		return(-1);
	}

	// read single char
	while ((c = fgetc(fp)) != EOF) {
		printf("%c", c);
	}

	fclose(fp);
	fp = NULL;

	return(0);
}