/* Enter your solutions in this file */
/* Question 1 */
#include <stdio.h>
#include <cs50.h>

int max( int len, int values[]){
  int maximum;
  maximum = values[0];
   for (int i =0; i<len ;i++){
      if (values[i] > maximum){
        maximum = values[i];     
       }
     } 
   return maximum;   
 }
int main(void){
  int S = get_int("Enter size\n");
  int values[S];
  
  for (int i=0; i<S; i++){
     values[i] = get_int("Enter a number\n");
     printf("values[%i] = %d\n",i+1,values[i]);
   } 
 int maximum = max(S,values);
 printf("Maximum is %i\n", maximum);
} 

/*Question 2*/
# include <stdio.h>
#include <cs50.h>

int min( int len, int values[]){
  int minimum;
  minimum = values[0];
   for (int i =0; i<len ;i++){
      if (values[i] < minimum){
        minimum = values[i];     
       }
     } 
   return minimum;   
 }
int main(void){
  int S = get_int("Enter size\n");
  int values[S];
  
  for (int i=0; i<S; i++){
     values[i] = get_int("Enter a number\n");
     printf("values[%i] = %d\n",i+1,values[i]);
   } 
 int minimum = min(S,values);
 printf("Minimum is %i\n", minimum);
} 

