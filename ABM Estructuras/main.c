#include <stdio.h>
#include <stdlib.h>
#include "Usuarios.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    eUsuario usuario[TAMUSUARIO];
    eSerie serie[TAMSERIE];
    menu(usuario,serie,TAMUSUARIO,TAMSERIE);
    return 0;
}
