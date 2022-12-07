#include<stdio.h>

int input();
int add(int a,int b);
void output(int a, int b, int sum);

int main()
{
  int a,b,sum;
  a=input();
  b=input();
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
  }
int input()
{
  int n;
  printf("Enter the number")
  int a,b,sum;
  printf("enter the 2 numbers:");
  scanf("%d%d",&a,&b);
  sum=add(a,b);
  printf("the sum of %d and %d is %d\n",a,b,sum);

  }
int add(int x,int y)
{
  int sum;
  sum=x+y;
  return sum;  
  }