#include <stdio.h>
#include <stdarg.h>
void Myprintf(const char *format, ...)
{
va_list args;
char buffer[BUFSIZ];

va_star(args, format);
vsnprintf(buffer, sizeof buffer, format, args);
va_end(args);
FlushFunnyStream(buffer);
}

int main(void)

{
printargs(5, 2, 14, 84, 97, 15, -1, 48, -1);
printargs(84, 51, -1);
printargs(-1);
printargs(1, -1);
return 0;
}
