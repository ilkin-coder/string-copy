#include <stdio.h>
void strcpyfun(char *cpysrting, const char *src);
int findstrlen(char *p );

int main() {
    char source[] = "Hello, World!";
    int a=findstrlen(source);
    char destination[a];

    strcpyfun(destination, source);

    printf("Source: %s\n", source);
    printf("Copying string: %s\n", destination);

    return 0;
}

int findstrlen(char *p ){
    int length=0;

    for(int i=0; *(p+i) != '\0';i++){
        length++;
    }
    return length;
}

void strcpyfun(char *cpysrting, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        cpysrting[i] = src[i];
        i++;
    }
    cpysrting[i] = '\0'; 
}
