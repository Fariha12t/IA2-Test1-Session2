#include<stdio.h>
void input_string(char a)
{
  char str[40];
  printf("Enter a string to be reversed\n");
  scanf("%s", str);

}
char str_reverse(char a)
{
  int j,len,str;
  len=str_reverse(str);
  for(int i=len-1;i>=0;i--)
  {
    char reverse[40],str[40];
    reverse[j++]=str[i];
    reverse[i]='\0';
  }

}
void output(char a,char *reverse)
{
  printf("After the reverse of a string:%s",reverse);
}
int main()
{
  int len;
  char a,reverse;
  input_string(a);
  str_reverse(reverse);
  output(a, &reverse);
  return 0;
 
}