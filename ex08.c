#include <stdio.h>
int main(void){
    int array[10];
    int i;
    int sum = 0;
    float average;

    for(i=0;i<10;i++){
        printf("Enter the number: ");
        scanf("%d",&array[i]);
        sum += array[i];
    }
    average =(float) sum / 10;

    printf("the number which you entered: \n");
    for(i=0;i<10;i++){
        printf("%d, ", array[i]);
    }
    printf("\n");
    printf("the sum is %d\n",sum);
    printf("the average of the number is %.1f\n",average);
    
}
