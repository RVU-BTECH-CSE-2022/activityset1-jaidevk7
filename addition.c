 #include <stdio.h>
int main()
{
  int base;
  int height;
  printf("Enter the base");
  scanf("%d", &base);
  printf("Enter the height");
  scanf("%d", &height);
  int area = base*height*0.5;
  printf("The area of triangle with base = %d and height = %d is %d\n", base, height, area);
  return 0;
}
