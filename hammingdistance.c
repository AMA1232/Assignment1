#include <stdio.h>
#include <math.h>

int hammingdistance(int num1 , int num2);

int main(){

    int num1;
    int num2;
    printf("Enter first number : ");
    scanf("%d" , &num1);
    printf("\nEnter second number : ");
    scanf("%d" , &num2);

    printf("\nThe hamming distance between %d and %d is equal to : %d" , num1 , num2 , hammingdistance(num1, num2));

    return 0;
}

int hammingdistance(int x, int y)
{
    int exclusive_num = x ^ y; //If the aligned bits don't match the 1 is outputed i  the NUM , otherwise 0 is outputed-
    int z = 0; 
 
    while (exclusive_num  > 0) {
        z += (exclusive_num & 1); //If a bit in NUM is 0, then x and y don't differ in that bit and so the operation (NUM & 1) give 0, otherwise it gives 1 

        exclusive_num /= 2; //Divide by two inorder to go over the whole NUM bit by bit literally :)
    }
 
    return z; //Returns the number of different bits
}
