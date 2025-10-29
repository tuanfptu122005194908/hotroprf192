#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int newWord = 1;
    
    printf("Please enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    sentence[strcspn(sentence, "\n")] = '\0';
    
    printf("The normalized sentence is \"");
    
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isalpha(sentence[i])) {
            if (newWord) {
                printf("%c", toupper(sentence[i]));
                newWord = 0;
            } else {
                printf("%c", tolower(sentence[i]));
            }
        } else {
            printf("%c", sentence[i]);
            if (sentence[i] == ' ') {
                newWord = 1;
            }
        }
    }
    
    printf("\"\n");
    
    return 0;
}