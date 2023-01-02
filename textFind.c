#include "TextFindClass.h"
#include <stdio.h>

/*This function receives a string from standard input and saves it in the variable "s".
Will return the length of the line.
The maximum allowed size of a string is 256 characters.
Will be terminated by a newline character "\n"*/
int getline1(char s[])
{
    char c;
    int count = 0;
    while (scanf("%c", &c) != EOF)
    {
        if(c == '\n'){
            break;
        }
        s[count] = c;
        count++;
    }

    s[count] = '\0';
    return count;
}

/*This function receives a string from standard input and saves it in the variable "w".
Will return the length of the word.
The maximum allowed size of a string is 30 characters
Will be terminated by the following characters: "\n" (newline), " " (space), "\t"(tab)*/
int getword(char w[])
{
    char c;
    int count = 0;
    while (scanf("%c", &c) != EOF)
    {
        if(c == '\n' || c == '\t' || c == ' ' ){
            break;
        }
        w[count] = c;
        count++;
    }

    w[count] = '\0';
    return count;
}

/*The function will receive two strings, 'str1' and 'str2.
Will return whether 'str2' is a substring of 'str1'. */
int substring(char * str1, char * str2)
{
    char * p_str1 = str1;
    char * p_str2 = str2;
    
    while (*p_str1 && *p_str2)
    {
        if (*p_str1 == *p_str2)
        {
            p_str1++;
            p_str2++;
            continue;
        }
        p_str1++;
        p_str2 = str2;
    }

    if (*p_str1)
    {
        return 1;
    }
    else if (*p_str2)
    {
        return 0;
    }

    return 1;
}

/*This function will receive two strings, 's' and 't', and a number, 'n'.
Will return whether it is possible to reach 't' from 's' by removing 'n' characters from 's'.*/
int similar (char *s, char *t, int n)
{
    char * p_s = s;
    char * p_t = t;
    int count = 0;
    

    while (*p_s && *p_t)
    {
        if (*p_s == *p_t)
        {
            p_s++;
            p_t++;
            continue;
        }
        p_s++;
        count++;
    }

    while (*p_s)
    {
        p_s++;
        count++;
    }

    if(*p_t)
    {
        return 0;
    } 

    return (count == n);
}

/* This function receives a string, 'str', which is the text to be searched for.
It also receives lines of text as input, using 'getline' function.
Will print all lines that include the string 'str'.
*/
void print_lines(char * str)
{
    char input[LINE + 1];
    while (getline1(input))
    {
        if(substring(input, str))
        {
            printf("%s\n", input);
        }
    }

    
}

/*This function receives a string, 'str', which is the text to be searched for.
It also receives words of text as input, using 'getword' function.
Will print all words that can be transformed into 'str' by removing one character.*/
void print_similar_words(char * str)
{
    char input[WORD + 1];
    while (getword(input))
    {
        if(similar(input, str, 1) || similar(input, str, 0))
        {
            printf("%s\n", input);
        }
    }
}