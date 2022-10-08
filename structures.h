/* pointers structures and arrays will be combined here*/



typedef struct
{
    int version;
    char version_name[10];
}Varient;

// structure inside structure
// Array of structure
typedef struct
{
    char name[20];
    int *seat;
    char fuel[10];
    Varient var1[2];
    int (*ptr_func1)(int,int);
}Car;



