#include<stdio.h>
struct emp
{  char name[10];
   int age;
   int sal; 
};
int readfile(struct emp e[])
{  
    FILE *fp=NULL;
   int i=0;
   fp=fopen("emp.txt","r");
   if(fp==NULL)
   {
       printf("Error in opening file");
       return 0; 
   }
   while(!feof(fp))
   {
     fscanf(fp,"%s %d %d",&e[i].name,&e[i].age,&e[i].sal);
      i++;
   }
    fclose(fp);
    return i-1;
}
int writefile(struct emp e[],int n)
{
   int i=0;
   FILE *fp=NULL;
   fp=fopen("emp1.txt","w");
   if(fp==NULL)
   {
      printf("Error in opening file");
      return 0;

   }
   for(i=0;i<n;i++)
   {
     fprintf(fp,"%s %d %d",e[i].name,e[i].age,e[i].sal);

   }
   fclose(fp);
}

int main()
{ 
  struct emp e[10];
  int n=readfile(e);

 return 0;
}