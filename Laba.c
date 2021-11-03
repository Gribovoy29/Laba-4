#include <stdio.h>
#include <time.h>
#define Width 78
unsigned int f, x;
void sleep( float nbr_seconds );
void writeString(unsigned int a, unsigned int b);
int main( void )
{
 unsigned int i;
 printf("\n\n");
 for(i=0;i<10;i++)
 {
 writeString(Width, i);
 fflush(stdout); /* force print on buffered machines */
 sleep( 0.5 ); /* pause 1 second */
 }
 printf("\n\n");
 return 0;
}
void writeString(unsigned int w, unsigned int p)
{
 int i;
 printf("\r");
 for (i=0;i<p;i++)
 {
 printf(" ");
 }
 printf("*");
 for (i=p+1;i<w;i++)
 {
 printf(" ");
 }
}
/* Pauses for a specified number of seconds */
void sleep( float nbr_seconds )
{
 clock_t goal;
 float delay;
 delay = (float) CLOCKS_PER_SEC * nbr_seconds;
 goal = (int)delay + clock();
 while( goal > clock() )
 {
 ; /* loop */
 }
}
