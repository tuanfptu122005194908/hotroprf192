#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int vowels = 0, consonants = 0;
    
    printf("Please enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    for (int i = 0; sentence[i] != '\0'; i++) {
        char ch = tolower(sentence[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    printf("The number of vowel alphabets is %d\n", vowels);
    printf("The number of consonant alphabets is %d\n", consonants);
    
    return 0;
}