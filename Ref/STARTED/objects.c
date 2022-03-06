/*
 
 This script is an attempt at implementing OOP in Standard C.
 
    [Class]
    Blueprint of an object.
 
    [Instance]
    Reprensentation of an object.
 
    [Object]
    Object itself.
 
 */

typedef struct _Object Object;
typedef struct _Class Class;

struct _Object {
    /* Instance Members */
    char *parent_instance;
};

struct _Class {
    /* Class Members */
    char *parent_class;
};
