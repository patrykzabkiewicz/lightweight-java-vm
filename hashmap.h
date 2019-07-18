#define MAXLENGHT 25

struct mapElem_ {
    char key[MAXLENGHT];
    char value[MAXLENGHT];
};

typedef mapElem_ mapElem;

struct TreeNode {
    mapElem data;
    struct TreeNode * left;
    struct TreeNode * right;
};

typedef struct TreeNode node;

typedef struct hashMap_ {
    node * root;
    int size;
} hashMap;

void hashMap_insert(hashMap * map, 
                    const char * const key, 
                    const char * const value);

void hashMap_remove(hashMap * map, const char * const key);

void hashMap_find(hashMap * map, 
                    const char * const key, 
                    char * value,
                    int valueLenght );

