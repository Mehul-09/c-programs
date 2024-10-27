#include <stdio.h>
#include <string.h>

int main() 
{
    char sentence[1000];
    int i, wordCount = 1;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) 
    {
        if (sentence[i] == ' ' && sentence[i+1] != ' ' && sentence[i+1] != '\0') 
        {
            wordCount++;
        }
    }

    printf("Number of words: %d\n", wordCount);
    return 0;
}