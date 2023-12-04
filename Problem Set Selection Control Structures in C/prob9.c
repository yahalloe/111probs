#include <stdio.h>
#include <ctype.h>

int main(void) {
    char input = ' ';
    
    printf("Enter a letter: ");
    scanf("%c",&input);
   
    if (isupper(input)) {
        input = tolower(input);
    }

    if (input != 'a' && 
        input != 'i' && 
        input != 'u' && 
        input != 'e' && 
        input != 'o') {
        printf("%c is NOT a vowel!", input);
        } else {
            printf("%c is a vowel!", input);    
        }

    return 0;
}