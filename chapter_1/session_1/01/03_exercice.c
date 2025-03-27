// read a character
//  while (charater is not end-of-file indicator)
//  output the character just read
//  read a character
// Converting this into C gives:
#include <stdio.h>
/* copy input to output; 1st version */
int main()
{
    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}   