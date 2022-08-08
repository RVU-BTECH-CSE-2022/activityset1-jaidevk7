#include <stdio.h>
int main (void)
{
  int x,y,result;
  x=input("enter first numer");
  y=input("enter second number");
  result = add(x,y);
  output(x,y,result);
  return 0;
}

int input(char s[])
{
  int x2;
  printf("enter %s",s);
  scanf("%d",&x2);
  return x2;
}
int add(int p,int z)
{
  int res;
  res = p+z;
  return res;
}

void output(int x,int y,int result)
{
  printf("\nthe addition of %d,%d is %d",x,y,result);
 }