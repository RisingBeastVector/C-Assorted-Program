// WAP TO TAKE AN ALPHABET AND CHECK IF IT IS VOWEL OR NOT.

#include <stdio.h>

int main() {
    char ch;
    printf("ENTER AN ALPHABET : ");
    scanf("%c",&ch);
    if(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
    {
        printf("%c IS A VOWEL",ch);
    }
    else if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
    {
        printf("%c IS A VOWEL",ch);
    }
    else
    {
        printf("%c IS NOT A VOWEL",ch);
    }
    return 0;

}
