#include <stdio.h>
#define MAX_FILE_NAME 100
  
int main(){
    FILE *fp;
    FILE *newfile;
    int count = 0;
    char filename[MAX_FILE_NAME];
    char c;

    printf("Enter file to count and transform: ");
    scanf("%s", filename);
  
    fp = fopen(filename, "r");
    newfile = fopen("newfile.txt", "w");
    if (fp == NULL) {
        printf("Could not open file %s",
               filename);
        return 0;
    }
  
    for (c = getc(fp); c != EOF; c = getc(fp)){
        count = count + 1;
        c++;
        putc(c, newfile);
    }
    fclose(fp);

    printf("The file %s has %d characters\n ",
           filename, count);
  
    return 0;
}


