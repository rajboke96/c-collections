#ifndef Ds_TYPE_DEF
#define Ds_TYPE_DEF
enum Ds_Types{
INT,
FLOAT,
CHAR,
LIST,
STRING,
OTHERTYPES
};
typedef struct{
    enum Ds_Types type;
    char *type_name;
} Ds_TypeMeta;
typedef struct{
    Ds_TypeMeta type_meta;
    void *ref;
} Ds_Type;
#endif