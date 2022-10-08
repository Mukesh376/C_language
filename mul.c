int mul(int a, int (*ptr)(int,int))
{
    int x;
    x = ptr(5,6);
    return (a*x);
}