#ifndef NODE_DEF
#define NODE_DEF
typedef struct {
    void *data;
    void *next;
} Ds_Node;

void Ds_Node__new__();
void Ds_Node__init__();
void Ds_Node__printstr__(Ds_Node *self);
void Ds_Node__free__(Ds_Node *self);
#endif