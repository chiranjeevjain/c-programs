#include<stdio.h>
int main(){
  int arr[50];
  int *p;
  int i,j,k,size,n;
  printf("\nEnter size of the array: ");
  scanf("%d",&n);
  printf("\nEnter %d elements into the array: ",n);
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  size=n;
  p=arr;
  for(i=0;i<size;i++){
    for(j=0;j<size;j++){
         if(i==j){
             continue;
         }
         else if(*(p+i)==*(p+j)){
             k=j;
             size--;
             while(k < size){
                 *(p+k)=*(p+k+1);
                 k++;
              }
              j=0;
          }
      }
  }
  printf("\nThe array after removing duplicates is: ");
  for(i=0;i < size;i++){
    printf(" %d",arr[i]);
  }
  return 0;
}
