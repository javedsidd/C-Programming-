/***********************************************************************************
 * File Name: myStrings.h
 * Modified/created: 25 Nov 2018
 * Puprpose: contains prototypes, MACROs defination for string related functions
 * Author: Mohammad Javed Akhtar (javedakhtar92@gmail.com)
 *
 *************************************************************************************/

#ifndef _MYSTRINGS_H_
#define _MYSTRINGS_H_
#include <stdio.h>
#include <stdlib.h>

/*=======================      MACROS DEFINATION =======================*/

#define U64 unsigned long int 
#define S64 signed long int 
#define U32 unsigned int
#define S32 signed int
#define U16 unsigned short int 
#define S16 signed short int 
#define U8 unsigned char 
#define S8 signed char 
#define BOOL unsigned char
#define TRUE 1
#define FALSE 0
#define Is_NUMERIC_STRING(s) (*(char*)s >= 48) && (*(char*) s<= 57)
#define STRING_MAX_SIZE 1024


//=============== OPTION RELATED
typedef enum 
{
	USR_OPT_EXIT=-1, 		/* -1: to exit */
	USR_OPT_STRLEN, 		/*  0: to find lentgh using myStrlen() */
	USR_OPT_STRCPY, 		/*  1: to copy string using myStrCopy() */
	USR_OPT_STRNCPY,		/*  2: to copy N bytes of strings using myStrNcopy() */
	USR_OPT_STRCOMP,		/*  3: to compare two strings using myStrComp() */
	USR_OPT_STRNCOMP, 		/*  4: to compare two strings upto N bytes using myStrNcomp() */
	USR_OPT_STRSTR, 		/*  5: to find a substring in a main string using myStrstr() */
	USR_OPT_STRNSTR, 		/*  6: to find a substring in upto N bytes of main string using myStrNStr() */
	USR_OPT_STRCASESTR, 		/*  7: to find a substring in a main string in a NON case sensitive was using myStrCaseStr() */
	USR_OPT_STR_CHAR,		/*  8: to find a first occurence of a char in a string using myStrChr() */
	USR_OPT_STRREV, 		/*  9: to reverse a string using mystrReverse() */
	USR_OPT_STRREV_REC, 		/* 10: to reverse a string recursively using mystrReverse_recursive() */
	USR_OPT_STRREV_WORD, 		/* 11: to reverse a string word by word using rev_string_words()*/
	USR_OPT_STRCAT, 		/* 12: to cancatinate a string to another using myStrCat() */
	USR_OPT_STRNCAT, 		/* 13: to cancatenate N byte of a string into another string using myStrNCat() */
	USR_OPT_MEMCOMP, 		/* 14: to compare two memory contents using myMemComp() */
	USR_OPT_MEMCOPY, 		/* 15: to copy one memory content to another memory location using myMemCopy() */
	USR_OPT_MEMCCOPY,		/* 16: to copy one memory content to another N bytes untill a character is found using myMemCCopy() */
	USR_OPT_MEMMOVE, 		/* 17: to move a memroy content into another memory location using myMemMove() -*/
	USR_OPT_STR_REM_DUP_CHAR, 	/* 18: to remove duplicate charactors from a string using rem_dup_character() */
	USR_OPT_OCCURENCE_OF_CHAR, 	/* 19: to count no of occurence of a char in a string using occurrence_of_character() */
	USR_OPT_CHECK_PALLINDROME,	/* 20: to check if a string is pallindrome or not using Is_string_Palindrome() */
	USR_OPT_REM_SUBSTR_FROM_MAINSTR,/* 21: to remove a substring from a main string using rem_substringChar_from_mainString() */
	USR_OPT_STRING_PERMUTAION,	/* 22: to find the permutations of a string using permutations_of_String() */
	USR_OPT_STRING_TO_INT,		/* 23: to convert a string into int (myatoi) using my_atoi_String_to_int() */
	USR_OPT_REPLACE_CHAR_WITH_ANOTHER, /* 24: to replace a charecter in a string with another using replace_character_with_another() */
	USR_OPT_REM_REPEATED_SPACES,	/* 25: to remove repeated spaces from a string using remove_repeated_spaces_from_string() */
	USR_OPT_DISPLAY,		/* 26: to display the string */
}USER_OPT;

/*
Function name: myStrlen()
Description:The myStrlen() function calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').
paramters:
	*s: pointer to string to be copied

RETURN VALUE
       The myStrlen() function returns the number of characters in the string pointed to by s.

*/

U64 myStrlen(const char*s);

/*
function name: myStrCopy
Description:	The myStrCopy() function copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer 
				pointed to by dest.  The strings may not overlap, and the destination string dest must be large enough to 
				receive the  copy
paramters:
	*src: pointer to string to be copied
	*dest: pointer to buffer where string *src will be copied
return: returna pointer to destination string dest 

*/

char *myStrCopy(const char *src, char *dest);  

/*
function name: myStrNcopy
Description:	The  myStrNcopy()  function  is  similar,  except that at most n bytes of src are copied.  Warning: If there is no
 				null byte among the first n bytes of src, the string placed in dest will not be null-terminated.
If the length of src is less than n, myStrCopy() writes additional null bytes to dest to ensure that a total of n bytes are written.

paramters:
	*src: pointer to string to be copied
	*dest: pointer to buffer where string *src will be copied
	int n: number of bytes to be copied 

return: returna pointer to destination string dest 
*/

char *myStrNcopy(const char* src,char *dest, int n);

/*
function name: myStrStr
Description:	The  myStrStr()  function finds the first occurrence of the substring s2 in the string s1.  
			The terminating null bytes ('\0') are not compared.
paramters:
	*s1: pointer to the main string (haystack)
	*s2: pointer to substring which is to be seached in the main string
	
return: return a pointer to the beginning of the located substring, or NULL if the substring is not found 
*/
char *myStrStr(const char* s1,const char* s2);

/*
function name: myStrCaseStr
Description:The  myStrCaseStr()  function unction is like myStrStr(), but ignores the case of both arguments.
paramters:
	*s1: pointer to the main string (haystack)
	*s2: pointer to substring which is to be seached in the main string
	
return: return a pointer to the beginning of the located substring, or NULL if the substring is not found 
*/

char *myStrCaseStr(const char* s1,const char* s2);


/*
function name: myStrNStr()
Description:The  myStrNStr()  function locates the first occurrence of the null-terminated string little in the string big, 
		where not more than len characters are searched.  Characters that appear after a ‘\0’ character are not searched.
paramters:
	*big: pointer to the main string (haystack)
	*little: pointer to substring which is to be seached in the main string
	len: no of characters atmost searched in the big

RETURN VALUES
     If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; otherwise a pointer to the first
     character of the first occurrence of little is returned.
*/

char *myStrNStr(const char* big,const char* little,int len);

/*
function name: mystrReverse reverse the string pointed to by s
paramters:
	*s: pointer to the  string to be reversed

RETURN VALUES
     if NULL is passed then function retuen NULL else return the pointer to the reversed string
*/
char *mystrReverse(char* s);


/*
function name: mystrReverse_recursive reverse the string pointed to by s in recusrive fashion
paramters:
	*s: pointer to the  string to be reversed

RETURN VALUES
     if NULL is passed then function retuen NULL else return the pointer to the reversed string
*/
char *mystrReverse_recursive(char *s);

/*
function name: The myStrComp() function compares the two strings s1 and s2.  It returns an integer less than, equal to, 
				or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2.

paramters:
	*s1: pointer to the  first string 
	*s2: pointer to the second string 
RETURN VALUE:
		< 0 --> s1 is less than s2
		>0 ---> s1 is greated then s2
		=0 if s1 == s2

*/
int myStrComp(const char* s1, const char * s2);

/*
function name: The myStrNcomp() function is similar to myStrComp() , except it compares only the first (at most) n bytes of s1 and s2.

paramters:
	*s1: pointer to the  first string 
	*s2: pointer to the second string 
	n: number of at most bytes the comparision happens
RETURN VALUE:
		< 0 --> s1 is less than s2
		>0 ---> s1 is greated then s2
		=0 if s1 == s2
*/
int myStrNcomp(const char*s1,const char *s2, int n);

/*
function name: The MyStrCat() function ppends the src string to the dest string, overwriting the terminating null byte ('\0') at the 
			end of dest,and then adds a terminating null byte.  The strings may not overlap, and the dest string must have enough 
			space for the result.  If dest is not large enough, program behavior is unpredictable; 
			buffer overruns are a favorite avenue for attacking secure programs.
paramters:
	*src: pointer to the string to be appended to dest 
	*dest: pointer to the string to which src will be appened 
RETURN VALUE
       The MyStrCat() and MyStrNCat() functions return a pointer to the resulting string dest.
*/


char *myStrCat(char* src, const char * dest);

/*
function name:   The MyStrNCat() function is similar, except that

       *  it will use at most n bytes from src; and

       *  src does not need to be null-terminated if it contains n or more bytes.

       As with strcat(), the resulting string in dest is always null-terminated.

       If  src  contains  n or more bytes, strncat() writes n+1 bytes to dest (n from src plus the terminating null byte). 
        Therefore, the size of dest must be at least strlen(dest)+n+1.

paramters:
	*src: pointer to the string to be appended to dest 
	*dest: pointer to the string to which src will be appened 
	N:	no of characters atmost appended to dest

RETURN VALUE
       The MyStrCat() and MyStrNCat() functions return a pointer to the resulting string dest.
*/

char *myStrNCat(char* src, const char * dest, int n);

/*
function name:  The  MyMemCopy() function copies n bytes from memory area src to memory area dest.  
			The memory areas must not overlap.  Use memmove(3) if the memory areas do overlap.
paramters:
	*src: pointer to memory from where data has to be copied 
	*dest: pointer to the memory to which src will be copied 
	N:	no of bytes to be copied

RETURN VALUE
	The MyMemCopy() function returns a pointer to dest.
*/

void *myMemCopy(void *dest, const void *src, int n);

/*
function name:  The  MyMemComp()  function  compares two memory locations mem1 and mem2 a
				 If the memory areas overlap, the results are undefined.
paramters:
	*mem_loc1: pointer to memory locaton 1
 	*mem_loc2: pointer to the memory location 2 
	len: length upto which the memory areas to be compared

RETURN VALUE
       The MyMemComp() function returns 0 if both memory contents are equal else returns their difference
*/
S32 myMemComp(void *mem_loc1,void *mem_loc2, U64 len);


/*
function name:  The  MyMemCCopy()  function  copies  no  more  than n bytes from memory area src to memory area dest, stopping when the 
				character c is found.
				 If the memory areas overlap, the results are undefined.
paramters:
	*src: pointer to memory from where data has to be copied 
	*dest: pointer to the memory to which src will be copied 
	c : character upto which the memory will be copied 
	N:	no of bytes to be copied

RETURN VALUE
       The MyMemCCopy () function returns a pointer to the next character in dest after c, or NULL if c was not found in the first  n  
       characters of src.
*/

void *myMemCCopy(void *dest, const void *src, int c, int n);

/*
function name:  The  MyMemset()  Fill a region of memory with the given value
 
paramters:
	*mem:  Pointer to the start of the area. 
	c : the byte with which the memory area to be filled with
	N: size of the area

RETURN VALUE:
       The MyMemset() function returns a pointer of filled memory area with particular bit
*/
void* myMemset(void *mem, int c, int count);


/*
function name:  The  myMemchar():  Find a character in a given memory area 
paramters:
	*mem:  Pointer to the start of the area. 
	c : the byte which is to be found in the given  memory area 
	N: size of the area

RETURN VALUE:
       The MyMemchar() function returns  the address of the first occurrence of @c, or %NULL
*/

void* myMemchar(const void *mem, int c, int count);

/*
function name:  
       The  myMemMove() function copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes 
       place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are 
       then copied from the temporary array to dest
paramters:
	*src: pointer to memory from where data has to be copied 
	*dest: pointer to the memory to which src will be copied 
	N:	no of bytes to be copied

RETURN VALUE
       The myMemMove() function returns a pointer to dest.


*/

void *myMemMove(void * dest , const void *src, int n);


/*
function name:  rem_dup_character()
       The  rem_dup_character() function removes the duplicate characters found in a string pointer to by s
paramters:
	s: pointer to memory from where data has to be copied 

	Eg: input: AABBACD
		output: ABCD
RETURN VALUE
       The rem_dup_character() function returns a pointer to the new string.


*/
char* rem_dup_character(char *s);


/*
function name:  occurrence_of_character()
       The  occurrence_of_character() function removes the duplicate characters found in a string pointer to by s
paramters:
	s: pointer to string 
    c: character whose occurence has to be found
RETURN VALUE
       The rem_dup_character() function returns no of time character c is found in string c
*/

int occurrence_of_character(char *s, char c);

/*
function name:  rem_substringChar_from_mainString()
       The  rem_substringChar_from_mainString() function removes the all characters of substring found in a main string 
paramters:
	main: pointer to main string
	substring: pointer to substring

RETURN VALUE
       The rem_substringChar_from_mainString() function returns a pointer to the new string.


*/

char* rem_substringChar_from_mainString(char *main, char *substring);


/*
function name:  rev_string_words()
       The  rev_string_words() function revers the words of the string pointed by s
       For example, if your input string is “How are you”, the output will be “you are How”.
paramters:
		s: pointer to the string 

RETURN VALUE
       The rev_string_words() function returns a pointer to the new string.

Steps to reverse words in a given string
    First, you need to reverse the individual words, for example,
    If an input is “How are you”, the output will be “woH era uoy”.
    Now, reverse the whole string and you will get “you are How”.
*/
char *rev_string_words(char *s);

/*
	rev_string_words_helper() is helper function to rev_string_words
*/
char *rev_string_words_helper(char* start, char *end);


/*
function name:  my_atoi_String_to_int()
       The  my_atoi_String_to_int() function used to convert a numeric string to it's integer value
paramters:
		s: pointer to the string 

RETURN VALUE
       The rev_string_words() function returns a pointer to the new string.

Steps to create own atoi().
The atoi() only convert a numeric string to their integer value, so check the validity of the string. 
If any non-numeric character comes, the conversion will be stopped.
*/
int my_atoi_String_to_int(char *s);


/*
function name:  Is_string_Palindrome()
       The  Is_string_Palindrome() function checks string s is pallindrome or not
       
       A string is said to be palindrome if reverse of the string is same as string. For example, “abba” is palindrome, but “abbc” is not palindrome

paramters:
		s: pointer to the string 

RETURN VALUE
       The Is_string_Palindrome() function returns TRUE if string is pallindrom else returs FALSE
*/
BOOL Is_string_Palindrome(char *s);


/*
function name:  permutations_of_String()
       The  permutations_of_String() function finds all permutaions of a string 
		A permutation, also called an “arrangement number” or “order,” is a rearrangement of the elements of an ordered list S into a one-to-one 
		correspondence with S itself. 
		A string of length n has n! permutation.
		Example:
       	Below are the permutations of string ABC.
		ABC ACB BAC BCA CBA CAB
paramters:
		s: pointer to the string 

RETURN VALUE

*/
void permutations_of_String(char *s);


/*
function name:  replace_character_with_another()
       The  replace_character_with_another() function replaces character replace in the string s by fill

paramters:
		s: pointer to the string 
		replace: characters to be replaced
		fill: charcter to replace 
RETURN VALUE
	TRUE is replaces was success else FALSE
*/
BOOL replace_character_with_another(char* s, char replace, char fill );


char* remove_repeated_spaces_from_string(char *);

void myString_display(char *);
#endif /*_MYSTRINGS_H_*/
