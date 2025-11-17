typedef struct {
    int data;
    void *next;
} Ds_Node;

void Ds_Node__printstr__(Ds_Node *self);
void Ds_Node__free__(Ds_Node *self);