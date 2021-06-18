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

/* Question 3 */
#include <stdio.h>
#include <cs50.h>

float compute_average(int len,int marks[]){
          float sum =0;
          for (int i=0; i<len; i++){
             sum = sum + marks[i];
          }    
       return sum/len;     }
int main(void){
     int N;
     N = get_int("Number of subjects");
     string names[N];
     int marks[N];
     for (int i=0; i<N; i++){
      names[i] = get_string("Enter subject %i",i+1);
       marks[i] = get_int("Enter marks for %s",names[i]);
    }
   float average = compute_average(N, marks);
     for (int i=0; i<N; i++){
        printf("%s : %i\n", names[i], marks[i]);
     }
    printf("Average is %f\n", average); 
}
   
   

