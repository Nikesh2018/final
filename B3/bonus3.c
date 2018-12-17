#include<stdio.h> 
#include<stdlib.h> 
#include<math.h>
  
int main() 
{  
    int total = 0; 
    int total2 = 0;
    int i = 0;
    int num = 12;
    printf("Enter an integer to determine whether it's abundant, deficient, or perfect: ");
    scanf("%d", &num);
    
    for (i=1; i<=sqrt(num); i++) 
    { 
        if (num%i==0) 
        { 
          if (num /i == i) 
            total = total + i; 
  
          else 
            { 
              total = total + i; 
              total = total + (num / i); 
            } 
        } 
    } 
    
    total2 = total - num; 
    
    if (total2 > num)
    {
      printf ("number %d is abundant \n", num); 
    } 
    if (total2 < num)
    {
      printf ("number %d is deficient \n", num); 
    } 
    if (total2 == num) 
    {
       if (total%2 == 0) 
       {
          if (total/2 == num)  
          {
                printf ("number %d is perfect \n", num); 
          }
       }
    } 
    return 0; 
} 