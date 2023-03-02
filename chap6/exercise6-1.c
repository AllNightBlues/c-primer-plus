#include <stdio.h>


int main(void) {

    char chars[26];

    for (int i = 0; i < 26; ++i)   {
        chars[i] = (char) 97 + i;
        printf("%c ", chars[i]);
    }

}