#include <stdio.h>
 
#define length ((unsigned char)(-1))
 
typedef int (*hash_t)( int );
 
int foo( int );
int bar( int );
 
hash_t hashtable[length] = {['d']=foo , ['p']=bar};
 
int main( void )
{
    int choix = 'p';
    int nb = 10;
 
    hashtable[ choix ]( nb );
 
    return 0;
}
 
int foo( int n )
{
    return printf("%d",n);
}
 
int bar( int n )
{
    return printf("%p",n);
}
