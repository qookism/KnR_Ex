#include <stdio.h>

int main()
{
    char c;


    while((c=getchar()) != EOF)
    {

        if((c != ' ') && (c != '\n') && (c != '\t'))
        {
            printf("%c", c);
        }
        else
        {
            printf("\n");
        }
        

    }

    return 0;
}