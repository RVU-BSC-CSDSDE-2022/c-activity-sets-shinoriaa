#include <stdio.h>
int main()
{
  a=input();
b=input();
c=sum(a,b);
  output();
  
}
int input(int a ,int b)
{int n;
  printf("enter your number \n");

  scanf("%d",&n);
  return n;
  }
int sum(int a,int b,int c)
{*c=*a+*b;
  return c;
  }
void output(int a,int b,int c)
{printf("sum of %d and %d is %d");
  }