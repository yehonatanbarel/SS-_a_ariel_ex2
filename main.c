#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"
#define true 1
#define false 0

int main(){



while(true){

    char userInput;
    scanf("%c", &userInput);
    switch (userInput)
    {
    case 'A': ;
            // int input_1[10][10] = { 
            //             {0,3,1,0,0,2,0,0,0,0},
			// 			{3,0,1,0,0,0,0,0,0,0},
			// 			{1,1,0,0,0,0,0,0,0,0},
			// 			{0,0,0,0,0,0,0,5,0,0},
            //             {0,0,0,0,0,0,0,4,1,1},
            //             {2,0,0,0,0,0,2,0,0,0},
            //             {0,0,0,0,0,2,0,0,0,0},
            //             {0,0,0,5,4,0,0,0,0,2},
            //             {0,0,0,0,1,0,0,0,0,0},
            //             {0,0,0,0,1,0,0,2,0,0}
			// 		};
       // printf("this is A\n");
       
       int mat[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                scanf("%d",&mat[i][j]);
            }
        
        }
        A(mat);
            // for (int i = 0; i < 10; i++)
            // {
            //     for (int j = 0; j < 10; j++)
            //     {
            //         printf("%d\t",mat[i][j]);
            //     }
            //     printf("\n");
        
            // }
        break;
    
    case 'B': ;
       // printf("this is B\n");
       int x,y;
       scanf("%d%d",&x,&y);
       B(x,y);
        break;
    case 'C': ; 
        int k,m;
        scanf("%d%d",&k,&m);
        C(k,m);
        //printf("this is C\n");
        break;
    case 'D':
        //printf("this is D\n");
        exit(0);
        break;
    }
}






    return 0;
}


