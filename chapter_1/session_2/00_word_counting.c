// 1.5.4 Word Counting
// page 22

#include <stdio.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
//

/* count lines, words, and characters in input */
int main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    // Use Ctrl+D (Unix/Linux/Mac) or Ctrl+Z or try Ctrl+C (Windows) to signal EOF in the terminal
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
    return 0;
}