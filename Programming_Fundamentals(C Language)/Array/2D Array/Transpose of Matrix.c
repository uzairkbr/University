//Author: Uzair Ahmad

#include <stdio.h>

int main(){
	
	int row , cols ;
	
	// Taking Input for Number of Rows and Columns of Matrix
	printf("How Many Rows : ");
	scanf(" %d", &row);
	
	printf("How Many Columns : ");
	scanf(" %d", &cols);
	
	int arr[row][cols];
		
	// Taking Input for Matrix
	for(int i = 0 ; i < row ; i++)
	{
		for(int j = 0 ; j < cols ; j++)
		{
			printf("Enter Values for Index %d%d : ", i,j);
			scanf(" %d", &arr[i][j] );
			
			printf("\n");
		}
	}
	
	// Printing Original Matrix
	printf("Origional Matrix \n");
	for(int i = 0 ; i < row ; i++)
	{
		for(int j = 0 ; j < cols ; j++)
		{
			printf("%d ", arr[i][j] );
		}
		printf("\n");
	}
	
	// Transpose of Matrix 
	printf("Transpose of Matrix \n");
	for(int i = 0 ; i < cols ; i++)
	{
		for(int j = 0 ; j < row ; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	
	return 0 ;

}
