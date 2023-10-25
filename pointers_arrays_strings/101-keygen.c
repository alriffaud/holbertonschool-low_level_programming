#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 26

int main() 
{    
    char password[PASSWORD_LENGTH + 1];
    int i;

	srand(time(NULL));
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = rand() % 95 + 32;
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("%s\n", password);

    return 0;
}

