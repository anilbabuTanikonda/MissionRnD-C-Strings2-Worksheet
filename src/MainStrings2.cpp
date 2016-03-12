/*

Use Strings2 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.s

Objectives of C-Strings-2 Lesson:

->Using malloc to create new strings
->New ways of Handling Strings

*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include "FunctionHeadersStrings2.h"
int main(){

	char str[] = "abcdefgh.,812639";
	int i = 0;
	int j = 2;
	char *new_str = get_sub_string(str, i, j);
	puts(new_str);
	getch();
	//Test getFrequencyofWord

	//Test getSubstring

	//Test getLastWord

	return 0;
}