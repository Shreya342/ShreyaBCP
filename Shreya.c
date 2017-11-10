
#include<stdio.h>
int main()
{
                   
   int disp[2][3];  /* 2D array declaration*/
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++)    
{
      for(j=0;j<3;j++)
 {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
  }
                                                 
   printf("Two Dimensional array elements:\n");  //Displaying array elements
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}

/*********************************output***************************/
dell@dell-OptiPlex-7040:~$ gcc Shreya.c
dell@dell-OptiPlex-7040:~$ ./a.out
Enter value for disp[0][0]:3
Enter value for disp[0][1]:4
Enter value for disp[0][2]:5
Enter value for disp[1][0]:6
Enter value for disp[1][1]:7
Enter value for disp[1][2]:7
Two Dimensional array elements:
3 4 5 
6 7 7 
dell@dell-OptiPlex-7040:~$ 


