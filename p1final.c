#include<stdio.h>
void input( float *base, float *height)
{
  printf("Enter the value for base \n");
 scanf("%f",base);
  printf("Enter the value of height\n");
  scanf("%f",height);
}
void find_area(float base, float height,float *area)
{
  *area=0.5*base*height;
}
void output(float base, float height, float area)
{
  printf("area of triangle  (base=%f and height=%f)is %f",base,height,area);
}
int main()
{
  float x,y,z;
  input(&x,&y);
  find_area(x,y,&z);
  output(x,y,z);
  return 0;
}