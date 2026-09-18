
/*
 *  Goal: Learn how to allocate an initial block of memory and resize it dynamically when it fills up.
 *  
 *  The Task: Write a program that asks the user how many integers they want to enter initially. 
 *  Allocate memory for that exact amount using malloc(). 
 *  Fill the array with numbers from the user.
 *
 *  The Twist:
 *  Ask the user if they want to add more numbers. If they say yes, ask for the new total size and use
 *  realloc() to expand the memory block without losing the original data. Print the final combined list
 *  and free the memory.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    printf( "How many integers do you want to add?: " );
    int amount = scanf( "%d", &amount );
    printf( "%d" , amount );
    if( amount == 0 ) {
        printf( "Returning..." );
        return -1;
    }

    int *data = ( int * )malloc( amount * sizeof( amount ) );

    if( data == NULL ) {
        printf( "\nMemory allocation failed. Returning...\n" );
        return -1;
    }

    for( int i = 0; i < amount; i++ ){
        printf( "Insert value" );
        scanf( "%d", &data[i] );
    }

    char response = 'n';
    printf( "Do you want to add more data?: \n" );
    scanf( "%s", &response );
    if( response == 'y' ) {
        printf( "How many?" );
        amount = amount + scanf( "%d", &amount );
        int *temp = ( int * )realloc( data, amount );
    }

    for( int i = 0; i < amount; i++ ){
        printf( "%d\n", data[ i ] );
    }

    free( data );
    data = NULL;
    return 0;
}
