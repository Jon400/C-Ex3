#include <stdio.h>
#include "TextFindClass.h"

#define MAX_TEXT_SIZE 250

int main()
{
    char c, type_of_action;
    char w[WORD + 1];
    int i = 0;

    scanf("%c", &c);
    while (c != ' ')
    {
        w[i] = c;
        i++;
        scanf("%c", &c);
    }

    w[i + 1] = '\0';

    scanf("%c", &type_of_action);
    scanf("%c", &c);
    scanf("%c", &c);

    if(type_of_action == 'a')
    {
        print_lines(w);
    }
    else if(type_of_action == 'b')
    {
        print_similar_words(w);
    }
      
}