/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include<string.h>
int count_word_in_str_way_1(char *str, char *word){ 
	if (str == NULL || word == NULL)
		return NULL;
	int l, l1, i, j,k,count=0,flag;
	l = strlen(str);
	l1 = strlen(word);
	if (l1 > l)
		return 0;
	for (j = 0;j<=l-l1; j++)
	{
		k = j;
		flag = 0;
		for (i = 0; word[i] != '\0'; i++)
		{
			if (str[k] != word[i])
			{
				flag = 1;
				break;
			}
			k++;
		}
		if (flag==0)
			count++;
	}

	return count;
}



