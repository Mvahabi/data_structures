//-----------------------------------------------------------------------------
// List.h
//-----------------------------------------------------------------------------
#ifndef LIST_H_INCLUDE_
#define LIST_H_INCLUDE_

//#include<stdbool.h>

// Exported types -------------------------------------------------------------
typedef struct ListObj* List;

// Constructors-Destructors ---------------------------------------------------

// newList()
// Creates a new empty list.
List newList();

// freeList()
// Frees heap memory associated with *pL, sets *pL to NULL.
void freeList(List* pL);


// Access functions -----------------------------------------------------------

// length()
// Returns the number of elements in L.
int length(List L);

// index()
// If cursor is defined, returns the index of the cursor element, otherwise 
// returns -1.
int index(List L);

// front()
// Returns front element. Pre: length()>0
void* front(List L);

// back()
// Returns back element. Pre: length()>0
void* back(List L);

// get()
// Returns cursor element. Pre: length()>0, index()>=0
void* get(List L);

// equals()
// Returns true if A and B are the same integer sequence, false otherwise. The 
// cursor is ignored in both lists.
// bool equals(List A, List B);


// Manipulation procedures ----------------------------------------------------

// clear()
// Resets L to its original empty state.
void clear(List L);

// set()
// Overwrites the cursor element’s data with x. Pre: length()>0, index()>=0
void set(List L, void* x); 

// moveFront()
// If L is non-empty, places the cursor under the front element, otherwise does 
// nothing.
void moveFront(List L);

// moveBack()
// If List is non-empty, places the cursor under the back element, otherwise 
// does nothing.
void moveBack(List L);

// movePrev()
// If cursor is defined and not at front, moves cursor one step toward front of
// L, if cursor is defined and at front, cursor becomes undefined, if cursor is
// undefined does nothing.
void movePrev(List L);

// moveNext()
// If cursor is defined and not at back, moves cursor one step toward back of 
// L, if cursor is defined and at back, cursor becomes undefined, if cursor is
// undefined does nothing.
void moveNext(List L);

// prepend()
// Insert new element into L.  If List is non-empty, insertion takes place 
// before front element.
void prepend(List L, void* data);

// append()
// Insert new element into L.  If List is non-empty, insertion takes place 
// after back element.
void append(List L, void* data);

// insertBefore()
// Insert new element before cursor. Pre: length()>0, index()>=0
void insertBefore(List L, void* data);

// insertAfter()
// Inserts new element after cursor. Pre: length()>0, index()>=0
void insertAfter(List L, void* data);

// deleteFront()
// Deletes the front element. Pre: length()>0
void deleteFront(List L);

// deleteBack()
// Deletes the back element. Pre: length()>0
void deleteBack(List L);

// delete()
// Deletes cursor element, making cursor undefined. Pre: length()>0, index()>=0
void delete(List L);


// Other operations -----------------------------------------------------------

// printList()
// Prints a string representation of L consisting of a space separated sequence
// of integers, with front on left, to the stream pointed to by out. 
// void printList(FILE* out, List L);

// copyList()
// Returns a new List representing the same integer sequence as L.  The cursor
// in the new list is undefined, regardless of the state of the cursor in L. The
// List L is unchanged.
// List copyList(List L);

// concatList()
// Returns a new List which is the concatenation of A followed by B.  The cursor
// in the new List is undefined, regardless of the states of the cursors A and B.
// The states of A and B are unchanged.
List concatList(List A, List B);

#endif