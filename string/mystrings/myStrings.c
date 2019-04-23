/**************************************************************************************
 * File Name: myStrings.c
 * Modified/created: 25 Nov 2018
 *Puprpose: contains implemenation of strings related functions
 *Author: Mohammad Javed Akhtar (javedakhtar92@gmail.com)
 *Note: These functions may be buggy or not fully optimized
 ***************************************************************************************/

#include "myStrings.h"

U64 myStrlen(const char *s)
{
	char *temp= (char*)s;
	while(*temp!='\0')
		temp++;
	return temp-s;
} 

/*======================================================================================*/

char *myStrCopy(const char *src, char *dest) 
{
	char *temp=dest;
	while((*dest++ = *src++) != '\0');

	return temp;
}

/*======================================================================================*/

/***********************************************************
 * myStrCopy - Copy a length-limited, C-string
 * @dest: Where to copy the string to
 * @src: Where to copy the string from
 * @count: The maximum number of bytes to copy
 *
 * The result is not %NUL-terminated if the source exceeds
 * @count bytes.
 *
 * In the case where the length of @src is less than  that  of
 * count, the remainder of @dest will be padded with %NUL.
 *
 *
**************************************************************/
char *myStrNcopy(const char* src,char *dest, int count)
{
	char *temp=dest;
	while (count)
	{
		if ((*temp=*src) != '\0')
		{
			src++;
		}
		temp++;
		count--;
	}
	return dest;
}


/*======================================================================================*/
/*****************************************************************************************
 * myStrstr - Find the first substring in a %NUL terminated string
 * @s1: The string to be searched
 * @s2: The string to search for
 *****************************************************************************************/
char *myStrStr(const char* s1,const char* s2)
{
	/*
	*s1: pointer to the main string (haystack)
	*s2: pointer to substring which is to be seached in the main string
	*/

 
}

char *myStrCaseStr(const char* s1,const char* s2)
{
//	to do: implement this some time 
}


char *myStrNStr(const char* big,const char* little,int len)
{

}


char *mystrReverse(char* s)
{
    char temp;
    char *t=s, *ret=s;
    while(t!=NULL && *t!='\0')
        t++;
        t--;
    while(t>s)
    {
        temp=*s;
        *s=*t;
        *t=temp;
        t--;
        s++;
    }
    return ret;
}


int myStrComp(const char* s1, const char * s2)
{

}

int myStrNcomp(const char*s1,const char *s2, int n)
{

}

char *myStrCat(char* src, const char * dest)
{

}

char *myStrNCat(char* src, const char * dest, int n)
{

}



void *myMemCopy(void *dest, const void *src, int n)
{
	char *d=dest;
	const char *s=src;
	while(n)
	{
		*d++=*s++;
		n--;
	}
return dest;
}

void *myMemCCopy(void *dest, const void *src, int c, int n)
{
	char *d=dest;
	const char *s=src;
	while (n && *s!=c)
	{
		*d++=*s++;
		n--;
	}
return dest;
}

S32 myMemComp(void *mem_loc1,void *mem_loc2, U64 len)
{
	const char*s1=mem_loc1;
	const char*s2=mem_loc2;
	int res=0;
       while(len--)
       if(*s1++!=*s2++)
	return *s1-*s2;
return res;       
}

void *myMemMove(void * dest , const void *src, int n)
{
	char *d,*s;

}

char* rem_dup_character(char *s)
{

}

char* rem_substringChar_from_mainString(char *main, char *substring)
{

}

char *rev_string_words_helper(char* start, char *end)
{
/*
	rev_string_words_helper() is helper function to rev_string_words
*/
}

char *rev_string_words(char *s)
{
/*
    Steps to reverse words in a given string
    First, you need to reverse the individual words, for example,
    If an input is “How are you”, the output will be “woH era uoy”.
    Now, reverse the whole string and you will get “you are How”.
*/
}


void myString_display(char *s)
{
	if(s==NULL)
	{
		printf("\n=============	Nothing to print ===============\n"); return;
	}
	else
		printf("\nDisplaying string: %s\n",s);
}


