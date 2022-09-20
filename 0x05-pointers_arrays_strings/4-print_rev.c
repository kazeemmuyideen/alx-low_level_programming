#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - This program print string in reverse 
 *
 * @s: Parameter
 *
 * Return: Always 0
 *
 **/
void print_rev(char *s)
{
	int i, j;
	char temp;

	i=0;
	j=strlen(s)-1;
	while(i<j)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		i++;
		j--;
	}
	puts(s);
}
