/**************************************************************************************
 * File Name: myStrings_main.c
 * Modified/created: 25 Nov 2018
 *Puprpose: contain driver/main code for calling/testing string related functions
 *Author: Mohammad Javed Akhtar (javedakhtar92@gmail.com)
 *Note: These functions may be buggy or not fully optimized
 ***************************************************************************************/

#include "myStrings.h"


int main(int argc, char const *argv[])
{
S8 options;
	char str1[STRING_MAX_SIZE];
	char str2[STRING_MAX_SIZE];
	char str_cpy1[STRING_MAX_SIZE];
	char *p;
	U64 len1,len2;

    do{
	printf("\n======================= USER OPTIONS ===============\n");
	printf("USR_OPT_EXIT=-1, 		-1: to exit\n"
		"USR_OPT_STRLEN			0: to find lentgh using myStrlen() \n"
		"USR_OPT_STRCPY, 		1: to copy string using myStrCopy()\n" 
		"USR_OPT_STRNCPY,		2: to copy N bytes of strings using myStrNcopy()\n"
		"USR_OPT_STRCOMP,		3: to compare two strings using myStrComp()\n"
		"USR_OPT_STRNCOMP, 		4: to compare two strings upto N bytes using myStrNcomp()\n" 
		"USR_OPT_STRSTR, 		5: to find a substring in a main string using myStrstr()\n"
		"USR_OPT_STRNSTR, 		6: to find a substring in upto N bytes of main string using myStrNStr()\n"
		"USR_OPT_STRCASESTR, 		7: to find a substring in a main string in a NON case sensitive was using myStrCaseStr()\n"
		"USR_OPT_STR_CHAR,		8: to find a first occurence of a char in a string using myStrChr()\n"
		"USR_OPT_STRREV, 		9: to reverse a string using mystrReverse()\n"
		"USR_OPT_STRREV_REC, 		10: to reverse a string recursively using mystrReverse_recursive()\n" 
		"USR_OPT_STRREV_WORD, 		11: to reverse a string word by word using rev_string_words()\n"
		"USR_OPT_STRCAT, 		12: to cancatinate a string to another using myStrCat()\n"
		"USR_OPT_STRNCAT, 		13: to cancatenate N byte of a string into another string using myStrNCat()\n"
		"USR_OPT_MEMCOMP, 		14: to compare two memory contents using myMemComp()\n"
		"USR_OPT_MEMCOPY, 		15: to copy one memory content to another memory location using myMemCopy()\n"
		"USR_OPT_MEMCCOPY,		16: to copy one memory content to another N bytes untill a character is found using myMemCCopy()\n"
		"USR_OPT_MEMMOVE, 		17: to move a memroy content into another memory location using myMemMove()\n"
		"USR_OPT_STR_REM_DUP_CHAR, 	18: to remove duplicate charactors from a string using rem_dup_character()\n"
		"USR_OPT_OCCURENCE_OF_CHAR, 	19: to count no of occurence of a char in a string using occurrence_of_character()\n" 
		"USR_OPT_CHECK_PALLINDROME,	 20: to check if a string is pallindrome or not using Is_string_Palindrome()\n"
		"USR_OPT_REM_SUBSTR_FROM_MAINSTR, 21: to remove a substring from a main string using rem_substringChar_from_mainString()\n"
		"USR_OPT_STRING_PERMUTAION,	 22: to find the permutations of a string using permutations_of_String()\n"
		"USR_OPT_STRING_TO_INT,		 	23: to convert a string into int (myatoi) using my_atoi_String_to_int()\n"
		"USR_OPT_REPLACE_CHAR_WITH_ANOTHER,	24: to replace a charecter in a string with another using replace_character_with_another()\n"
		"USR_OPT_REM_REPEATED_SPACES,	  	25: to remove repeated spaces from a string using remove_repeated_spaces_from_string()\n"
		"USR_OPT_DISPLAY		26: to display the string \n" 
		"\n=======================================	END 	===========================================\n\n");

	printf("Enter your options:");
	scanf("%hhd",&options);
	
	printf("Enter main string:\n");
	scanf(" %[^\n]s",str1);
	printf("Enter sub string:\n");
	scanf(" %[^\n]s",str2);
	
	switch(options)
	{
		case USR_OPT_STRLEN: printf("call strlen\n"); 
				len1=myStrlen(str1);
				len2=myStrlen(str2);
				printf("string1:%s\tlen=%lu\n",str1,len1);
				printf("string2:%s\tlen=%lu\n",str2,len2);
				 break;
		case USR_OPT_STRCPY: printf("call strcpy\n"); break;
		case USR_OPT_STRNCPY: printf("call strNcpy\n"); break;
		case USR_OPT_STRCOMP: printf("call strcomp\n"); break;
		case USR_OPT_STRNCOMP: printf("call strNcomp\n"); break;
		case USR_OPT_STRSTR: printf("call strstr\n"); break;
		case USR_OPT_STRNSTR: printf("call strnstr\n"); break;
		case USR_OPT_STRCASESTR: printf("call strcasestr\n"); break;
		case USR_OPT_STR_CHAR: printf("call strchar\n"); break;
		case USR_OPT_STRREV: printf("call strRev\n"); break;
		case USR_OPT_STRREV_REC: printf("call strrev rec\n"); break;
		case USR_OPT_STRREV_WORD: printf("call str_rev_word\n"); break;
		case USR_OPT_STRCAT: printf("call strcat\n"); break;
		case USR_OPT_STRNCAT: printf("call strNcat\n"); break;
		case USR_OPT_MEMCOMP: printf("call memcopm\n"); break;
		case USR_OPT_MEMCOPY: printf("call memcopy\n"); break;
		case USR_OPT_MEMCCOPY: printf("call memccopy\n"); break;
		case USR_OPT_MEMMOVE: printf("call memmove\n"); break;
		case USR_OPT_STR_REM_DUP_CHAR: printf("call remove dup char\n"); break;
		case USR_OPT_OCCURENCE_OF_CHAR: printf("call occurence of char\n"); break;
		case USR_OPT_CHECK_PALLINDROME: printf("call check pallindrome\n"); break;
		case USR_OPT_REM_SUBSTR_FROM_MAINSTR: printf("call remove substring from main string\n"); break;
		case USR_OPT_STRING_PERMUTAION: printf("call string permutation\n"); break;
		case USR_OPT_STRING_TO_INT: printf("call string to int\n"); break;
		case USR_OPT_REPLACE_CHAR_WITH_ANOTHER: printf("call replace char with another char\n"); break;
		case USR_OPT_REM_REPEATED_SPACES: printf("call remove repeated spaces\n"); break;
		case USR_OPT_DISPLAY: printf("call str display\n"); break;
		case USR_OPT_EXIT: printf("\n...exiting...\n"); exit(EXIT_SUCCESS); break;
		default:
			printf("OOpps... You entered an INVALID option\n");
				    
	}
	
    }while(options!=-1);		
	
	




	myStrCopy(str1,str_cpy1);

	printf("string copy:%s\tlen=%lu\n",str_cpy1,myStrlen(str_cpy1));
	myStrNcopy(str2,str_cpy1,10);
	printf("string copy:%s\tlen=%lu\n",str_cpy1,myStrlen(str_cpy1));

	if((p=myStrStr(str1,str2))==NULL)
	{
		printf("\n [%s] NOT FOUND in [%s]\n",str2,str1);
	}
	else
	{
		printf("\nFOUND:\t%s\n",p);
	}

	mystrReverse(str1);
	printf("rev str1:%s\tlen=%lu\n",str1,len1);
	mystrReverse(str1);
	printf("rev str1:%s\tlen=%lu\n",str1,len1);
return 0;
}
