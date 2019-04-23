/*
 *program to reverse a string by words
eg: i/p: this is my india
   o/p : india my is this
 * */


#include<stdio.h>

void str_reverse(char *);

int main()
{
	char str[200];
	char word[200];
	int i,j;

	printf("Enter a string:\n");
	scanf("%[^\n]s",str);

	printf("You entered string: %s\n",str);

	str_reverse(str);
	
	printf("After full revers string: %s\n",str);

	for(i=0; str[i]!= '\0' ;i++)
	{
		j=0;
		while(str[i]!= ' ' && str[i] != '\0')
			word[j++]=str[i++];
		
		printf("i=%d  word: %s\n",i,word);
		str_reverse(word);
		

	}
	
	printf("After word revers string: %s\n",word);
	printf("After word revers string: %s\n",str);

}

void str_reverse(char *s, char *e)
{
//	printf("entering  str_reverse\n");
	int start, end;
	char *str_temp=s;
	char temp;

	for(start=0; str_temp[start]!='\0' ; start ++);
	end=start-1;

	for(start=0; start < end  ; start++, end--)
	{
		temp=str_temp[start];
		str_temp[start]= str_temp[end];
		str_temp[end]=temp;
	}
//	printf("leaving str_reverse\n");
}
