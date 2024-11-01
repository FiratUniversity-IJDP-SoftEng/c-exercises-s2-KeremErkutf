#include <stdio.h>
int main(void){
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
