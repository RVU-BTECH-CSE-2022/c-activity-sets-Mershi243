#include<stdio.h>

int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main()
{
  int n;
  n=input_n();
  int sum;
  sum=sum_n_nos(n);
  output(n,sum);
  return 0;
}

int input_n() 
{
  int n;
  printf("Enter the number:\n");
  scanf("%d",&n);
}

int sum_n_nos(int n)
{
  int sum;
  for(int i=1; i<=n;i++)
  {
    sum+=i
  }
  return sum;
}
void output(int n, int sum)
{
  printf("The sum %d natural number is %d",n,sum);
}