#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
    int i, p=0;;
    int c;
    char file_name[100];
    char  search[10];

    printf("Enter the file name:");
    scanf("%s", file_name);
    printf("Search word:");
    scanf("%s", search);

    FILE *f = fopen((strcat(file_name, ".txt")), "rb");
    fseek(f, 0, SEEK_END);
    long pos = ftell(f);
    fseek(f, 0, SEEK_SET);

    char *bytes = malloc(pos + 1);
    fread(bytes, pos, 1, f);
    bytes[ pos ] = '\0';

/*search*/

    if (strstr(bytes, search) != NULL){
        printf("Found\n");
        p = 1;}
    else{
        printf("Not found\n");
        p=0;}

    free(bytes);

   char *found = strstr( bytes, search );
   if ( found != NULL )
   {
    char *lineStart;
    printf("%d\n", 3);
    for(lineStart = strchr(bytes, '\n'); !strcmp(lineStart,"\n"); lineStart = strchr(lineStart+1, '\n')){
      printf("%s\n", lineStart);
   }
  }
}
