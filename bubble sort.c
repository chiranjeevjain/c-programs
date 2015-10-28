Source code of simple bubble sort implementation using array ascending order in c programming language

#include<stdio.h>
int main(){

  int s,temp,i,j,a[20];

  printf("Enter total numbers of elements: ");
  scanf("%d",&s);

  printf("Enter %d elements: ",s);
  for(i=0;i<s;i++)
      scanf("%d",&a[i]);

  //Bubble sorting algorithm
  for(i=s-2;i>=0;i--){
      for(j=0;j<=i;j++){
           if(a[j]>a[j+1]){
               temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
           }
      }
  }

  printf("After sorting: ");
  for(i=0;i<s;i++)
      printf(" %d",a[i]);

  return 0;
}


Output:
Enter total numbers of elements: 5
Enter 5 elements: 6 2 0 11 9
After sorting:  0 2 6 9 11
