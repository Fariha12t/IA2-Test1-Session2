#include<stdio.h> 

void input_string(char *a)
{
  printf("Enter the string\n");
  scanf("%s",a);  
} 
char str_reverse(char *a)
{
 int m=0;
  for(int i=0;a[i]!='\0';i++)
    m++;
  return m;
}
void output(char *a, char *reverse_a)
{
  printf("the reverse of %s is \n",a);
  for( int i=*reverse_a-1;a[i]!='\0';i--)
   printf("%c",a[i]);
  
}
int main()
{
  char a[20];
  char b[20];
  input_string(a);
  *b=str_reverse(a);
  output(a,b);
  return 0;
  
}
 