/********************************************************
 * File name    :bits_manipulations.c
 * Description  : Bits related important function implementation
 * Author       : Mohammad Javed Akhtar 
 * Date         : 23 April 2019 
 *********************************************************/


#include <stdio.h>



/*************** GLOBAL VARIABLES & MACROS ***********/
typedef unsigned char BOOL
#define TRUE 1
#define FALSE 0


/***************   FUNCTIONS PROTOTYPES **************/

int print_Bits(int);

void toggle_All_Bits(int *);
void toggle_nth_Bit(int *num, int bitpos);

void Set_all_bits(int *);
void Set_nth_bit(int *, int bipos);

void clear_all_bits(int *)
void clear_nth_bit(int *, int bitpos);

void swap_even_oddBits(int);

BOOL check_nth_bit(int, int bitpos);
BOOL check_lsb(int);
BOOL check_msb(int);

int Find_No_of_DiffBits_of_two_Int(int a, int );
int Find_msb(int);

/***** some interview ask questions solved using bitwise operations ****/

void TurnOFF_RightMostSetBit(int *);



// MAIN STARTS HERE
int main()
{
}


/*********************************************************
 *Function Name : FindDiffBits_of_two_Int
 *Description   : Function to find out number of different bits in two integers
 *Arguments     : two
 *Return        : returns the nmumber of different bits in two numbers
 *
 **********************************************************/
 int Find_No_of_DiffBits_of_two_Int(int a, int b)
{

}




