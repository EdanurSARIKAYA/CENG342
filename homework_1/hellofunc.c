#include <stdio.h>
#include <stdlib.h>
#include <hellomake.h>
//Edanur SARIKAYA 19050111004
    void writeFile_make(char *output_file, double *output, int r) {
    FILE *file; 

    file = fopen(output_file, "w");


    if (file == NULL) {
        printf("CANNOT OPEN.\n");
        exit(1);
    }

    int k;
    fprintf(file, "%s\n", "output");
    for(k = 0; k<r ;k++){
    	//Write output to file
	    fprintf(file, "%.2lf\n", output[k]);
}


    fclose(file);
    
     printf("File written successfully\n");
     return;
    
}

   
