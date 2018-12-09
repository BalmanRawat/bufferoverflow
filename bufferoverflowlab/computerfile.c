#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

        if(argc > 1){
                char buffer_two[5];

                printf("\n[STRCPY] copying %d bytes into buffer_two\n\n", strlen(argv[1]));
                strcpy(buffer_two, argv[1]);

                printf("[AFTER] buffer_two is at %p and contains \'%s\'\n", buffer_two, buffer_two);
        } else {
                printf("Usage: %s \"[some random input]\"\n", argv[0]);
        }
}

