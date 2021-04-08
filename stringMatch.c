#include <stdio.h>
#include <stdlib.h>


char str[100], pat[100], rep[100], ans[100];
int hasMatched = 1;


int stringMatch() {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == pat[0]) {
            int j = 1;
            while (pat[j] != '\0') {
                if (pat[j] != str[i + j]) {
                    hasMatched = 0;
                    break;
                }
                j++;
            }
            if (hasMatched == 1) {
                int k = 0;
                while (rep[k] != '\0') {
                    ans[i + k] = rep[k];
                    k++;
                }
                i = k;
            }
            ans[i] = str[i];
        } else {
            ans[i] = str[i];
        }
        i++;
    }
}

void main() {
    printf("Enter main string: ");    // karan raj
    gets(str);
    printf("\nEnter pattern string: ");    // ara
    gets(pat);
    printf("\nEnter replacement string: ");    // fak
    gets(rep);

    stringMatch();
    if (hasMatched == 1) {
        printf("\nPattern not found in the given string.\n");
    } else {
        printf("\nThis is the result string after replacement: %s\n", ans);
    }
}
