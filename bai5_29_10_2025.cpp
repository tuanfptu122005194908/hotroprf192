#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int words = 0;
    int inWord = 0;
    
    printf("Please enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isalpha(sentence[i]) || isdigit(sentence[i])) {
            if (!inWord) {
                words++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }
    
    printf("There are %d words in the sentence\n", words);
    
    return 0;
}