#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Graph.h"

// private Graph object type 
typedef struct GraphObj {
    List* adj;
    char* color;  // array of color of vertex "i"
    int* parent; // array of parent of vertex "i"
    int* dist;   // a
    int order;   // stores #vertices = n
    int size;    // # of edges
    int source;  // label for recent vertex used as source
}GraphObj;

Graph newGraph(int n){
    // BASE CASE:
    // if the number of vertices is less than 1 it fails
    // allocate Graph "G" with size of GraphObj
    // if your graph G exists:
        // set order to number of vertices, size to 0
        // allocate each array of the object member * n+1
        // G->color = malloc(sizeof(char) *n+1);
        // iterate "i" from 0->n (inclusive):
        /* example:
        for (int i = 1; i<= n; i++){
            G->adj[i] = newList();
        }*/
            // create a adjacent list with newList
            // set color to "white", parent to NIL, dist to INF
    // return G
}
void freeGraph(Graph* pG){
    // int n, i;
    // if graph pG and *pG is not null
        // n to order;
        // iterate i from 1->n (inclusive) call freeList on adjacentList
        // free the rest of the object memebers 
        // free((*pG)->color));
        // free graph and set it to null
}
/*** Access functions ***/

// BASE CASE:
/* 
if( G==NULL ){
    fprintf(stderr, "Graph Error: <function_name> called on NULL Graph\n");
    exit(1);
}*/

int getOrder(Graph G){
// BASE CASE
// return order
}
int getSize(Graph G){
// BASE CASE
// return size
}
int getSource(Graph G){
// BASE CASE
// return source
}
int getParent(Graph G, int u){
// BASE CASE
// wasn't called 
// if u is negatice or it is greater than the number of vertex: u >getOrder(G)
    // program fails
// return the parent of vertex u in BFS() or nul if BFS()
}
int getDist(Graph G, int u){
// BASE CASE
// if source is negatice return inf
// if u is less than 1 or greater than the number of vertices
    // program fails
// returns the distance from the most recent BFS source to vertex u
}
void getPath(List L, Graph G, int u){
// BASE CASES
// program will fail if:
    // graph or list don't exist
    // BFS not called == source is not found
    // invalid "u" value
// if "u" equals to the source: append source to List
// elif parent of "u" equals NIL: append NIL to List
// else: recursively call getPath on the parent of "u"
        // append "u" to List
}
/*** Manipulation procedures ***/
void makeNull(Graph G){
// BASE CASE
// set n back to original order, size to 0, source to NIL
// iterate through:
    // the arrays of parent and set them to NIL
    // the arrays of distance to INF, color to "white"
    // and call clear on the adjacentList
}
void addEdge(Graph G, int u, int v){
// BASE CASE
// program will fail if:
    // graph doesn't exist
    // "u" or "v" are out of range
List A = G->adj[u];
List B = G->adj[v];

// place v in the adjacency list of u, preserving sort   
// move to the front of adj[u]
// if length of that list is 0:
    // append v to adj list[u]
// else:
    // move to the front of the adj[u]
    // while the data of adj[u] is less than vertex v
        // move next
        // if index is out of range then break
    // if the index of adj[u] equals -1:
        // append v
    // else:
        // insert v before the cursor

    // ******** write the same thing but for v **********

// increment the size of the graph
}
void addArc(Graph G, int u, int v){
// BASE CASE
// program will fail if:
    // graph doesn't exist
    // "u" or "v" are out of range

// place v in the adjacency list of u, preserving sort
// move to the front of adj[u]
// if length of that list is 0:
    // append v to adj list
// else:
    // move to the front of the adj[u]
    // while the data of adj[u] is less than vertex v
        // move next
        // if index is out of range then break
    // if the index of adj[u] equals -1:
        // append v
    // else:
        // insert v before the cursor
// increment the size of the graph
}
void BFS(Graph G, int s){
// Program will fail if:
    // Graph doesn't exists or "s" is negative
// iterate through:
    // set the array of colors to "white"
    // set the arrays of dist to INF and parent to NIL
/*
source = s
color[𝑠] = gray // discover the source 𝑠
𝑑[𝑠] = 0
𝑝[𝑠] = nil
𝑄 = LinkedList // construct a new empty list
move to the front of the adjacent list of "s"
Enqueue(𝑄, 𝑠)  // append
while 𝑄 ≠ ∅    // while length of the list is not 0 
    move to the front of Q
    𝑥 = Dequeue(𝑄)  // use the LinkedList get function
    move to the front of the adjacent list of 𝑥
    iterate through the lists in adj[𝑥]:



    for (int iter = 1; i <= length(G->adj[x]), iter++){
        int y = get(adj[x]); // set y to the data of the adj[𝑥]
        if color[𝑦] == white // 𝑦 is undiscovered
            color[𝑦] = gray // discover 𝑦
            𝑑[𝑦] = 𝑑[𝑥] + 1
            𝑝[𝑦] = 𝑥
            Enqueue(𝑄, 𝑦)   // append
        move next on the adj[𝑥]
    color[𝑥] = black // finish 𝑥
    delete front on Q
free Q
*/

}
/*** Other operations ***/
void printGraph(FILE* out, Graph G){
    if (!G) {
        fprintf(stderr, "Error in pringGraph(). empty graph.\n");
        exit(EXIT_FAILURE);
    }
    for(int i = 1; i <= G->order; i++){
        moveFront(G->adj[i]);
        fprintf(out, "%d: ",i );
        while(index(G->adj[i]) >  -1){
            fprintf(out, "%d ", get(G->adj[i]));
            moveNext(G->adj[i]);
        }
        fprintf(out, "\n");
    }
}


