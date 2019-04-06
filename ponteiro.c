#include <stdio.h>
int main(void){
    int a, b;
    printf ("Entre com primeiro número: ");
    scanf ("%d", &a);
    printf ("Entre com segundo número: ");
    scanf ("%d", &b);
    printf ("%d\n", a);
    printf ("%d\n", b);
    int* p;
    if (a>b){
        p=&a;
}
    else{
        p=&b;
}
    *p=(*p-50);
    printf ("%d\n", a);
    printf ("%d\n", b);
return 0;
}
