//
//  main.c
//  FizzBuzz
//
//  Created by Notorious MAC on 7/2/16.
//  Copyright © 2016 NotoriousMAC. All rights reserved.
//

// Assignment 1 FizzBuzz
// Write a program that prints the numbers from 1 to 100. For the multiples of 3, print "Fizz" instead of the number and for the multiples of 5, print "Buzz" instead of the number. For numbers which are multiples of both 3 and 5 print "FizzBuzz".

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int i;
    
    for (i=1; i<101; i++) {
        
        if (i%3 ==0 && i%5 ==0) {
            printf("\nFizzBuzz");
        }

        
       else if (i%3 == 0) {
            printf("\n Fizz ");
        }
        
       else if (i%5 == 0) {
            printf("\nBuzz ");
        }
        else
        
        printf ("\n %d",i);

    }
    
    
    return 0;
}
