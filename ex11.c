#include <stdio.h>
int main(void){
 /*
      [0,0]|[1,0]|[2,0]|[3,0]|[4,0]
      [0,1]|[1,1]|[2,1]|[3,1]|[4,1]
      [0,2]|[1,2]|[2,2]|[3,2]|[4,2]
      [0,3]|[1,3]|[2,3]|[3,3]|[4,3]
      [0,4]|[1,4]|[2,4]|[3,4]|[4,4]    
  */
  
  int i;
  int j;

  for(i=0;i<=4;i++){
    for(j=0;j<=4;j++){
      if(i == j || i + j == 4){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
}
