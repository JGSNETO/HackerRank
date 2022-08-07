#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int sumBoys = 0, sumGirls = 0;
  const char gdr = gender;
  //for (int i = (gender == 'b' ? 0 : 1); i < number_of_students; i = i + 2) 
  for(int i=0; i<number_of_students; i++){
      if(i%2 == 0){ sumBoys += marks[i];}
      else{sumGirls += marks[i];}
  }
  if(gender == 'b'){ return sumBoys;}
  else{return sumGirls;}
  return NULL;  
}

int main() {