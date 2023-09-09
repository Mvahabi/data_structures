/*
Mahyar Mike Vahabi
mvahabi
Winter 22 - CSE101 - pa2
pa2 - FindPath.c - File Input/Output
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include <ctype.h>
#include "Graph.h"

int main(int argc, char * argv[]){

    // needed variables
    int n, u, v; // n = #vertices; u, v = vertex of two edges
    FILE *in, *out;  // input output files
    Graph G;
    List L;

    // check command line for correct number of arguments
    if (argc != 3) {
        printf("Usage: %s <input file> <output file>\n", argv[0]);
        exit(1);
    }

    // open files for reading and writing
    in = fopen(argv[1], "r");
    if (in==NULL) {
        printf("Unable to open file %s for reading\n", argv[1]);
        exit(1);
    }

    out = fopen(argv[2], "w");
    if (out==NULL) {
        printf("Unable to open file %s for writing\n", argv[2]);
        exit(1);
    }

    // scan the first line or first digit to get # vertex
    fscanf(in, " %d", &n);

    // initialize a new graph with "n"
    // initialize u and v to 1 temporarly

    // while u or v are not 0:
        //scan u and v
        // check if either are 0 and break
        // call addEdge on u and v
    
    // print graph and make a new list for the path findings.

    // reset the vertices of the edges

    // while u or v are not 0:
        //scan u and v
        // check if either are 0 and break
        // call BFS on u
        // call getPath on v
        // this is where you have to print out the statements:
        
        // if length of the list is 0 or the distance of v is negative 
            fprintf(out, "\nThe distance from %d to %d is infinity\n", u, v);
            fprintf(out, "No %d-%d path exists\n", u, v);

        // else:
            fprintf(out, "\nThe distance from %d to %d is %d\n", u, v, getDist(G, v));
            fprintf(out, "A shortest %d-%d path is: ", u, v);
            // print the list to out

        // clear the list

    // free all graphs, lists, and close all files
}