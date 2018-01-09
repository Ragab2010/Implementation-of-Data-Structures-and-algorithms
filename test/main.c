/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: RAGAB
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*
 *pre.condtion all character are small
 */
char * longest(char *s1 ,  char *s2){
	int i,k=0;
	char ch;
	char * p = (char *)calloc( (strlen(s1)+strlen(s2)), sizeof(char) );
	strcat(p ,s1);
	strcat(p ,s2);
	char *temp = (char *)calloc( strlen(p) );
	for(ch='a' ; ch < 'z' ; ch++){
		for(i=0 ; i < strlen(p) ; i++){
			if((p[i] == ch) && (temp[k-1] != ch)){
				temp[k] = ch;
				k++;

			}
		}
	}
	free(p);
	realloc(temp , strlen(temp));
	printf("\n%s" , temp);

	return temp;
}


int main(){

	char *a ,*b;
	a = "xyaabbbccccdefww";
	b = "xxxxyyyyabklmopq";
	longest(a, b); //-> "abcdefklmopqwxy";


	return 0;
}
