#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}

return (0);
}

