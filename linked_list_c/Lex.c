/*
Mahyar Mike Vahabi
mvahabi
Winter 22 - CSE101
pa1 - Lex.c - File Input/Output
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include <ctype.h>
#include "List.h"

#define MAX_STR_LEN 300

int main(int argc, char* argv[]){

    FILE *in, *out;
    char** str = NULL; // this is a delcareation of a string array "str"
    char line[MAX_STR_LEN];
    List L = newList();
    int i, j, s_len, line_count = 0;

    // check command line for correct number of arguments

    // open "in" file for reading 

    // while you are successfully reading in "line", maximum number of 
    // characters to be read being MAX_STR_LEN:
        // increment your line_count
    // close the in file

    // open input file again
    // allocate memory to "str", line_count being # elements allocated, with sizeof(char*)
    // iterate "i" from 0->lines_count9exclusive):
        // read in the lines again like you did before
        // set temp variable "s_len" to the string length of line
        // place lines in string array "str"
        // strip newline like this:
        while( line[s_len-1]=='\n' || line[s_len-1]=='\r' ){ 
            line[s_len-1]='\0'; 
            s_len--;
        }
        // reallocate the string array "str[i]" with s_len +1 being the size, this time sizeof(char)
        //copy line into your "str[i]" array

    // close the "in" file 

    // now append a 0 to the list L
    // Sort array str by inserting indices into List L
    // implement an insertion sort using proper List ADTs

    // open "out" file for writing

    // iterate through the list of L from front to back:
        // print the data's of each element in your string array "str"
        // HINT: str[get(L)]
    
    // close "out" file

    // free the "str" array 
    // free L
}