    #include<stdio.h>
    int main()
{
    int a,b,c,i;
    printf("Enetr two numbers to perform various operations\n");
    scanf("%d%d",&a,&b);
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");
    printf("which action you want to perform\n");
    scanf("%d",&i);
    switch(i)
  {
    case 1:
     c=a+b;
      printf("addittion of two numbers is %d",c);
       
        break;
    case 2:
     c=a-b;
      printf("subtraction of two numbers is %d",c);
      
        break;
    case 3:
        c=a*b;
      printf("multiplication of two numbers is %d",c);
      break;
       case 4:
     c=a/b;
      printf("division of two numbers is %d",c);
      break;
       case 5:
         break;
         default:
         printf("Enter a valid number");
 

  }
    return 0;
}
