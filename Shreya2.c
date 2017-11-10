/****************************Largest of three numbers using Loop ***************************/


#include<stdio.h>

int main()

{
   int Num1,Num2,Num3;
   printf("\nEnter three numbers:");
   scanf("%d%d%d",&a,&b,&c);

  if((Num1>Num2)&&(Num1>Num3))
 {
    printf("\nLargest number is :%d",Num1);
 }
  else if((Num2>Num1)&&(Num2>Num3))
 {
    printf("\nLargest number is :%d",Num2);
 }
  else
    printf("\nLargest number is :%d",Num3);

return 0;

}
/***********************************Output**********************************
dell@dell-OptiPlex-7040:~$ gcc Largest.c
dell@dell-OptiPlex-7040:~$ ./a.out

Enter three numbers:5 6 7

Largest number is :7 dell@dell-OptiPlex-7040:~$ 
*/


