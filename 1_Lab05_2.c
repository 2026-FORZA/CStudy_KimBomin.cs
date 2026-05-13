#include <stdio.h>

int n;

char grade(int n)
{
  if(100 >= n && n >= 90) return 'A';
  else if (80 <= n && n < 90) return 'B';
  else if (70 <= n && n < 80) return 'C';
  else if (60 <= n && n < 70) return 'D';
  else if (0 <= n && n < 60) return 'F';

  }
  

int main()
{
  scanf("%d", &n);
  printf("%c", grade(n));
  return 0;
}