#include <stdio.h>
int main (int argc, char *argv[]){
   int name []={0, 0, 0, 0,  0, 8};
    char surname [40];
    int *a=name; 

    int *b=surname; 


    printf ("a=%p\nb=%p\n",a,b);
/*    scanf("%s",name);
    printf ("Please input your name:");
    scanf("%s",name);
    printf("Please input you last name:");
    scanf("%s",surname);
    printf("Hello ,%s\n,%s\n",name,surname);
 */   return 0;
}




