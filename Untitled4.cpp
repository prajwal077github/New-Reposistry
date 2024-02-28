// C Program to Find Sum and Average of 3 Numbers
#include <stdio.h>
int main(){
    int  num1,num2,num3, sum,avg;
    
    
    // Asking for input
    printf("Enter  threenumbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Calculating sum
    sum = num1 + num2 + num3;
    
    // Calculating average of 3 numbers
    avg = sum / 3;
    
    // Displaying output
    printf("Sum = %d \n", sum);
    printf("Average = %d\n", avg);
    return 0;
}
