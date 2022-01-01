// C Program to Write a Sentence to a File.

#include <stdio.h>
int main()
{
   FILE *ptr;
   ptr=fopen("sample.txt","w");
   printf("enter the sentence\n");
   char st[200];
   gets(st);
   fprintf(ptr,st);
   fclose(ptr);
}
