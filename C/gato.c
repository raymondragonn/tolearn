#include <stdio.h>

// Función para imprimir el tablero de juego
void imprimirTablero(char tablero[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tablero[i][j]);
            if (j != 2) {
                printf("|");
            }
        }
        printf("\n");
        if (i != 2) {
            printf("---|---|---\n");
        }
    }
    printf("\n");
}

// Función para verificar si un jugador ha ganado
int verificarGanador(char tablero[3][3], char jugador) {
    // Verificar filas
    for (int i = 0; i < 3; i++) {
        if (tablero[i][0] == jugador && tablero[i][1] == jugador && tablero[i][2] == jugador) {
            return 1;
        }
    }
    
    // Verificar columnas
    for (int i = 0; i < 3; i++) {
        if (tablero[0][i] == jugador && tablero[1][i] == jugador && tablero[2][i] == jugador) {
            return 1;
        }
    }
    
    // Verificar diagonales
    if (tablero[0][0] == jugador && tablero[1][1] == jugador && tablero[2][2] == jugador) {
        return 1;
    }
    
    if (tablero[0][2] == jugador && tablero[1][1] == jugador && tablero[2][0] == jugador) {
        return 1;
    }
    
    return 0;
}

int main() {
    char tablero[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    int turno = 1; // Variable para alternar los turnos entre los jugadores
    int fila, columna;
    char jugador;
    int movimientos = 0;
    
    printf("¡Bienvenido al juego del Gato!\n");
    printf("Jugador 1: X\n");
    printf("Jugador 2: O\n\n");
    
    while (1) {
        imprimirTablero(tablero);
        
        // Determinar el jugador actual
        if (turno % 2 == 1) {
            jugador = 'X';
        } else {
            jugador = 'O';
        }
        
        printf("Turno del Jugador %d (%c)\n", turno, jugador);
        printf("Ingrese la fila y columna (ejemplo: 1 2): ");
        scanf("%d %d", &fila, &columna);
        
        // Verificar si la posición está ocupada
        if (tablero[fila - 1][columna - 1] != ' ') {
            printf("Posición ocupada. Intente nuevamente.\n");
            continue;
        }
        
        // Actualizar el tablero con el movimiento del jugador
        tablero[fila - 1][columna - 1] = jugador;
        
        // Verificar si el jugador ha ganado
        if (verificarGanador(tablero, jugador)) {
            imprimirTablero(tablero);
            printf("¡Jugador %d (%c) ha ganado!\n", turno, jugador);
            break;
        }
        
        turno++;
        movimientos++;
        
        // Verificar si hay un empate
        if (movimientos == 9) {
            imprimirTablero(tablero);
            printf("¡Empate!\n");
            break;
        }
    }
    
    return 0;
}