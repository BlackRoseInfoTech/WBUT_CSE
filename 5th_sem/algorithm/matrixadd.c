//Write A C program to implement addition of Matrix.

#include <stdio.h>
int main()
{
  //Declaring Variables And Maximum Array Sizes
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
   printf("Enter the number of rows and columns of matrix\n");
   //Maximum Array Size While Running The Program
   scanf("%d%d", &m, &n);
   //Scanning the elements of the 2 matrices
   printf("Enter the elements of first matrix\n");
   for (c = 0; c < m; c++)
   {
     for (d = 0; d < n; d++)
     {
       scanf("%d", &first[c][d]);
     }
   }
   printf("Enter the elements of second matrix\n");
   for (c = 0; c < m; c++)
   {
     for (d = 0 ; d < n; d++)
    {
      scanf("%d", &second[c][d]);
    }
  }
  //Addition of the 2 Matrices and printing the answer.
  printf("Sum of entered matrices:-\n");
  for (c = 0; c < m; c++)
  {
    for (d = 0 ; d < n; d++)
    {
      sum[c][d] = first[c][d] + second[c][d];
      printf("%d\t", sum[c][d]);
    }
      printf("\n");
   }
   return 0;
}

/*
OUTPUT:~

Enter the number of rows and columns of matrix
3 3
Enter the elements of first matrix
2
4
3
8
7
9
1
5
6
Enter the elements of second matrix
2
3
4
5
8
9
7
6
1
Sum of entered matrices:-
4       7       7
13      15      18
8       11      7

*/
