#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    FILE* a = fopen("C:\\Users\\Fábio\\Desktop\\a.txt","r");
    FILE* b = fopen("C:\\Users\\Fábio\\Desktop\\b.txt","a");
    char c;
    while(!feof(a)) {
        c = getc(a);
        if(c != '\n') putc(c,b);
    }
    fclose(a);
    fclose(b);
}

