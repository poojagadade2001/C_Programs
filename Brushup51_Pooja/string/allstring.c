/*Demonstrate all string function using library function.*/

#include <stdio.h>
#include <string.h> 

int main() {
  char name[50], name1[50], name2[50], ch = 'B'; 
  char *x; 
  
                                       
  printf("Enter 1st string:");
  gets(name); 
  
  printf("Enter 2nd string:");
  gets(name1);
   
  printf("strlen() function: %d\n",strlen(name));
  printf("strcat() function: %s\n",strcat(name, name1)); 
                               
  strcpy(name2, name); 
  
  printf("strcpy() function: %s\n", name2);
  
  printf("strcmp() function: %d\n",strcmp(name, name1)); 
  //printf("strlwr() function: %s\n",strlwr(name)); 
  //printf("strupr() function: %s\n",strupr(name)); 
  
  x = strchr(name, ch); 
  printf("strchr()function. The string after ch is: %s\n",x); 
  x = strstr(name, name1);
   
  printf("strstr() function: %s", x);
  return 0;
  }
