#include <iostream>
int a;
int b;
int c;

int M;
int N;
int K;

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Размеры коробки которую нужно вложить. \n";
    std::cin >> a >> b >> c;
    std::cout << "Размеры коробки которую нужно вложить. \n";
    std::cin >> M >> N >> K;
    if(a <= M && b <= N && c <= K || a <= N && b <= M && c <= K){
        std::cout << "Получиться вложить. \n";
    }
    else if (c <= a && a <= c && K <= b || K <= c && N <= b && K <= a) {
        std::cout << "Получиться вложить. \n";
    }
    else {
        std::cout << "Вложить не получиться.";

    }
}