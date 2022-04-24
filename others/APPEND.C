//copy a file into another file
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main(int argc,char *argv[])
{
  FILE *from,*to;
  char ch;
clrscr();
//see if correct no of command line arguments
  if(argc!=3){
    printf("\nUsage : copy <source> <destination>");
    exit(0);
  }
//open source file
  if((from=fopen(argv[1],"r"))==NULL){
    printf("\n source file could not be opened");
    exit(0);
  }
//open destination file
  if((to=fopen(argv[2],"a+"))==NULL){
    printf("\ndestination file could not be opened");
    exit(0);
  }


  while(!feof(from)){
    ch=fgetc(from);
    if(ferror(from)){
      printf("\nerror reading source file");
      exit(0);
    }
    if(!feof(to))
       fputc(ch,to);
    if(ferror(to)){
      printf("\nerror writing file");
      break;
    }
  }
  fclose(from);
  fclose(to);


}

