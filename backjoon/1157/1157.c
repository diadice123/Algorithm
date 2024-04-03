#include <stdio.h>
#include <string.h>

char str[1000001];
int arr[26];

int main(void) {
    int length, max = 0;
    char output;
    scanf("%s", str);
    length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (str[i] >= 'a') 
            arr[str[i] - 'a']++;
        else 
            arr[str[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i] > max) {
            max = arr[i];
            output = 'A' + i;
        }
        else if (arr[i] == max) {
            output = '?'; 
        }
    }

    printf("%c", output);

    return 0;
}