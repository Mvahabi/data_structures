/*
Mahyar Mike Vahabi
mvahabi
Winter 22 - CSE101 - pa5
List.cpp - List ADTs
*/

#include<iostream>
#include<string>
#include<climits> 
#include<stdexcept>

#include "List.h"

using namespace std;

// Class Constructors & Destructors ----------------------------------------

List::Node::Node(ListElement x) {
    data = x;
    next = nullptr;
    prev = nullptr;
}


List::List() {
    frontDummy = new Node(-99999999);
    backDummy = new Node(99999999);

    frontDummy->next = backDummy;
    backDummy->prev = frontDummy;
    beforeCursor = frontDummy;
    afterCursor = backDummy;

    size = 0;
    ind = 0;
}

List::List(const List& L){
    frontDummy = new Node(-99999999);
    backDummy = new Node(99999999);

    frontDummy->next = backDummy;
    backDummy->prev = frontDummy;
    beforeCursor = frontDummy;
    afterCursor = backDummy;

    size = 0;
    ind = 0;

    Node* N = L.frontDummy->next;
    while(N != backDummy && N->data != backDummy->data) {
        if (N->next != backDummy) this->insertBefore(N->data);
        N = N->next;
    }
}

List::~List(){
    clear();
    delete frontDummy;
    delete backDummy;
}
int List::length() const{
    // return size;
}

ListElement List::front() const{
    if(length() <= 0){
        throw std::length_error("Error in front(). Empty List");
    }
    return (frontDummy->next->data);
}

ListElement List::back() const{
    if(length() <= 0){
        throw std::length_error("Error in back(). Empty List");
    }
    return(backDummy->prev->data);
}

int List::position() const{
    if(ind < 0 || ind > length()){
        throw std::length_error("Error in position(). Empty List");
    }
    return (ind);
}

ListElement List::peekNext() const{
    if (position() >= length()) {
        throw std::range_error("Error in peekNext(). Cursor at the back");
    }
    return(afterCursor->data);
}

ListElement List::peekPrev() const{
    if (position() <= 0) {
        throw std::range_error("Error in peekPrev(). Cursor at the front");
    }
    return(beforeCursor->data);
}

void List::clear() {
    while (length() > 0) {
        ind = 0;
        moveFront();
        eraseAfter();
    }
}

void List::moveFront() {
    if (length() <= 0) {
        throw std::length_error("Error in moveFront(). Empty list");
    }
    else {
        ind = 0;
        beforeCursor = frontDummy;
        afterCursor = frontDummy->next;
    }
}

void List::moveBack() {
    if (length() <= 0) {
         std::length_error("Error in moveBack(). Empty list");
    }
    else {
        ind = length();
        beforeCursor = backDummy->prev;
        afterCursor = backDummy;
    }
}
 
ListElement List::moveNext() {
    if (position() >= length()) {
        throw std::range_error("Error in moveNext(). Cursor at the back");
    }
    beforeCursor = afterCursor;
    afterCursor = afterCursor->next;
    ind++;
    return beforeCursor->data;
}


ListElement List::movePrev() {
    if (position() <= 0) {
        throw std::range_error("Error in movePrev(). Cursor at the front");
    }
    afterCursor = beforeCursor;
    beforeCursor = beforeCursor->prev;
    ind--;
    return afterCursor->data;
}

void List::insertAfter(ListElement x) {
    Node* N = new Node(x);

    N->next = afterCursor;
    N->prev = beforeCursor;
    
    if (beforeCursor){
        beforeCursor->next = N;
    }
    if (afterCursor){
        afterCursor->prev = N;
    }
    afterCursor = N;
  
    size++;
}

void List::insertBefore(ListElement x) {
    Node* N = new Node(x);

    N->next = afterCursor;
    N->prev = beforeCursor;
  
    if (beforeCursor) {
        beforeCursor->next = N;
    }
    if (afterCursor){
        afterCursor->prev = N;
    }      
    beforeCursor = N;

    ind++;
    size++;
}

void List::setAfter(ListElement x){
    if(length() <= 0){
        throw std::length_error("Error in setAfter(). Empty List");
    }
    afterCursor->data = x;
}

void List::setBefore(ListElement x){
    if(length() <= 0){
        throw std::length_error("Error in setBefore(). Empty List");
    }
    beforeCursor->data = x;
}
void List::eraseAfter(){
    if (position() >= length()) {
        throw std::range_error("Error in eraseAfter(). Cursor at the back");
    }

    afterCursor = afterCursor->next;
    afterCursor->prev = beforeCursor;
    beforeCursor->next = afterCursor;

    size--;
}
void List::eraseBefore() {
    if (position() <= 0) {
        throw std::range_error("Error in eraseBefore(). Cursor at front");
    }

    beforeCursor = beforeCursor->prev;
    beforeCursor->next = afterCursor;
    afterCursor->prev = beforeCursor;

    size--;
    ind--;
}

int List::findNext(ListElement x) {

    bool flag = false;
    Node* temp = afterCursor;

    while (!flag && temp != backDummy && ind < length()) {
        flag = (temp->data == x);
        if (!flag){
            temp = temp->next;
        }
        ind++;
    }
    beforeCursor = temp;
    afterCursor = temp->next;

    if (flag) {
        return ind;
    } else {
        return -1;
    }
}

int List::findPrev(ListElement x) {

    bool flag = false;
    Node* temp = beforeCursor;

    while (!flag && temp != frontDummy && ind > 0) {
        flag = (temp->data == x);
        if (!flag){
            temp = temp->prev;
        }
        ind--;
    }
    beforeCursor = temp->prev;
    afterCursor = temp;

    if (flag){
        return ind;
    } else {
        return -1;
    }
}


void List::cleanup() {
    Node* N = frontDummy->next;
    while (N != backDummy) {
        Node* temp = frontDummy->next;
        int i = 1;
        Node* next = N->next;
        bool flag = false;
        while (!flag && temp != N) {
            flag = (temp->data == N->data);
            if (flag) {
                N->prev->next = N->next;
                N->next->prev = N->prev;
                size--;
                if (N == beforeCursor){
                    beforeCursor = beforeCursor->prev;
                } else if (N == afterCursor) {
                    afterCursor = afterCursor->next;
                }
                if(ind >= i)
                    ind--;
            } else {
                temp = temp->next;
            }
        }
        N = next;
        i++;
    }
    ind = length();
}
 
List List::concat(const List& L) const{
    List con;
    Node* N = this->backDummy->prev;
    Node* M = L.backDummy->prev;
    while(M != L.frontDummy){
        con.insertAfter(M->data);
        M = M->prev;
    }
    while(N != this->frontDummy){
        con.insertAfter(N->data);
        N = N->prev;
    }
    return con;
}

std::string List::to_string() const{
   Node* N = nullptr;
   std::string l = "(";
   for(N=frontDummy->next; N!=backDummy->prev; N=N->next){
      l += std::to_string(N->data)+", ";
   }
   l += std::to_string(N->data)+")";
   return l;
}


bool List::equals(const List& R) const{
   bool eq = false;
   Node* N = nullptr;
   Node* M = nullptr;

   eq = (this->size == R.size);
   N = this->frontDummy;
   M = R.frontDummy;
   while(eq && N!=nullptr){
      eq = (N->data==M->data);
      N = N->next;
      M = M->next;
   }
   return eq;
}


// Overriden Operators -----------------------------------------------------

std::ostream& operator<<( std::ostream& stream, const List& L ){
    return stream << L.List::to_string();
}

bool operator==( const List& A, const List& B ){
    return A.List::equals(B);
}

List& List::operator=( const List& L ){
   if (this != &L){ 
      List temp = L;
      std::swap(frontDummy, temp.frontDummy);
      std::swap(backDummy, temp.backDummy);
      std::swap(beforeCursor, temp.beforeCursor);
      std::swap(afterCursor, temp.afterCursor);
      std::swap(size, temp.size);
      std::swap(ind, temp.ind);
   }

   return *this;
}
