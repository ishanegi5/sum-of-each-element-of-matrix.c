#include<stdio.h>
void main()
{ int row,column,sum=0;
printf("Enter row= ");
scanf("%d",&row);
printf("Enter column= ");
scanf("%d",&column);
int matrix1[row][column],matrix2[row][column];
printf("Enter element of matrix1: \n");
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++)
    {
        printf("Enter element (%d,%d)= ",i,j);
        scanf("%d",&matrix1[i][j]);
      
      }
}
printf("Enter element of matrix2: \n");
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++)
    {
        printf("Enter element (%d,%d)= ",i,j);
        scanf("%d",&matrix2[i][j]);
        
      }
}
printf("The sum of matrix1 & matrix2 of order (%d,%d) is=\n",row,column);
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++)
    { sum=matrix1[i][j]+matrix2[i][j];
    printf("%d",sum);
    printf(" ");
      }
      printf("\n");
}
}