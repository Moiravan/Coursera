#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) 
{
   char delimenters[] = ".";
   char input[] = "this is. is ao . ae . ae";
   char file[127][127];
   char *start;
   int file_count = 0;

    char *c="abcdasddef";
    char d[100];
    char f[] = "abcdef";
    char e[]={'a','b','c','d','e','f'};
    
    printf("%lu %lu\n",sizeof(c),strlen(c));    //8 10
    printf("%lu %lu\n",sizeof(d),strlen(d));    //100 0 
    printf("%lu %lu\n",sizeof(f),strlen(f));    //7 6
    printf("%lu %lu\n",sizeof(e),strlen(e));    //6 12

   start = strtok(input, delimenters);
   while(start != NULL)
   {
      strcpy(file[file_count], start);
      file_count++;
      
      start = strtok(NULL, delimenters);
   } 

   for(int i = 0; i < file_count; i++)
   {
       char delimenters1[] = " "; 
       char *sec;
       sec = strtok(file[i], delimenters1);
       int count = 0;
       while(sec != NULL){
           if(!strcmp(sec, "and") ||!strcmp(sec, "of") ||!strcmp(sec, "the") )
                    continue;
           printf("%c", toupper(sec[0]));
           sec = strtok(NULL, delimenters1);
       }
       printf(" ");
   }
   
   return 0;
}




