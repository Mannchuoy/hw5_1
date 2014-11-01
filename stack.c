/****************************************************************************

                                                         Luoykhann Chea
                                                         CSE 12, Fall 2014
                                                         November 5, 2014
                                                         cs12xjd
                                Assignment Four

 File Name:      stack.c
 Description:    This program implement an array-based stack of longs. And
 this file contains functions: delete_Stack, empty_Stack,
 isempty_Stack, isfull_Stack, new_Stack, num_elements,
 pop, push, and top, to be called from driver.c.

 ****************************************************************************/
#include <stdio.h>
#include "list.h"
#include "stack.h"

void delete_Stack (Stack ** spp) {
        delete_List (spp);
}

long isempty_Stack (Stack * this_stack) {
        return isempty_List (this_stack);
}

Stack * new_Stack (void *(*copy_func) (void *),
        void (*delete_func) (void *),
        FILE *(*write_func) (void *, FILE *)) {

        return new_List (copy_func, delete_func, write_func);
}

void * pop (Stack * this_stack) {
        return remove_List (this_stack, END);
}

long push (Stack * this_stack, void * element) {
        return insert (this_stack, element, END);
}

void * top (Stack * this_stack) {
        return view (this_stack, END);
}

FILE * write_Stack (Stack * this_stack, FILE * stream) {
        return write_List (this_stack, stream);
}
