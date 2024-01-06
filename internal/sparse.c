#include <stdio.h>
#include <stdlib.h>
int main(){
	int m,n,i,j;
	int size = 0;
	printf("Enter the row and column of sparse matrix\n");
	scanf("%d%d",&m,&n);
	int matrix[m][n];
	printf("Enter the sparse matrix\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(matrix[i][j]!=0){size++;}
		}
	}
	int k =0;
	int sparse_matrix[size][3];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(matrix[i][j]!=0){
				sparse_matrix[k][0]=i;
				sparse_matrix[k][1]=j;
				sparse_matrix[k][2]=matrix[i][j];
				k++;
			}
		}
	}
	for(i=0;i<size;i++){
		for(j=0;j<3;j++){
			printf("%d\t",sparse_matrix[i][j]);
		}
		printf("\n");
	}
	int value;
	printf("Enter the value to be searched\n");
	scanf("%d",&value);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(matrix[i][j]==value && matrix[i][j]!=0){
				printf("The %d is at row %d column %d\n",value,i,j);
			}
		}
	}
}
