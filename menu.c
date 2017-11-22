    #include<stdio.h>
    int main()
{
    int a,b,c,i;
    printf("Enetr two numbers to perform various operations\n");
    scanf("%d%d",&a,&b);
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Exit\n");
    printf("which action you want to perform\n");
    scanf("%d",&i);
    switch(i)
  {
    case 1:
     c=a+b;
      printf("\naddittion of two numbers is %d\n",c);
       
        break;
    case 2:
     c=a-b;
      printf("\nsubtraction of two numbers is %d\n",c);
   
        break;
     case 3:
     
        break;
        
          
  }
    return 0;
}
