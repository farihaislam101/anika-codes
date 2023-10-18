
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[1001];
    printf("Enter a string: ");
    fgets(a, 1001, stdin);

    // Remove the trailing newline character
    size_t len = strlen(a);
    if (len > 0 && a[len - 1] == '\n') {
        a[len - 1] = '\0';
    }

    int st = len - 1;
    int pal = 1;
    int i = 0, j = st;

    // Convert characters to lowercase for case-insensitive comparison
    while (i < j) {
        if (tolower(a[i]) != tolower(a[j])) {
            pal = 0;
            break;
        }
        i++;
        j--;
    }

    if (pal == 1) {
        printf("YES, it's a palindrome.\n");
    } else {
        printf("NO, it's not a palindrome.\n");
    }
    return 0;
}
