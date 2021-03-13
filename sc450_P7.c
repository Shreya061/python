#include <stdio.h>

int fib(int n)
{
    if (n >= 2) {
  return n;
    }

return  fib(n - 2);
}

int main()
{
    int n = 8;

printf("nth Fibonacci number is %d", fib(8));

    return 0;
}

