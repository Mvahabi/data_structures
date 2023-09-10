/*
Mahyar Mike Vahabi
mvahabi
Winter 22 - CSE101 - pa2
List.c - List ADTs
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "List.h"

// ****** Citation: Professor Tantalo's implementation of Queue  *********

// Set "Node" alais to NodeObj
typedef struct NodeObj* Node;

// Private Node object type
typedef struct NodeObj {
    void* data; 
    Node Left;
    Node Right;
} NodeObj;

// Constructor for node
Node node_create(void* data) {
    //check to see if node exists:
        // dynamic allocation for your new node "n"
        //set your node's data to the data from the parameter
        // n->data = data;
        // then set both node's left and right to NULL
    // return the node "n"
}

//The destructor for a node
void node_delete(Node* n) {
    // check to see if node n and it's address exists:
        // free the address of the node -> clears the memory 
        // set the address of the node to NULL
}

// private List object type
typedef struct ListObj{
    int length;
    int curs_pos; 
    Node curs;
    Node front; 
    Node back;
}ListObj;
    
// Constructor for list
List newList(){
    // allocate space for this object
    // same as node_create bu  t with respective member variables
}

// BASE CASE: Check to see if the lists exists
/* exm:     
    if (!L) {
        fprintf(stderr, "Error in <functionName>. List is not defined.\n");
        return -1;
    }
*/

// Destructor for list 
void freeList(List *L){
    // BASE CASES
    // create two nodes, one to place to the front of the list, other temp
    // iterate through the list:
        // assign the temp to track the steps of your other node
        // reassign your node to the next node
        // free the temp node
    // free the address of the List
    // set the List to NULL
    Node n, temp;
    n = (*L)->front;
    for (int i = 0; i < (*L)->length; i++){
        temp = n;
        n= n->Right;
        free(temp);
    }
    free(*L);
    L = NULL;
}

// Returns the number of elements in L.
int length(List L) {
    //BASE CASES:
    return L->length;
}

// Returns position of curs
int index(List L) {
    // similar to the function length(List L)
}

//Returns first element's data
void* front(List L) {
    //BASE CASES:
    return L->front->data;  
}

//Returns last element's data
void* back(List L){
    //BASE CASES:
}

// Returns cursor's data 
void* get(List L) {
    // BASE CASES
}

// Resets L to its original empty state.
void clear(List L) {
    // reset the member variables back to an empty list (newList)
}

// writes x in the cursor element's data
void set(List L, void* x){
    // two base cases
    // check if cursor exists
    // assign cursor's data to the new data x
}

// Move cursor to the front
void moveFront(List L) {
    // BASE CASES
    // set cursor to the front
    // set cursor index to index of the front
}

// Move cursor to the back
void moveBack(List L) {
    // BASE CASES
    // set cursor to the back
    // set cursor index to index of the back (how?)
}

// Move the cursor to one position before it's original position
void movePrev(List L) {
    // BASE CASES
    // if cursor is at front or out of range already:
        //reset it to initial index and set cursor to null and return
    // else you decrement the index and move cursor backwards
}

// Move the cursor to one position after it's original position
void moveNext(List L) {
    // exact vise versa of move prev
}

// Add a new node to the front of the list
void prepend(List L, void* data){
    // BASE CASE
    // create and assign a new node with the given data
    // check if the list is empty:
        // set the front of the list to the new node
        // by definition, set back to the front
        // increment the length size
    // if there are elements inside the list:
        // point the new node's right to the front node
        // point the front's left to the new node
        // set front to the new node
        // increment the length
    // if your cursor index is not undefined/-1
        // increment the index
}

// Add a new node to the end of the list
void append(List L, void* data) {
    // vise versa of prepend but don't increment the index
}

// Insert new element before cursor
void insertBefore(List L, void* x) {
    // 3 base cases
    // throw error if length is 0 (empty list)
    // throw error if index is out of range
    // create and set new node with the given data/x
    // if cursor is at front:
        // prepend the new node and increment index
    // else: 
        // point the new node's left to what the cursor was pointing to
        // point the new node's right to cursor
        // point the node's right (originialy on the left of cursor) to new
        // point the cursor's left to the new node
        // increment length and index
}       

// Insert new element after cursor. 
void insertAfter(List L, void* x) {
    // vise versa of insertBefore
}

// Delete the first element. 
void deleteFront(List L) {
    // BASE CASES
    // if there's just one element:
        // delete the front node
        // reset everything back to original state
    // else:
        // creat and set a new node to the front
        // set the front node to it's next one
        // delete the new node
        // set the fron't left to null
        // if cursor is at front:
            // set cursor to null
        // decrement length and index
}

// Delete the last element.
void deleteBack(List L) {
    // same BASE CASES as deleteFront
    // vise versa of deleteFront

}

// Delete cursor element, making cursor undefined.
void delete (List L) {
    // BASE CASES
    // check of cursor exists
    // check if cursor is at front then call deleteFront
    // check if cursor is at back then call deleteBack
    // else in a non-empty list and index inbetween the front and back":
        // create and set a temp node to the node after cursor
        // point the temp's left to what the cursor was pointing to
        // set the temp to the node before cursor
        // point the temp's right to what the cursor was pointing to
        // delete the cursor
        // decrement the length and index
    
}

// Prints to the file pointed to by out
// void printList(FILE *out, List L) {
//     // BASE CASE
//     Node new = NULL;
//     for (new = L->front; new != NULL; new = new->Right) { 
//         fprintf(out, "%d ", new->data);
//     }
//     fprintf(out, "\n");
// }

// // Returns a new List representing the same integer sequence as L
// List copyList(List L) {
//     // BASE CASE
//     // make a new list for duplication/copying (dup)
//     // crreate and assign a temp node to the front of L
//     // while your temo node still exists:
//         // append the temp's data into dup
//         // assign temp to the node after it
//     // return the new duplicated list (dup)
// }

// Returns a new List which is the concatenation of A and B.
List concatList(List A, List B){
    // create a new list
    // make two temp nodes assigned to front of both lists
    // iterate trough  list "A" and append to the new list, move temp node forward
    // iterate trough  list "b" and append to the new list, move temp node forward
}