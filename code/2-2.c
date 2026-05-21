#include <stdio.h>

enum Color { RED, GREEN, BLUE };
enum Status { OK = 0, ERR = -1, BUSY = 1 };

int main(void) {
    printf("RED\t= %d\n", RED);
    printf("GREEN\t= %d\n", GREEN);
    printf("BLUE\t= %d\n\n", BLUE);
    
    printf("OK\t= %d\n", OK);
    printf("ERR\t= %d\n", ERR);
    printf("BUSY\t= %d\n", BUSY);
    
    return 0;
}
