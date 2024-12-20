#include <stdio.h>
int main()
{
    printf("hello word\n\n metti il nome ");
    char name[32];
    scanf("%s", name);
    printf("\thello %s\n\n\n", name);
    return 0;
}