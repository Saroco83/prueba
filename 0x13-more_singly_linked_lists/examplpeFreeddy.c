#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int n;
int *p;

n = 8;
p = &n;
printf("Addres of n es %p\n",(void *)&n);
printf("Addres of p es %p\n",p);
printf("Addres of &p es %p\n",&p);



return(0);
}
