/*
Mahyar Mike Vahabi
mvahabi
Winter 22 - CSE101
Matrix.c - Matrix ADTs
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "Matrix.h"
#include "List.h"

// Set "Entry" alais to EntryObj
typedef struct EntryObj *Entry;

// private Entry Object type
typedef struct EntryObj {
    int col;
    double val;
} EntryObj;

typedef struct MatrixObj {
    int size;
    int NNZ;
    List *row;
} MatrixObj;

// constructor for entry
Entry newEntry(int column, double value) {
    // column can't be less than 0
    // You guys know how to implement these by now
}

void deleteEntry(Entry *pE) {
    // You guys know how to implement these by now
}

// constructor for matrix
Matrix newMatrix(int n) {
    // Base case, "n" can not be less than 0
    // allocate a Matrix "M"
    // allocate memory for M->list 
    // from 1 to "n" inclusive:
    //      create a new list for each index of the array
    // return "M";
}

// destructor for Matrix
void freeMatrix(Matrix* pM) {
    // You guys know how to implement these by now
    // could use makeZero then free
}

// Return the size of square Matrix M.
int size(Matrix M) {
    // You guys know how to implement these by now
}

// Return the number of non-zero elements in M.
int NNZ(Matrix M) {
    // You guys know how to implement these by now
}


// Return true (1) if matrices A and B are equal, false (0) otherwise.
int equals(Matrix A, Matrix B) {
    // similar to List implementation of equalls
    // check if lengths of the metrics are equal and exit if they are not
    Entry x, y;
    List c, d;
    int i;
    
    // from "i" = 1 to size of "A":
    //      set "c" and "d" to the rows of "A" and "B"
    //      move to the front of both lists
    //      while the indexes of the lists[i] are GTE 0 && their sizes are equall:
                x = (Entry)get(A->row[i]);
                y = (Entry)get(B->row[i]);
    //          if their values are not equal return false
    //          else move next on "c" and "d"
    return 1;
}

// Re-sets M to the zero Matrix state.
void makeZero(Matrix M) {
    // BASE CASE
    // set NNZ to 0
    // iterate through the matrix:
    //      for each row in the matrix:
    //          free the entries and move next on the rows
    //      clear each row
}

// Changes the ith row, jth col of M to the val x.
// Pre: 1<=i<=size(M), 1<=j<=size(M)
void changeEntry(Matrix M, int i, int j, double x) {
   List L;
   Entry E;
   // 2 Base cases
   // Set the entry to null and assign List L to the row at index i
   //       iterate through the L until you reach column j, then break
   //       if L was empty of the index fell off the back of L
   //               append the new value x to L if x is not 0 (add to end of row)
   //               increment the NNZ
   //       else if still on L but past column j
   //               insert the new value x before the current index is x is not 0
   //               increment the NNZ
   //       else (still on L at column j)
   //               if x is not 0, set the entry value to x
   //               else delete L and decrement the NNZ
}

// Returns a reference to a new Matrix object having the same entries as A.
Matrix copy(Matrix A) {
    // BASE CASE
    Matrix copy = newMatrix(size(A));
    Entry E;
    int i, col;
    double val;
    
    // iterate "i" from 1 to size of matrix "A" (inclusive):
    //      move to the front of the matrix A's rows at index "i"
    //      iterate through the rows[i] as long as the index is GTE 0:
    //          assign Entry E to the cursor's data
    //          set col to the E's column
    //          set val to the E's value
    //          append a new entry of (col, val) to matrix Copy's row at index "i"
    //          increment the nnz value of copy and move to the next index of rows in A

    return copy;
}

//Returns a reference to a new Matrix object representing the transpose of A.
Matrix transpose(Matrix A) {
    // BASE CASE
    Matrix T = newMatrix(size(A));
    Entry E;
    int i;
    double val;

    // similar to Copy() but use "i" as the column now

    // set the Transpose matrix T's nnz to be the same as A
    // iterate "i" from 1 to size of matrix "A" (inclusive):
    //      move to the front of the matrix A's rows at index "i"
    //      iterate through the rows[i] as long as the index is GTE 0:
    //          assign Entry E to the cursor's data
    //          set col to the E's column
    //          set val to the E's value
    //          append a new entry of (i, val) to matrix Copy's row at index "i"
    //          increment the nnz value of copy and move to the next index of rows in A

    return T;
}

// Returns a reference to a new Matrix object representing xA.
Matrix scalarMult(double x, Matrix A) {
    // BASE CASE
     
    Matrix M = newMatrix(size(A)); 
    Entry E;
    int i;
    double val;

    // if x is 0 or M's nnz is 0 just return M

    // set the matrix M's nnz to be the same as A
    // iterate "i" from 1 to size of matrix "A" (inclusive):
    //      move to the front of the matrix A's rows at index "i"
    //      iterate through the rows[i] as long as the index is GTE 0:
    //          assign Entry E to the cursor's data
    //          set col to the E's column
    //          set val to the E's value
    //          append a new entry of (i, val) to matrix Copy's row at index "i"
    //          increment the nnz value of copy and move to the next index of rows in A
    return M;
}

// helper function vector sum for functions sum() diff()
// Assuming C is an empty List object, sets C to P+Q (if flag==1) or P-Q 
// (if flag==-1), considered as sparse vectors. 
// Pre: P!=Q, P and Q are rows in different Matrix objects.
void vecSum(List A, List B, List C, int sign) {
    double x, y, z;
    Entry a, b;

    // Read this before moving on:
    // int "x" can nonly be 1 or -1, indicating if the computation
    // is going to be a subtraction or addition
    // to add/sub two vals it will work like this: val1 + (x)val2
    // if x is 1 it will add normally, if its negative one, it will subtract it
    // **&&** === this symbol is for the line i am reffering to

    // move to the front of both lists
    // iterate through the two lists as long as their indexes are GTE 0:
        // assign Entry "a" and "b" to the cursor's data at list "A" and "B"
        // set x to the value of entry "a"
        // **&&** set y to (sign)*value of entry "b"
        // if the column of entry "a" equals "b's":
        //      set z to the sum of x and y
        //      if z isn't 0 then append a new entry of (a's col, z) to list C
        //      move to the next element of List A and B
        // else if Entry "a's" column is LT "b's"
        //      append a new entry of (a's col, x) to list C
        //      catch up with list A by calling moveNext on it
        // else
        //      append a new entry of (b's col, y) to list C
        //      catch up with list B by calling moveNext on it

    // iterate through your list A as long as it's index is GTE 0:
    //      assign Entry "a" to the cursor's data at list "A"
    //      append a new entry of (a's co, a's val) to List C
    //      move the cursor to the next element of list A

    // iterate through your list B as long as it's index is GTE 0:
    //      assign Entry "b" to the cursor's data at list "B"
    //      append a new entry of (b's col, b's val) to List C
    //      move the cursor to the next element of list B
}

// Returns a reference to a new Matrix object representing A+B.
// pre: size(A)==size(B)
Matrix sum(Matrix A, Matrix B) {
    // two Base Cases

    Matrix Add = newMatrix(size(A));

    // if A and B are equall just set Add by calling scalarMult on either of the matrices by 2
    // else iterate "i" from 1 to size of the matrix:
    //      set ADD's row at index "i" by calling vecSum on A's rows[i], B's rows[i]
    
    return Add;
}

// Returns a reference to a new Matrix object representing A-B.
// pre: size(A)==size(B)
Matrix diff(Matrix A, Matrix B) {
    // two Base Cases

    Matrix Diff = newMatrix(size(A));

    // if A and B are equall just call make zero on Diff and return it
    // else iterate "i" from 1 to size of the matrix:
    //      set Diff's row at index "i" by calling vecSum on A's rows[i], B's rows[i]
    
    return Diff; 
}

// vectorDot()
// Returns the dot product of Lists P and Q considered as sparse vectors.
// Pre: P!=Q, P and Q are rows in different Matrix objects.
double vecDot(List A, List B) {
    // Base Cases
    double dp = 0.0;
    Entry a, b;

    // move to the front of both lists
    // iterate through the two lists as long as their indexes are GTE 0:
        // assign Entry "a" and "b" to the cursor's data at list "A" and "B"

        // if the column of entry "a" equals "b's":
        //      increment dp by the multiplicaion of entry "a" and "b's" values
        //      move to the next element of List A and B
        // else if Entry "a's" column is LT "b's"
        //      catch up with list A by calling moveNext on it
        // else catch up with list B by calling moveNext on it

    return dp;
}

// Returns a reference to a new Matrix object representing AB
// pre: size(A)==size(B)
Matrix product(Matrix A, Matrix B) {
    // two base cases
    // I will implement this soon and update the file later]
    Matrix M = newMatrix(size(A));    
    Matrix T = Transpose(B);

    int i, j;
    double x;
    // iterate "i" from 1 to size of Matrix A:
    //      iterate "j" from 1 to size of Matrix A:
    //          set "x" to the dot product of Matrix A's row[i] and T's row[j]
    //          if "x" isn't zero:
    //              append new entry (j, x) to Matrix M
    //              increment the nnz 

    // free the transpose matrix
    return M;
}

// printMatrix()
void printMatrix(FILE* out, Matrix M) {
    Entry E = newEntry(0, 0);
    int cont = 0;
    for (int i = 1; i <= size(M); i++) {
        cont = 0;
        moveFront((M->row[i]));
        if (index(M->row[i]) >= 0) {
            E = (Entry) get(M->row[i]);
            if (E) {
                fprintf(out, "%d: ", i);
                cont = 1;
            }
        }
        while (index((M->row[i])) >= 0) {
            E = (Entry) get(M->row[i]);
            if (E) {
                fprintf(out, "(%d, %.1f) ", E->col, E->val);
            }
            moveNext(M->row[i]);
        }
        if (cont == 1) {
            fprintf(out, "\n");
        }
    }
}

