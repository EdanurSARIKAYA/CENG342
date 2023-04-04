#include <stdio.h>
#include <stdlib.h>
#include <hellomake.h>

//Edanur SARIKAYA 19050111004
int main(int argc, char* argv[])
{


   int r=atoi(argv[1]);
   int c=atoi(argv[2]);
   int i , j;

   //allocating memory
    double** matrix = (double**)malloc(r * sizeof(double*));
    for(i = 0; i < r; i++)
        matrix[i] = (double*)malloc(c * sizeof(double));


    double *vector = (double *)malloc(c * sizeof(double));

    double *output = (double *)malloc(r* sizeof(double));

	//seed of random number
	srand48(19050111004);

	for(i = 0; i<r; i++){

     	for(j = 0; j<c; j++){
     		//Random number for matrix
	     matrix[i][j]  = ((double)rand() / RAND_MAX) * 99.0 + 1.0;;
     	}
	}


    for(j = 0; j<c; j++){
    	//Random number for vector
	     vector[j] = ((double)rand() / RAND_MAX) * 20.0 + 1.0;;
     	}


	for(i = 0; i<r; i++){

     	for(j = 0; j<c; j++){
	     //Matrix and vector multiplicaton
		  output[i] += matrix[i][j]*vector[j];
     	}
	}
	
	writeFile_make(argv[3], output, r);


    for (i = 0; i < r; i++) {
      free(matrix[i]);
   }
   free(matrix);
   free(vector);
   free(output);




	    return 0;
	}

