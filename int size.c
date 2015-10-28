How to find size of integer data type without using sizeof operator in c programming language  


#include<stdio.h>

int main(){

  int *ptr = 0;

  ptr++;
  printf("Size of int data type:  %d",ptr);

  return 0;

}
