# include<stdio.h> 
# include<stdlib.h> 
  

int divNum(int x, int y) 
{ 
  while (x%y == 0) 
   x = x/y;  
  return x; 
}     
  

int uglyNum(int num) 
{ 
  num = divNum(num, 2); 
  num = divNum(num, 3); 
  num = divNum(num, 5); 
    
  return (num == 1)? 1 : 0; 
}     
  
int getIterator(int num) 
{ 
  int i = 1;  
  int count = 1;   
  
  
  while (num > count) 
  { 
    i++;       
    if (uglyNum(i)) 
      count++;  
  } 
  return i; 
} 
  
int main() 
{ 
  int i = 0;
  for(i = 1; i <= 10000; i++)
  {
    int num = getIterator(i); 
    printf("%d Ugly number is %d\n", i, num); 
  }
  return 0; 
} 