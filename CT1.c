/*
Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.
*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1001],i;
  int f,j;
  scanf("%s",&s);
  for(i=48;i<58;i++)
  {   f=0;
      for(j=0;j<strlen(s);j++)
      {
          if(s[j]==i)
          {
              f++;
          }
      }
      printf("%d ",f);
  }   
    return 0;
}
