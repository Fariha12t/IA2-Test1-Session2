#include <stdio.h>

int input_array_size()
{
  int length;
  printf("Enter the length of the array:\n");
  scanf("%d", &length);
  return length;
}

void input_array(int n, int a[n])
{
  printf("Enter all values of the array:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
}
int sum_composite(int n, int a[n])
{
  int k,sum=0,count=0;
  for(int i=0;i<n;i++)
  {
    for(k=1;a[i]%k==0 && k<a[i];k++)
    {
      count++;
    }
    if(count>2)
    sum=sum+a[i];
  }
  return sum;
}
void output(int sum)
{
  printf("Sum of all composite numbers is %d",sum);
}
int main()
{
  int n,result;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  result=sum_composite(n,a);
  output(result);
  return 0;
}



