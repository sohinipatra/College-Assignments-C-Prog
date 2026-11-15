#include <stdio.h>
int main()
{
  char ch;
printf("Enter a lowercase character:");
scanf("%c", &ch);
switch(ch)
{
 case 'a':
 case 'e';
 case 'i';
 case 'o';
 case 'u';
printf("Vowel\n");
 break;
default:
printf ("Consonant\n");
}
return 0;
}
