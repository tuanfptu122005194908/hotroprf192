#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    char normalized[1000];
    int j = 0;
    int prevSpace = 1;
    
    printf("Please enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    sentence[strcspn(sentence, "\n")] = '\0';
    
    int start = 0;
    while (sentence[start] == ' ') {
        start++;
    }
    
    int end = strlen(sentence) - 1;
    while (end >= 0 && sentence[end] == ' ') {
        end--;
    }
    
    for (int i = start; i <= end; i++) {
        if (sentence[i] == ' ') {
            if (!prevSpace) {
                normalized[j++] = ' ';
                prevSpace = 1;
            }
        } else {
            normalized[j++] = sentence[i];
            prevSpace = 0;
        }
    }
    
    normalized[j] = '\0';
    
    printf("The normalized sentence: %s\n", normalized);
    
    return 0;
}