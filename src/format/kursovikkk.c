#include "functions.h" 
#include <string.h>

int main()
{
 //   Cleanabz();
    char c;
    char *fn;
    int ds = 40;
    int e = 0;
    fn=*selectfail();
//    nof();
  //  save();
    while (1) {
        //system("clear");
        puts("  ");
        puts("  ** Formatter **");
        puts("  ");
        puts("  1 - Select file");
        puts("  2 - Clean all file");
        puts("  3 - Change string length ");
        puts("  4 - No format");
        puts("  5 - Format ");
        puts("  6 - Paragraph ");
        puts("  0 - Exit");
        puts("  ");

        c = getchar();
        switch (c) {
        case '1':
            fn=*selectfail();
            break;
        case '2':
          //  Clean(fn);
            break;
 /*       case '3':
            ds = strlong();
            fo();
            break;
        case '4':
            Cleanabz();
            nof();
            break;
        case '5':
            fo();
            break;
        case '6':
            paragraph();
            break;  */
        case '0':
            e = ds;
            ds = e;  
            return 0;
        }
    }

    getchar();

    return 0;
}
