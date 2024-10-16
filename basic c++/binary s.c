#include<stdio.h>

int main(){
  int list[100],size,i,sElement;

  printf("Enter size of the list: ");
  scanf("%d",&size);

  printf("Enter any %d integer values: ",size);
  for(i = 0; i < size; i++)
    scanf("%d",&list[i]);

  printf("Enter the element to be Search: ");
  scanf("%d",&sElement);
  
  // Linear Search Logic
  for(i = 0; i < size; i++)
  {
     if(sElement == list[i]) 
     {
        printf("Element is found at %d ", i);
        break;
     }
  }
  if(i == size)
     printf("Given element is not found in the list!!!");
  getch();
}

// claculate the running time in code 

#include<stdio.h>
#include<time.h>

int main(){
  int list[100],size,i,sElement;
  clock_t start, end;
  double time;

  printf("Enter size of the list: ");
  scanf("%d",&size);

  printf("Enter any %d integer values: ",size);
  for(i = 0; i < size; i++)
    scanf("%d",&list[i]);

  printf("Enter the element to be Search: ");
  scanf("%d",&sElement);
  
  // Linear Search Logic
  start = clock();
  for(i = 0; i < size; i++)
  {
     if(sElement == list[i]) 
     {
        printf("Element is found at %d ", i);
        break;
     }
  }
  end = clock();
  if(i == size)
     printf("Given element is not found in the list!!!");
  
  time = (double)(end-start)/CLOCKS_PER_SEC;
  printf("\nTime taken to search element is: %f",time);
  getch();
}

