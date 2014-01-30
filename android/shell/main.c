/* 
 * main.c: A simple shell
 */
#include <stdio.h>
#include <string.h>

#define BUF_SIZE 512
#define PROMPT "ece353sh$"

char *getinput(char *buf, int len) {
	printf("%s ", PROMPT);
	return fgets(buf, len, stdin);
}

int parseinput(const char *buf) {
	if (strcmp(buf, "exit\n") == 0)
		return 0;
	return 1;
}

int main(int argc, char *argv[]) {
	char buf[BUF_SIZE];

	do {
		getinput(buf, sizeof(buf));
	} while (parseinput(buf) == 1);
	return 0;
}

