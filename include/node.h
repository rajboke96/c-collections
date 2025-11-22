#ifndef NODE_DEF
#define NODE_DEF
typedef struct Ds_Node{
    void *data;
    struct Ds_Node *next;
} Ds_Node;

void Ds_Node__new__(void *data, Ds_Node *next);
void Ds_Node__init__(Ds_Node *self, void *data, Ds_Node *next);
void Ds_Node__free__(Ds_Node *self);
#endif