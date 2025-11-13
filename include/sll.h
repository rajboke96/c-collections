
typedef struct {
    Ds_node__Node *head;
    int size;
} Ds_sll__SLL;

// constructor function
Ds_sll__SLL *Ds_sll__new_SLL();
// init function
void Ds_sll__init_SLL(Ds_sll__SLL *self);
// representation function
Ds_str__String *Ds_sll__get_str(Ds_sll__SLL *self);
// operation functions
int Ds_sll__insert(Ds_sll__SLL *self, int data);
Ds_node__Node *Ds_sll__search(Ds_sll__SLL *self, int data);
int Ds_sll__delete(Ds_sll__SLL *self);
const Ds_array__intArray *Ds_traverse(Ds_sll__SLL *self);
int Ds_sll__get_size(Ds_sll__SLL *self);