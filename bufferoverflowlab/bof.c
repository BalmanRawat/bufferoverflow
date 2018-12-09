#include<stdio.h>
#include<string.h>

void foo(char* s) {
	char buf1[10];
	printf("My stack looks like: \n%p\n%p\n%p\n%p\n%p\n%p \n\n");
	strcpy(buf1,s);
	printf("Now, my stack looks like: \n%p\n%p\n%p\n%p\n%p\n%p \n\n"); }

void bar () {
	printf("Augh! I have been hacked!");
}

int main (int argc, char* argv[]) {
	printf("Address of foo= %p\n", foo);
	printf("Address of bar= %p\n", bar);
	if (argc!=2) {printf("No arguments");return 0;};
	foo(argv[1]);
 	return 0;
}

