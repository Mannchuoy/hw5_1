/****************************************************************************

                                                         Luoykhann Chea
                                                         CSE 12, Fall 2014
                                                         November 5, 2014
                                                         cs12xjd
                                Assignment Five

 File Name:      list.c
 Description:
 ****************************************************************************/
#include <malloc.h>
#include <stdio.h>
#include "mylib.h"
#include "list.h"

typedef struct Node {
        struct Node * pre;      /* how to access the prior Node */
        struct Node * next;     /* how to access the next Node */
        void * data;            /* the data to store */
} Node;

typedef struct List {
        Node * end;             /* the end of the list */
        long list_count;        /* which list is it */
        long occupancy;
        void *(*copy_func) (void *);
        void (*delete_func) (void *);
        FILE *(*write_func) (void *, FILE *);
} List;

/* private Node function declarations */
static long check_to_go_forward (List * this_list, long where);
static void delete_Node (Node **, void (*delete_func) (void *));
static void find_location (List * this_list, long where);
static Node * insert_Node (Node *, void *, void *(*copy_func) (void *)); 
static Node * new_Node (void *, void *(*copy_func) (void *));
static void * remove_Node (Node *);
static void * view_Node (Node *); 
static FILE * write_Node (Node *, FILE *, FILE *(*write_func) (void *, FILE *));

/* catastrophic error messages */
static const char ADNEXT_NONEXIST[] = 
                "Advance next from non-existent list!!!\n";
static const char ADNEXT_EMPTY[] = 
                "Advance next from empty list!!!\n";
static const char ADPRE_NONEXIST[] = 
                "Advance pre from non-existent list!!!\n";
static const char ADPRE_EMPTY[] = 
                "Advance pre from empty list!!!\n";
static const char CHECK_NONEXIST[] =
                "Checking direction on non-existent list!!!\n";
static const char DELETE_NONEXIST[] =
                "Deleting from non-existent list!!!\n";
static const char DELETE_NONEXISTNODE[] =
                "Deleting a non-existent node!!!\n";
static const char INCOMING_NONEXIST[] =
                "Incoming parameter does not exist!!!\n";
static const char ISEMPTY_NONEXIST[] =
                "Is empty check from non-existent list!!!\n";
static const char INSERT_NONEXIST[] =
                "Inserting to a non-existent list!!!\n";
static const char REMOVE_NONEXIST[] =
                "Removing from non-existent list!!!\n";
static const char REMOVE_EMPTY[] =
                "Remove from empty list!!!\n";
static const char VIEW_NONEXIST[] = 
                "Viewing a non-existent list!!!\n";
static const char VIEW_NONEXISTNODE[] = 
                "Viewing a non-existent node!!!\n";
static const char VIEW_EMPTY[] =
                "Viewing an empty list!!!\n";
static const char WRITE_NONEXISTFILE[] =
                "Writing to a non-existent file!!!\n";
static const char WRITE_NONEXISTLIST[] =
                "Writing from a non-existent list!!!\n";
static const char WRITE_MISSINGFUNC[] =
                "Don't know how to write out elements!!!\n";
static const char WRITE_NONEXISTNODE[] =
                "Writing from a non-existent node!!!\n";

/* debug messages */
static const char ADNEXT[] = "[List %ld - Advancing next]\n";
static const char ADPRE[] = "[List %ld - Advancing pre]\n";
static const char INSERT[] = "[List %ld - Inserting node]\n";
static const char REMOVE[] = "[List %ld - Removing node]\n";
static const char VIEW[] = "[List %ld - Viewing node]\n";
static const char LIST_ALLOCATE[] = "[List %ld has been allocated]\n";
static const char LIST_DEALLOCATE[] = "[List %ld has been deallocated]\n";

static int debug_on = FALSE;    /* allocation of debug flag */
static long list_counter = 0;   /* the number of lists allocated so far */

/*--------------------------------------------------------------------------
 Function Name:         set_debug_off
 Purpose:               turns off debugging for this list
 Description:
 Input:                 void
 Result:                debug is off
                        no return type
 --------------------------------------------------------------------------*/
void set_debug_off (void) {
        /* YOUR CODE GOES HERE */
}

/*--------------------------------------------------------------------------
 Function Name:         set_debug_on
 Purpose:               turns on debugging for this list
 Description:
 Input:                 void
 Result:                debug is on
                        no return type
 --------------------------------------------------------------------------*/
void set_debug_on (void) {
        /* YOUR CODE GOES HERE */
}

/*--------------------------------------------------------------------------
 Function Name:         advance_next_List
 Purpose:               calling this functoins causes the end pointer of 
                        this_list to move forward by one Node. This effect-
                        ively shifts the elements of the list backwards by 
                        one
 Description:
 Input:                 List * this_list
 Result:                no return type
 --------------------------------------------------------------------------*/
void advance_next_List (List * this_list) {
        /* YOUR CODE GOES HERE */
}

/*--------------------------------------------------------------------------
 Function Name:         advance_pre_List
 Purpose:               calling this functoin causes the end pointer of 
                        this_list to move backward by one Node. This
                        effectively shifts the elemetns of th elist forwards
                        by one
 Description:
 Input:                 List * this_list
 Result:                no return type
 --------------------------------------------------------------------------*/
void advance_pre_List (List * this_list) {
        /* YOUR CODE GOES HERE */
}

/*--------------------------------------------------------------------------
 Function Name:         check_to_go_forward
 Purpose:               this fuction checks whether it would be more effic-
                        ient to reach item number where in the list by loop-
                        int forwrads from the end or backward from the end
                        of the list
 Description:
 Input:                 List * this_list, long where
 Result:
                        return true if loop forwards, false if backwards
 --------------------------------------------------------------------------*/
static long check_to_go_forward (List * this_list, long where) {
        /* YOUR CODE GOES HERE */
        /* *called from find_location* */
}

/*--------------------------------------------------------------------------
 Function Name:         delete_List
 Purpose:               This destructor function deallocates all memory 
                        associated with the list, including the memory asso-
                        ciated with all of the nodes in the list. It sets the
                        list pointer in the calling function to NULL.
 Description:
 Input:                 List **lpp
 Result:                delete list
                        no return type
 --------------------------------------------------------------------------*/
void delete_List (List ** lpp) {
        /* YOUR CODE GOES HERE */
}

/*--------------------------------------------------------------------------
 Function Name:         find_location
 Purpose:               this function is used to eliminate code duplication
                        in the list functions by finding the location at 
                        which we wish to insert, remove, or view. 
                        find_location should be used to locate the Node at
                        location where
 Description:
 Input:                 List * this_list, long where
 Result:
                        no return type
 --------------------------------------------------------------------------*/
static void find_location (List * this_list, long where) {
        /* YOUR CODE GOES HERE */
        /* *called from insert, remove_List, and view* */
}

/*--------------------------------------------------------------------------
 Function Name:         insert
 Purpose:               inserts the element into this_list at location where
                        find_location should be used to locate the Node at
                        location where. This function should then call 
                        insert_Node to incorporate the Node into the list.
 Description:
 Input:                 List * this_list, void * element, long where
 Result:
                        return 1 if successful, 0 otherwise
 --------------------------------------------------------------------------*/
long insert (List * this_list, void * element, long where) {
        /* YOUR CODE GOES HERE */
}

/*--------------------------------------------------------------------------
 Function Name:         isempty_List
 Purpose:               check to see if this_list is empty
 Description:
 Input:                 List * this_list
 Result:
 --------------------------------------------------------------------------*/
long isempty_List (List * this_list) {
        /* YOUR CODE GOES HERE */
}

/*--------------------------------------------------------------------------
 Function Name:         new_List
 Purpose:               this contructor function allocates and initializes
                        a new List object. It initializes the list data
                        fields
 Description:
 Input:                 void * (*copy_func)
                        void   (*delete_func)
                        FILE * (*write_func)
 Result:                return pointer to the list
 --------------------------------------------------------------------------*/
List * new_List (
        void *(*copy_func) (void *),
        void (*delete_func) (void *),
        FILE *(*write_func) (void *, FILE *)) {

        /* YOUR CODE GOES HERE */
}

/*--------------------------------------------------------------------------
 Function Name:         remove_List
 Purpose:               removes an element in this_list at location where. 
                        find_location should be used to locate the Node at
                        location where.
 Description:
 Input:                 List * this_list, long where
 Result:                return a pointer to the removed node's data
 --------------------------------------------------------------------------*/
void * remove_List (List * this_list, long where) {
        /* YOUR CODE GOES HERE */
}

/*--------------------------------------------------------------------------
 Function Name:         view
 Purpose:               find_location should be used to locate the Node at
                        location where. This function should then call view_
                        Node
 Description:
 Input:                 List * this_list, long where
 Result:                returns a pointer to the object stored at location
                        where for viewing
 --------------------------------------------------------------------------*/
void * view (List * this_list, long where) {
        /* YOUR CODE GOES HERE */
}

/*--------------------------------------------------------------------------
 Function Name:         write_List
 Purpose:               check if stream and this_list exist, otherwise print
                        out error messages. Also check if stream equals to
                        stderr, !this_list -> write_func, and this_list ->
                        occupancy >= 1
 Description:
 Input:                 List * this_list, FILE * stream
 Result:                return stream
 --------------------------------------------------------------------------*/
FILE * write_List (List * this_list, FILE * stream) {
        long count;             /* to know how many elements to print */
        Node * working;                 /* working node */

        if (!stream) {
                fprintf (stderr, WRITE_NONEXISTFILE);
                return NULL;
        }

        if (!this_list) {
                fprintf (stderr, WRITE_NONEXISTLIST);
                return NULL;
        }

        if (stream == stderr)
                fprintf (stream, "List %ld has %ld items in it.\n",
                        this_list->list_count, this_list->occupancy);

        if (!this_list->write_func) {
                fprintf (stream, WRITE_MISSINGFUNC);
                return stream;
        }

        if (this_list->occupancy >= 1)
                working = this_list->end->next;

        for (count = 1; count <= this_list->occupancy; count++) {
                if (stream == stderr)
                        fprintf (stream, "\nelement %ld:  ", count);
                write_Node (working, stream, this_list->write_func);
                working = working->next;
        }
                
        return stream;
}

/*--------------------------------------------------------------------------
 Function Name:         write_reverse_List
 Purpose:               writes elements of this_list backwards, starting 
                        with the last item. The list is printed to filestream
                        stream
 Description:
 Input:                 List * this_list, FILE * stream
 Result:
 --------------------------------------------------------------------------*/
FILE * write_reverse_List (List * this_list, FILE * stream) {
        /* YOUR CODE GOES HERE */
}

/*--------------------------------------------------------------------------
 Function Name:         delete_Node
 Purpose:               check if node exist, else print out error messages.
                        call function free to delege element and assign
                        *npp = NULL
 Description:
 Input:                 Node ** npp
                        void (*delete_func)
 Result:                no return type
 --------------------------------------------------------------------------*/
static void delete_Node (Node ** npp, void (*delete_func) (void *)) {

        /* does the node exist??? */
        if (!npp || !*npp) {
                fprintf (stderr, DELETE_NONEXISTNODE);
                return;
        }

        /* call function to delete element */
        if (delete_func && (*npp)->data)
                (*delete_func) (&((*npp)->data));

        /* delete element */
        free (*npp);

        /* assign node to NULL */
        *npp = NULL;
}

/*--------------------------------------------------------------------------
 Function Name:         insert_Node
 Purpose:               creates a new node to hold element, or, if copy_func
                        is non-NULL, a copy of element. This new node is then
                        incorporated into the list at the location AFTER 
                        this_Node
 Description:
 Input:                 Node * this_Node
                        void * element
                        void * (*copy_func)
 Result:                re
 --------------------------------------------------------------------------*/
static Node * insert_Node (Node * this_Node, void * element,
        void * (*copy_func) (void *)) {

        /* YOUR CODE GOES HERE */
        /* *called from insert* */
}

/*--------------------------------------------------------------------------
 Function Name:         new_Node
 Purpose:               allocate and initialize memory
 Description:           call malloc to allocate
 Input:                 void * element
                        void * (*copy_func)
 Result:                return this_Node
 --------------------------------------------------------------------------*/
static Node* new_Node (void * element, void * (*copy_func) (void *)) {

        /* allocate memory */
        Node *this_Node = (Node *) malloc (sizeof (Node));

        /* initialize memory */
        this_Node->next = this_Node->pre = NULL;
        this_Node->data = (copy_func) ? (*copy_func) (element) : element;

        return this_Node;
}

/*--------------------------------------------------------------------------
 Function Name:         remove_Node
 Purpose:               "unlinks" this_Node from the list by arranging the 
                        pointers of the surrounding Nodes so they no longer
                        point to this_Node
 Description:
 Input:                 List * this_list
 Result:                return pointer to data
 --------------------------------------------------------------------------*/
static void * remove_Node (Node * this_Node) {
        /* YOUR CODE GOES HERE */ 
}

/*--------------------------------------------------------------------------
 Function Name:         view_Node
 Purpose:               called from view to view the node
 Description:
 Input:                 Node * this_Node
 Result:                returns a pointer to this_Node's data
 --------------------------------------------------------------------------*/
static void * view_Node (Node * this_Node) {
        /* YOUR CODE GOES HERE */
}

/*--------------------------------------------------------------------------
 Function Name:         write_Node
 Purpose:               write error messages to stderr
 Description:           check if stream, this_Node, and write_func exist
                        or not
 Input:                 Node * this_Node
                        FILE * stream
                        FILE * (*write_func)
 Result:                return (*write_func) (this_Node->data, stream)
 --------------------------------------------------------------------------*/
static FILE* write_Node (Node * this_Node, FILE * stream,
        FILE * (*write_func) (void *, FILE *)) {

        if (!stream) {
                fprintf (stderr, WRITE_NONEXISTFILE);
                return NULL;
        }

        if (!this_Node) {
                fprintf (stream, WRITE_NONEXISTNODE);
                return stream;
        }

        if (!write_func) {
                fprintf (stream, WRITE_MISSINGFUNC);
                return stream;
        }

        return (*write_func) (this_Node->data, stream);
}
