#ifndef ARRAYLIST_H
#define ARRAYLIST_H

typedef struct TCD_ARRAY_LIST *TAD_ARRAY_LIST;

// Construtor
/**
\brief Create Arraylist with initial.
@param N - initial size
@return return the address of Arraylist 
*/
TAD_ARRAY_LIST ARRAY_LIST(int N);


/**
\brief Add element at the end of Arraylist.
@param list - Arraylist to be freed 
@param elem - element to add
*/
// setters
void addElem(TAD_ARRAY_LIST list, void* elem);
/**
\brief Add element on index.
@param list - Arraylist
@param elem - element to add
@param index - index of Arraylist 
*/
void addElemAtIndex(TAD_ARRAY_LIST list, void* elem, int index);


// getters
/**
\brief Return the element on index.
@param list - Arraylist
@param index - index of element
@return return the element on index
*/
void* getElem(TAD_ARRAY_LIST list, int index);
/**
\brief Return the size of Arraylist.
@param list - Arraylist 
@return return the size of Arraylist.
*/
int getArraySize(TAD_ARRAY_LIST list);


// free memory
/**
\brief Free the Arraylist data struct.
@param list - Arraylist to be freed 
*/
void free_ARRAY_LIST(TAD_ARRAY_LIST list);

#endif