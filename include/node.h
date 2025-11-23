#ifndef NODE_DEF
#define NODE_DEF
typedef struct Ds_Node{
    Ds_Data data;
    struct Ds_Node *next;
} Ds_Node;

void Ds_Node__default_new__();
void Ds_Node__new__(unsigned int dt_size, void *data, Ds_Node *next);
void Ds_Node__init__(Ds_Node *self, void *data, Ds_Node *next);
void Ds_Node__free__(Ds_Node *self);
int Ds_Node__set(void *data);
void *Ds_Node__get();
#endif
#ifndef DNODE_DEF
#define DNODE_DEF
typedef struct Ds_DNode{
    void *data;
    struct Ds_DNode *prev;
    struct Ds_DNode *next;
} Ds_DNode;

void Ds_DNode__new__(void *data, Ds_DNode *next);
void Ds_DNode__init__(Ds_DNode *self, void *data, Ds_DNode *next);
void Ds_DNode__free__(Ds_DNode *self);
#endif