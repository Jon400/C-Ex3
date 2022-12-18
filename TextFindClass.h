#define LINE 256 //Max allowed size of a line
#define WORD 30 //Max allowed size of a word

/*This function receives a string from standard input and saves it in the variable "s".
Will return the length of the line.
The maximum allowed size of a string is 256 characters.
Will be terminated by a newline character "\n"*/
int getline1(char s[]);

/*This function receives a string from standard input and saves it in the variable "w".
Will return the length of the word.
The maximum allowed size of a string is 30 characters
Will be terminated by the following characters: "\n" (newline), " " (space), "\t"(tab)*/
int getword(char w[]);

/*The function will receive two strings, 'str1' and 'str2.
Will return whether 'str2' is a substring of 'str1'. */
int substring( char * str1, char * str2);

/*This function will receive two strings, 's' and 't', and a number, 'n'.
Will return whether it is possible to reach 't' from 's' by removing 'n' characters from 's'.*/
int similar (char *s, char *t, int n);

/* This function receives a string, 'str', which is the text to be searched for.
It also receives lines of text as input, using 'getline' function.
Will print all lines that include the string 'str'.
*/
void print_lines(char * str);

/*This function receives a string, 'str', which is the text to be searched for.
It also receives words of text as input, using 'getword' function.
Will print all words that can be transformed into 'str' by removing one character.*/
void print_similar_words(char * str);