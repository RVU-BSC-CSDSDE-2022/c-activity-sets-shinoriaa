#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main()
{int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=compare(a,b,c);
  output(a,b,c,largest);
  }
int input()
{int n;
  printf("enter the number");
  scanf("%d",&n);
  return n;}
int compare(int a ,int b,int c)
{if((a>=b)&(a>=c))
{return a;}
else if ((b>=a)&&(b>=c))
{return b;
  }
  else if((c>=a)&&(c>=b))
  {return c;}
  }
void output(int a,int b,int c,largest)
{printf("largest number among %d %d %D is %d",a,b,c,largest);}


