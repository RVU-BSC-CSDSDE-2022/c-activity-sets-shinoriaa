#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int main()
{
  int n,sum;
  n=input_n();
  sum=sum_n_nos(n);
  output(n,sum);
  return 0;
  }
int input_n()
{
  int n;
  printf("enter your natural number");
  scanf("%d",&n);
  return n;
}
int sum_n_nos(int n)
{
  int sum=0;
  int i;
  for(i=1;i<=n;i++)
    {sum=sum+i;}
  return sum;
}
void output(int n,int sum)
{
  printf("sum of all the natural numbers till %d is %d",n,sum);
  }
