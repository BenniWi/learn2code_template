#include <stdio.h>
#include<string.h>
#define MAX 50

struct developer
{
  char name[MAX];
  char alias[MAX];
}developer1;
struct developer developer2;


int creation()
{
  struct developer1 Laura;
  strcpy{Laura.name, "Laura Diep"};
  strcpy{Laura.alias, "DiepLau"};
  struct developer2 Leonie;
  strcpy{Leonie.name, "Leonie Paetzold"};
  strcpy{Leonie.alias, "LeonieOwO"};
}

  
  int main()
  {
          //dev Laura = { .name = "Laura Diep", .alias = "DiepLau" };
          //dev Leonie = {.name = "Leonie Paetzold", .alias = "LeonieOwO" };

  //Array with the two structures
  developers[]={developer1 Laura, developer2 Leonie};
  char *p = developers;
  //devs[developer1, developer2];
  int i=0;
  for(i=0;i<2;i++)
  {
   printf("------------------------\n"
          "Developer:\n"
          "Name: %s\n"
          "Alias: %s\n"
          "------------------------\n", p[i].name, p[i].alias );
   //printf("Name: %s Alias: %s \n ", string2, alias2); 
  }
  return 0;
  }