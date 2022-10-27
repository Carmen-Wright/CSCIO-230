/*
 * Implement your solution in thi file
 *
 */
#include "lab1.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>





char* readString(char* fileName)
  
  FILE * textfile = fopen(fileName,"r");
  char* readtext = malloc(MAX_LINE_LEN*sizeof(char));
  strcpy(textfile,fgets(textfile,MAX_LINE_LEN-1,openfile));
  fclose(readtext);

  return textfile;
  

  
  ;



char* mysteryExplode(const char* str);
 
 int length = strlen(str)-1; // Calculate size.
 int explode = ((length*(length+1))/2);
 char* outcome=calloc(explode, 1);  // Alocate space.
 
 for (int a=0; a<length; a++) {
    for(int a = 0; a <= b; a++){
      strcpy(outcome, strncat(outcome,&str[a],1));
    }
 }
 
 
 
return outcome;
}

