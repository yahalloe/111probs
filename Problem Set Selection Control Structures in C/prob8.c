#include <stdio.h>
#include <ctype.h>

int main(void) {
    char input = ' ';
    
    printf("Enter a letter: ");
    scanf("%c",&input);
   

    if (islower(input)) {
        printf("%c -> %c", input, toupper(input));
    } else printf("%c -> %c", input, tolower(input));

    return 0;
}