#include <stdio.h>                                  // подключение библ стандартного ввода вывода
#include <time.h>                                   // поклчения библ для раб с времен

#define Width 78                                    // константа
unsigned int f, x;                                  // глобальные переменые
void sleep( float nbr_seconds );                    // Это точно нужно? ниже функция с такимже имен можно ее вверх
void writeString(unsigned int a, unsigned int b);   // Это точно нужно? ниже функция с такимже имен можно ее вверх


int main( void ){               // главная функция
    unsigned int i;             // перем
    printf("\n\n");             // 2 строк                      
    for(i=0; i<10; i++){        // цикл до 10 с шагом 1
        writeString(Width, i);  // запускаем функцию writeString                     
        fflush(stdout);         // force print on buffered machines                                         
        sleep( 0.5 );           // pause 1 second                                         
    }
    printf("\n\n");             // 2 стр
    return 0;                   // конец                  
}

void writeString(unsigned int w, unsigned int p){   // функция writeString с парам w p
    int i;                  // перем
    printf("\r");           // 
    for (i=0;i<p;i++){      // цыкл от 0, до p, шагом 1
    printf(" ");            // проб
    }                       
    printf("*");            // звезда пизда 
    for (i=p+1;i<w;i++){    // цыкл от p+1, до w, шагом 1
        printf(" ");        // проб
    }
}

// Pauses for a specified number of seconds
void sleep( float nbr_seconds ){           // дальше давай сам
    clock_t goal;
    float delay;
    delay = (float) CLOCKS_PER_SEC * nbr_seconds;
    goal = (int)delay + clock();
    while( goal > clock() ){
        ; // loop 
    }
}
