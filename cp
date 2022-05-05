#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#define DATA_SIZE 1000

void main()
{
    // source file and target file
    char ch, source_file[20],target_file[20];

    // pointers to those files
    FILE *source, *target;
    
    printf("\n\nCopy Function\n");
    printf("Enter the name of file to copy: ");
    gets(source_file);

    // open source file in read mode
    source = fopen(source_file,"r");
    
    // Handle empty files
    if (source == NULL) {
        printf("Press any key to exit...\n");
        exit(EXIT_FAILURE);
    }
    
    printf("Enter name of target file: ");
    gets(target_file);
    
    // open source file in write mode
    target = fopen(target_file,"w");
    
    if (target == NULL) {
        fclose(source);
        printf("Press any key to exit...\n");
        exit(EXIT_FAILURE);
    }

    // while character from source is not EOF 
    while ((ch = fgetc(source)) != EOF)
        fputc(ch, target);
    // put chraracters into target file

    printf("File copied successfully. \n");
    
    // close both files
    fclose(source);
    fclose(target);

}
