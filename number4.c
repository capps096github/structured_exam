#include <stdio.h>
#include <string.h>

char password[5];

int main()
{
  printf("Enhancing System Security With Passwords\n\n");

  printf("Enter password: ");
  scanf("%5s", &password);

  printf("%s", password);

  return 0;
}
