#include<stdio.h>
int g=2; //global variable
void disp()
{
  int l=10; //local variable
  static int s=5; //static variable
  register int r=4; //register variable
  printf("global variable: %d\n",g++);
  printf("local variable: %d\n",l++);
  printf("static variable: %d\n",s++);
  printf("register variable: %d\n\n",r++);	
}
int main()
{
	disp();
	disp();
	disp();
	return 0;
}
