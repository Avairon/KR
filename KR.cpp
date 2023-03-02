#include <iostream>

int Input;
int sum;

void first() {
    std::cout << "Enter number:\n";
    std::cin >> Input;

    for (int i = Input; i < 0; i++) {
        if (i % -2 == -1) {
            sum += i;
        }
    }

    std::cout << sum;
}

void second() {
    int* arr = (int*)malloc(sizeof(int) * 1);
    int Input = 0;
    int i = 0;
    int sum = 0;

    while (Input != -1) {
        std::cin >> Input;
        
        arr = (int*)realloc(arr, sizeof(int) * (i + 1));
        arr[i] = Input;

        i++;
    }

    for (int n = 0; n <= i - 1; n++) {
        if (arr[n] != -1) sum += arr[n];
    }
    std::cout << sum;
}

void thrird() {
    int Input = 1;

    std::cin >> Input;

    int size = Input;

    int** arr = (int**)malloc(sizeof(int) * size);

    for (int i = 0; i < Input; i++) {
        arr[i] = (int*)malloc(sizeof(int) * size); 
    }

    for (int a = 0; a < size; a++) {
        for (int b = 0; b < size; b++) {
            std::cin >> Input;
            arr[a][b] = Input;
        }
    }

    for (int a = 0; a < size; a++) {
        for (int b = 0; b < size; b++) {
            std::cout << arr[a][b] << " ";
            
        }
        std::cout << "\n";
    }

    
    int sumMain = 0;
    int sumSub = 0;

    for (int n = 0; n < size; n++) {
        sumMain += arr[n][n];
        sumSub += arr[n][(size - 1) - n];
    }


    //std::cout << sumMain << " ";
    //std::cout << sumSub  << " ";
    std::cout << (sumMain - sumSub);

}

void four() {
    int SizeX;
    int SizeY;

    std::cin >> SizeX;
    std::cin >> SizeY;

    int** arr = (int**)malloc(sizeof(int) * SizeX);

    for (int i = 0; i < SizeX; i++) {
        arr[i] = (int*)malloc(sizeof(int) * SizeY);
    }

    for (int a = 0; a < SizeX; a++) {
        for (int b = 0; b < SizeY; b++) {
            std::cin >> arr[a][b];
        }
    }

    for (int a = 0; a < SizeX; a++) {
        for (int b = 0; b < SizeY; b++) {
            std::cout << arr[a][b] << " ";

        }
        std::cout << "\n";
    }

    std::cout << "\n\n";

    for (int a = 0; a < SizeY; a++) {
        for (int b = SizeX - 1; b >= 0; b--) {
            std::cout << arr[b][a] << " ";

        }
        std::cout << "\n";
    }
}

int main() {

    four();
}
