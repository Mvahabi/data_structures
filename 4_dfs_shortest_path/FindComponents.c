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
    int i, n, u, v, comp; // n = #vertices; u, v = vertex of two edges
    FILE *in, *out;  // input output files
    Graph G, T;
    List S;

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
        // call addArc on u and v
    
    fprintf(out, "Adjacency list representation of G:\n");
    // print the graph's adj list
    fprintf(out, "\n");

    // set graph T to transpose of G
    // append each vertecies of the graph to the list S (stack) 
    // call DFS on graph G and T, passing the stack (list S) as well
    
    // iterate through all vertecies in graph T:
    //      if the parent of the Tranpose graph's vertecies is NIL:
    //          increment the counter for strong component
    fprintf(out, "G contains %d strongly connected components:\n", comp);

    // set a random variable "x" to the number of strong components
    // assemble Lists representing the strong components
    // iterate through the List s:
    //      set an int variable to the data of list s 
    //      if the parent of the Tranpose graph's vertecies is NIL:
    //          decrement x
    //      append or prepend x to the array list of c at index x     

    // iterating i from 0->comp:
            fprintf(out, "Component %d: ", i+1);
            // print out the array of List c at index i
            fprintf(out, "\n");

    // create and allocate an array of Lists (*List C)to store the strong components

    // free all graphs, lists, and close all files
}