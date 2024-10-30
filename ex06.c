#include <stdio.h>
int main(void){
  int i = 99;

  do{
    printf("%d,", i );
    i = i - 3;
  }while(i > 50);
}
