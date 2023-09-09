#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Graph.h"

// private Graph object type 
typedef struct GraphObj {
    List* adj;
    char* color;  // array of color of vertex "i"
    int* parent; // array of parent of vertex "i"
    int* disc;   // array of discoverd verex "i"
    int* finish;  // array where a vertex is finished and stored in a stack
    int order;   // stores #vertices = n
    int size;    // # of edges
    
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
            // set color to "white", parent to NIL, disc and finish to UNDEF
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
int getDiscover(Graph G, int u){
    // BASE CASE
    /* Pre: 1<=u<=n=getOrder(G) */
    // return Discovered vertex of u
}
int getParent(Graph G, int u){
    // BASE CASE
    /* Pre: 1<=u<=n=getOrder(G) */
    // return the parent of vertex u in BFS() or nul if BFS()
}
int getFinish(Graph G, int u){
    // BASE CASES
    /* Pre: 1<=u<=n=getOrder(G) */
    // return finished vertex of u
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
// Visit()
// helper function for DFS()
void Visit(Graph G, List S, int x, int *time){
    // BASE CASE
    /*
    List A = G->adj[x];
    𝑑iscover[𝑥] = ++ (*time) // discover 𝑥
    color[𝑥] = gray:
    for all 𝑦 ∈ A    // 
        y = get(A)
        if color[𝑦] == white:
            𝑝arent[𝑦] = 𝑥
            Visit(𝑦)
    color[𝑥] = black
    𝑓inish[𝑥] = ++ (*time) // finish x
    prepend "x" to the stack "s"
    */
}
void DFS(Graph G, List s){
    // BASE CASE
    /* Pre: length(S)==getOrder(G) */
    int time = 0;
    /*for all 𝑥 ∈ 𝑉(𝐺)
        color[𝑥] = white
        𝑝arent[𝑥] = NIL
        discover[x], finish[x] = UNDEF
        
    for all 𝑥 ∈ stack (List S)
        x = get(S)
        if color[𝑥] == white
            Visit(𝑥, &time)
    from 1->n(inclusive):
	deleteBack of the stack to get rid of duplications
    */
}
/*** Other operations ***/
Graph transpose(Graph G){
    // BASE CASE
    // make a new graph 
    // iterate through the graph G:
    //      move to the front of the adj[i]
    //      while the data isn't -1:
    //          assign the data to some integer variable "x"
    //          call addArc on the new graph, y, and i
    //          move to the next element of the adj list
    // 
}
Graph copyGraph(Graph G){
    // BASE CASE
    // same as copy list
    // create a new graph
    // iterate through the graph G:
    //    move to the front of adj[i]
    //    while the data isn't -1:
    //        call addArc on the new graph, i, and the data
    // return the new graph
}
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