#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int start, int end) {
    if (start == end) {
        printf("%s\n", str); 
    } else {
        for (int i = start; i <= end; i++) {
            swap((str + start), (str + i));
            permute(str, start + 1, end); 
            swap((str + start), (str + i)); 
        }
    }
}

void geneperm(char *str) {
    int n = strlen(str);
    permute(str, 0, n - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("All permutations of the string:\n");
    geneperm(str);
    return 0;
}
