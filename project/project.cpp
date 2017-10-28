#include<stdio.h>
#include<conio.h>
int fibo(int b)
{
   if (b <= 1)
      return b;
   return fibo(b-1) + fibo(b-2);
}

int main ()
{
  int t=0;
  scanf("%d", &t);
  int n[t];
  for(int i=0; i<t;i++)
  {
  	scanf("%d",&n[i]);
  	n[i]=n[i]+2;
  }

  for(int i=0; i<t; i++)
  	printf("%d\n", fibo(n[i]));
  getch();
  return 0;
}
