#include<stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
int main()
{
  int n;
n=get_n();
Complex array[n];
input_n_complex(n,array);
Complex result;
result=add_n_complex(n,array);
output(n,array,result);
return 0;
  }
int get_n()
{
  int n;
  printf("enter the array size");
  scanf("%d",&n);
  return n;
  }
  Complex input_complex()
{
Complex c;
  printf("enter the real part and imaginary part of the complex number");
  scanf("%f %f",&c.real,&c.imaginary);
  return c;
  }
void input_n_complex(int n,Complex c[n]);
{
  int i;
  for (i=0;i<n;i++);
  {
    c[i]=input_complex();
    }
  }
Complex add(Complex a,Complex b)
{
  Complex add;
add.real=a.real+b.real;
  add.imaginary=a.imaginary+b.imaginary;
  return add;
  }
Complex add_n_complex(int n,Complex c[n])
{
  Complex result;
  result.real=0;
  result.imaginary=0;
  int i;
  for (i=0;i<n;i++)
    {
      result=add(result,c[i]);
    }
}
  
}

