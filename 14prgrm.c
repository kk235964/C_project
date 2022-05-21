#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character..\n");
    scanf("%c",&ch);
    if (ch==65||ch==73||ch==79||ch==85||ch==65+32||ch==73+32||ch==79+32||ch==85+32)
    printf("Vowel\n");
    else
    printf("Consonent\n");
    return 0;

}