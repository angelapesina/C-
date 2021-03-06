/*How would you test the word count program? What kinds of input are most
likely to uncover bugs if there are any? */

#include <stdio.h>
#define IN 1 
#define OUT 0 

main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = 0;
    nw = 0;
    nc = 0;
    
    printf("WRITE 'ctrl z + enter' WHEN YOU FINISH YOUR TEXT TO SEE THE COUNTING\n\n");
   
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
            
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
            
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    
    printf("The number of lines: %d\n", nl);
    printf("The number of words: %d\n", nw);
    printf("The number of characters: %d\n", nc);
}
