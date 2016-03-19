//
//  Created by Nelson Odins-Jones on 19/03/2016.
//  A program to print out a text rendition of the flag of Israel
//

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

#define ISRAEL_HEIGHT 15
#define ISRAEL_WIDTH 39
#define ISRAEL_SECTION 3

#define DAVID_ROWS 9

void showIsrael(void);
void showStarOfDavid(int isInFlag);

int main(int argc, const char * argv[]) {
    showIsrael();

    return EXIT_SUCCESS;
}

// print the flag of israel

void showIsrael(void) {
    char blue = '*';
    char white = ' ';
    int h = 0;
    int i = 0;
    while (h < ISRAEL_HEIGHT) {
        i = 0;
        if (h == ISRAEL_SECTION) {
            showStarOfDavid(TRUE);
            h += DAVID_ROWS;
        } else {
            while (i < ISRAEL_WIDTH) {
                if ((h == 0) || (h == ISRAEL_HEIGHT - 1)){
                    printf("%c", white);
                } else if ((h < ISRAEL_SECTION) ||
                           (h >= ISRAEL_HEIGHT - ISRAEL_SECTION)) {
                    printf("%c", blue);
                }
                i++;
            }
            printf("\n");
            h++;
        }
    }
}

// print the star of david, with spaces of one third of the flag before
// if isInFlag is non zero, or on its own otherwise

void showStarOfDavid(int isInFlag) {
    char *rows[5] = {
        "      *      ",
        "     * *     ",
        "*************",
        " * *     * * ",
        "  *       *  "
    };
    char *spacer = "             ";
    int i = 0;
    if (isInFlag) {
        while (i < DAVID_ROWS) {
            if (i > DAVID_ROWS / 2){
                printf("%s%s\n", spacer, rows[DAVID_ROWS - 1 -i]);
            } else {
                printf("%s%s\n", spacer, rows[i]);
            }
            i++;
        }
    } else {
        while (i < DAVID_ROWS) {
            if (i > (DAVID_ROWS / 2)){
                printf("%s\n", rows[DAVID_ROWS - 1 -i]);
            } else {
                printf("%s\n", rows[i]);
            }
            i++;
        }
    }
}
