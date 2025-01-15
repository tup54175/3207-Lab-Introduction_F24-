#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() {
    srand(time(NULL));  
    return 'A' + rand() % 26;  
}

int main() {
    printf("Random character: %c\n", randchar());
    return 0;
}
