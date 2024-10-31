#include <stdio.h>
int main(){
  
  int num;
  int count = 0;
  int sum = 0; 
  float avg; //avg for average.

  while(1){
    printf("Enter a number");
    scanf("%d", &num);
    
    if(num == -1){
      break;
    }
    sum += num;
    count++;
  }

  if(count>0){
    avg = (float)sum/count;
    printf("Sum is %d\n", sum);
    printf("Average is %.1f\n",avg);
    printf ("%d number counted", count);
  }else{
    printf("0 numbers entered.");
  }    
}
