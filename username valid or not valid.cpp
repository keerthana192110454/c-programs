#include <stdio.h>
#include <string.h>
int main()
{
 char str1[20], str2[20];
 printf("Enter a username: ");
 scanf("%s",str1);
 printf("ReEnter the user name: ");
 scanf("%s",str2);
 if (strcmp(str1, str2) == 0)
 {
  printf("Yes ,user name is valid\n");
}
 else
 {
 printf("No, username is invalid\n" );
}
}
