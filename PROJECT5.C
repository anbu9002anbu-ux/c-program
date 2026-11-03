#include<stdio.h>
int main()
{
  FILE*fp;
  char ch;
  fp=fopen("data.txt","w");
  if(fp==NULL)
  {
     printf("error");
     }
     fprintf(fp,"c is easy to learn and understand it is excute quickly it supports both lowlevel and high levelprogramming features");
     fclose(fp);
     fp=NULL;
     fp=fopen("data.txt","r");
     while((ch= fgetc(fp))!=EOF)
     {
       printf("%c",ch);
       }
       fclose(fp);
       fp=NULL;
       fp=fopen("data.txt","a");
       if(fp==NULL);
       {
	 printf("error");
	 }
	 fprintf(fp,"program trainers character was good sir explains the concept clearly his teaching method is easy to understand he teaches step by step he explains program with example");
	 fclose(fp);
	 fp=NULL;

	 return 0;
	 }















