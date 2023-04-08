#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//concatenating and printing of strings

int main(void) 
{ 
  char s1[200], s2[100];
  int count1, count2;
  printf("Please enter your first string of words (Please endeavour to put space after):\n");
  gets(s1);
    printf("\nPlease enter your second string of words:\n");
  gets(s2);
  system("clear");
  count1 = strlen(s1);
  count2 = strlen(s2);
  printf("\nFirst string: %s\n", s1);
  printf("\nSecond string: %s\n", s2);
  strcat(s1, s2);
  
  printf("\nString after concatenation: %s\n", s1);
  
  printf("\nThe lenght of your first string is = %d\n", count1);
   printf("\nThe lenght of your second string is = %d\n", count2);
printf("\nLenght of both strings = %d\n", count1 + count2);
  printf("\n\nEnd of program\n");
 
  sleep(20);
  system("clear");
 printf("Welcome, User");
}