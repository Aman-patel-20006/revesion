#include <stdio.h>

int main() {
    FILE *fptr;
    char name[20];
    //write 
    fptr=fopen("name.txt","w");
    fgets(name,sizeof(name),stdin);
    fprintf(fptr,"%s",name);
    fclose(fptr);
    fptr=fopen("name.txt","r");
    fgets(name,sizeof(name),fptr);
    printf("%s",name);
       return 0;
}
