#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void echo(char* str){
	char array[30];
	strcpy(array, str);
	printf("%s\n", array);
}

int main(int argc, char* argv[]){
        if(argc == 2){
		echo(argv[1]);
	}
	return 0;
}
