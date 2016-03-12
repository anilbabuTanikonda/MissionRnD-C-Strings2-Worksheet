/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<string.h>
char * get_last_word(char * str){
	char s[20];
	int i, k=0, l;
	if (str == NULL)
		return NULL;
	l = strlen(str);
	for (i = l - 1; i >= 0; i--)
	{
		if (str[i] == ' ' || str[i] == ',' || str[i] == '.')
			break;
		else
		{
			s[k] = str[l];
			k++;
		}
	}
	s[k] = '\0';
	return s;


	
}
