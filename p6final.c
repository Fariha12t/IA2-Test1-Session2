#include <stdio.h>

void input_string(char *a)
{
  printf("Enter the string:\n");
  scanf("%s", a);
}
int string_length(char *str)
{
  int len=0;
  while(str[len]!='\0')
    len++;
  return 0;
}
/*
void string_copy(char *d, char *s)
{
  for(int i=0;s[i]!='\0';i++)
    d[i]=s[i];
}*/

char str_reverse(char *str)
{
  int len,temp;
  
  len = string_length(str);
  
  for (int i = 0; i< (len-1)/2; i++)
  {
     temp= str[i];
     str[i] = str[temp-1-i];
     str[temp-1-i] = temp;
    }
  
  return temp;
}

void output(char *a, char *reverse_a)
{
  printf("The reverse of %s is %s\n", a, reverse_a);
}

int main()
{
  char str[100],x[100];
  input_string(str);
  
  
  str_reverse(x);
  output(str,x);
  return 0;
}

