// jePrestupny.cpp : Defines the entry point for the application.
//

#include "jePrestupny.h"

using namespace std;
int jePrestupny(int rok);

int main() {
 
    int roky[] = { 1000, 2000, 2002, 2012, 2022, 2200 };
    for (int i = 0; i <= 5; i++)
    {
        int rok = roky[i];
        printf("%d  %d\n", roky[i], jePrestupny(roky[i]));

    }

}


int jePrestupny(int rok) {
    if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0; 
    }
}

