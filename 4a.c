#include <stdio.h>
#include <curses.h>
#include <unistd.h>

int main ( void )
{
    WINDOW *ablak;
    ablak = initscr ();

    int x = 0;  ///x és az y tengely
    int y = 0;

    int xnov = 1; //ekkora meredekséggel fog pattogni
    int ynov = 1;

    int mx;  ///a terminál ablak nagysága
    int my;

    for ( ;; ) 
    {

        getmaxyx ( ablak, my , mx );

        mvprintw ( y, x, "O" );  //itt állíthatjuk át, hogy mi pattogjon
                                 

        refresh ();
        usleep ( 100000 );  ///a pattogás gyorsaságát adja meg

        x = x + xnov;  
        y = y + ynov;

        if ( x>=mx-1 ) 
        { // elerte-e a jobb oldalt?
            xnov = xnov * -1;
        }
        if ( x<=0 ) 
        { // elerte-e a bal oldalt?
            xnov = xnov * -1;
        }
        if ( y<=0 ) 
        { // elerte-e a tetejet?
            ynov = ynov * -1;
        }
        if ( y>=my-1 ) 
        { // elerte-e a aljat?
            ynov = ynov * -1;
        }

    }

    return 0;
}       