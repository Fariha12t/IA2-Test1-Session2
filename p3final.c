#include <stdio.h>

int input_number()
{
  int n;
  printf("Enter the number:\n");
  scanf("%d", &n);
  return n;
}

int is_composite(int n)
{
  for (int i = 2; i <= n/2; i++)
  {
    if (n%i == 0)
      return 1;
  }
  return 0;
}

void output(int n, int Composite)
{
  if (Composite)
    printf("%d is a composite number\n", n);
  else 
    printf("%d is not a composite number\n", n);
}

int main()
{
  int n,x;
  n= input_number();
  x = is_composite(n);
  output(n, x);
  return 0;
}