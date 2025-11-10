#include <stdio.h>


// Rubens Silveira Junior ======
// ==============================
// Função Bubble Sort
// ==============================
void bubbleSort(int vetor[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

// ==============================
// Função Selection Sort
// ==============================
void selectionSort(int vetor[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (vetor[j] < vetor[minIndex]) {
                minIndex = j;
            }
        }
        temp = vetor[i];
        vetor[i] = vetor[minIndex];
        vetor[minIndex] = temp;
    }
}

// ==============================
// Função Insertion Sort
// ==============================
void insertionSort(int vetor[], int n) {
    int i, chave, j;
    for (i = 1; i < n; i++) {
        chave = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
    }
}

// ==============================
// Função para imprimir o vetor
// ==============================
void imprimirVetor(int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

// ==============================
// Programa Principal
// ==============================
int main() {
    int numeros[100];
    int n, opcao;

    printf("==== ORDENACAO EM C ====\n");
    printf("Quantos numeros voce deseja ordenar? ");
    scanf("%d", &n);

    printf("\nDigite os %d numeros:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nEscolha o metodo de ordenacao:\n");
    printf("1 - Bubble Sort\n");
    printf("2 - Selection Sort\n");
    printf("3 - Insertion Sort\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            bubbleSort(numeros, n);
            printf("\nVetor ordenado (Bubble Sort): ");
            imprimirVetor(numeros, n);
            break;
        case 2:
            selectionSort(numeros, n);
            printf("\nVetor ordenado (Selection Sort): ");
            imprimirVetor(numeros, n);
            break;
        case 3:
            insertionSort(numeros, n);
            printf("\nVetor ordenado (Insertion Sort): ");
            imprimirVetor(numeros, n);
            break;
        default:
            printf("\nOpcao invalida!\n");
    }

    printf("\nFim do programa.\n");
    return 0;
}
