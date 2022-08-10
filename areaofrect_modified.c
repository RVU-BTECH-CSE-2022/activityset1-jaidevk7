#include<stdio.h>

float input(){

  float x;
  printf("enter here:");
  scanf("%f",&x);
  return x;
    }

float compute(float l,float b) 
{
  float a;
  a=l*b;
  return a;
  }

void output(float l,float b,float a)
{
  printf("the area of rectangle of length %f and breadth %f is %f\n",l,b,a);
  }

int main (void)
{
  float l,b,a;
  l = input();
  b = input();
  a = compute(l,b);
  output (l,b,a);
  return a;
  }
