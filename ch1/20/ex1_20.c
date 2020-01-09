/*  the c programing language 2nd   */
/*  ex 1-20                         */
/* hyokook kim                      */
#include <stdio.h>
#define MAXLINE 100

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}

/* return is index */
int change_tab(char line[], int len, int len_blank)
{
    int index_tab_start = len-len_blank ;
    int outindex;


    switch (len_blank)
    {
    case 0:
    case 1:
    case 2:
        outindex = len;
        break;
    
    case 3:
    case 4:
    case 5:
        line[index_tab_start] = '\t';       // 이미 이때 이 다음 문자가 대입되어 있는 상태임. 한개씩 밀림
        outindex = index_tab_start;
        break;

    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        line[index_tab_start++] = '\t';
        line[index_tab_start] = '\t';
        outindex = index_tab_start;
        break;
    default:
        break;
    }
    

    return outindex;
}

int main()
{
    int len;
    int nblank;
    char line[MAXLINE];
    char outline[MAXLINE];

    nblank = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        int start_blank = 0;
        int end_blank = 0;
        int i, j;

        for (i = 0, j = 0;; i++, j++)
        {
            if (line[i] != EOF)
            {
                outline[j] = line[i];

                if (line[i] == ' ')
                {
                    if (!start_blank)
                        start_blank = i;
                }
                else if (line[i] != ' ')
                {
                    if(start_blank)
                    {
                        end_blank = i;

                        nblank = end_blank - start_blank;

                        start_blank = end_blank = nblank = 0;

                    }

                    j = change_tab(outline, j, nblank);
                    outline[++j] = line[i];
                }
            }
            else
            {
                break;
            }
        }
    }

    printf("in  : %s\nout : %s\n",line, outline);

    return 0;
}