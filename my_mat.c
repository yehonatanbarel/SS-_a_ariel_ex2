#include<stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

int mat[10][10];

//======================== FLOYD ALGO ============================
void floydWarshallAlgo(int matrix[10][10])
{

	int i; 
    int j;
    int k;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			mat[i][j] = matrix[i][j];

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 10; j++)
			{
				if (mat[i][k] + mat[k][j] < mat[i][j])
					mat[i][j] = mat[i][k] + mat[k][j];
			}
		}
	}

}

//======================= FLOYD ALGO ===========================

//============= AUXILIARY FUNCTIONS ============
void changeZeroToInf(int mat[10][10]){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ( mat[i][j] == 0 && i != j)
            {
                mat[i][j] = 999;
            }
            
        }
        
    }
}

void changeZeroAndIntToMinus(int mat[10][10]){
        for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ( mat[i][j] == 0 || mat[i][j] == 999)
            {
                mat[i][j] = -1;
            }
            
        }
        
    }

}

// ============ A ===============

void A(int matrix[10][10]){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mat[i][j] = matrix[i][j];
        }
    } 
    changeZeroToInf(mat);
    floydWarshallAlgo(mat);
    changeZeroAndIntToMinus(mat);
}

// ============ B ===============
void B(int i, int j){
    if (mat[i][j] != -1 )   
    {   
        printf("True\n");
    }else{
         printf("False\n");
    }
   
}


// ============ C ===============
void C( int i, int j){
        printf("%d\n", mat[i][j]);
}

// ============ D ===============
void D(){
    exit(0);
}
