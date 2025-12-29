// M number of words will be granted
// Each word should be stored exactly as its own size
// (use malloc here)
// then print the longest word
// so this concept is to use string.h  since its whole thing could be done with string.h
// for example measuring the length of the size of the word could be strlen and strcpy to paste the str(words)
// into words[i] to clarify for longest to see which one has the longest word.
// two around 2days to figure out errors and shortcuts
#include <stdio.h>
#include <stdlib.h> //malloc used
#include <string.h> // we are usin strlen and strcpy so we need string header file

int main()
{
    char str[100];
    int i, M, longest = 0;

    char **words = (char **)malloc(sizeof(char *) * M); //make space for characters to be stored
    if (!words)
    {
        fprintf(stderr, "malloc failed\n"); //if error occurs
        return 1;
    }
    
    for (i=0; i < M; i++)
    {
        if(scanf("%100s", str) != 1) // getchar 100characters
        {
            free(words);
            return 0;
        }
        words[i] = (char *)malloc(strlen(str) + 1); // make space with + \0

        strcpy(words[i], str); //characters in string pasted into words[i]

        if (strlen(words[i]) > strlen(words[longest])) //now measure the length of the words
        {
            longest = i; //store the longest words into longest(variable)
        }
    }

    printf("The longest word is %s\n", words[longest]);//print the longest

    for (i = 0; i < M; i++)
    {
        free(words[i]);
    }

    free(words);

	return 0;
}
