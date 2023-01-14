#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
  float n,sqrroot;
  n=input();
  sqrroot=square_root(n);
  output(n,sqrroot);
  return 0;
}
float input()
{
  float n;
  printf("enter your number");
  scanf("%f",&n);
  return n;
}
float square_root(float n)
{
  float temp=0,sqrroot=0;
  sqrroot=n/2;
  while(temp!=sqrroot)
    {temp=sqrroot;
      sqrroot=((n/temp)+temp)/2;}
  return sqrroot;
  }
void output(float n,float sqrroot)
{
  printf("square root of %f is %f",n,sqrroot);
}
