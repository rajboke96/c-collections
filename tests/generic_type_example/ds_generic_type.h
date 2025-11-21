#ifndef Ds_TYPE_DEF
#define Ds_TYPE_DEF
enum Ds_Types{
INT,
FLOAT,
CHAR,
STRING,
// Add User-defined datatypes
LIST,
DS_NODE
};
typedef struct{
    enum Ds_Types type;
    char *type_name;
} Ds_TypeMeta;
typedef struct{
    Ds_TypeMeta type_meta;
    void *ref;
} Ds_Type;

// Call corresponding User-defined datatypes methods here
void Ds_Type__new__(enum Ds_Types dstype, void *ptr);
void Ds_Type__init__(Ds_Type *self, enum Ds_Types dstype, void *ptr);
void Ds_Type__free__(Ds_Type *self);
void * Ds_Type__printstr__(Ds_Type *self);
#endif