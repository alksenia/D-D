﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;


int main() {
    setlocale(LC_ALL, "RUS");
    int stress = 0;
    int health = 100;
    int kn = 0;
    int i, j, k = 0;

    printf("!Объявление!\nВот и началась зимняя сессия!\nДалее будет решаться твое будущее!\nВ связи с твоей стратегией обучения вопросы будут восприниматься по-разному\n");
    std::cout << "У тебя всего 3 экзамена, и их порядок ты можешь выбрать самостоятельно!\nРасположи числа '1', '2', '3' в любом порядке!\n" << "\n";
    std::cin >> i >> j >> k;
    printf("Удачных вам голодных игр, и пусть удача всегда будет с вами!\n");
    printf("\nДень 1\n");
    int n = 0;
    if (stress <= 0 && kn < 1 && health > 50)
    {
        switch (i)
        {
        case 1:
            printf("Сегодня тебе предстоит экзамен по линейной алгебре и геометрии. К сожалению, вместо учебы ты выбрал друзей и прогулки, поэтому вопросы покажутся тебе неимоверно сложными\n");
            printf("Ты заходишь в кабинет, накануне ты даже не заглядывал в тетрадь, так как у тебя там ничего не записано. Ты садишься за первую парту и ждешь своей участи\n");
            printf("Преподаватель запугивает аудиторию, дабы никто не списывал, однако даже заглянув кому-то в бланк ты видишь только фигу.\n");
            printf("Наконец, листочек с заданиями доходит и до тебя\n");
            printf("Вопрос 1\nДоказать, что если A * B - E вырожденная матрица, то и B * A - E вырожденная матрица.\nВарианты ответа\n");
            std::cout << "1. Ну если то, то и это\n2. А где числа\n3. 3" << "\n";
            std::cin >> n;
            printf("Вопрос 2\nПусть A – матрица. Доказать, что определитель матрицы E-A равен 0 или 1.\nВарианты ответа\n");
            std::cout << "1. 0\n2. 1\n3. хз" << "\n";
            std::cin >> n;
            printf("Вопрос 3\nДоказать, что все шесть слагаемых в разложении определителя 3-го порядка не могут быть одновременно положительными.\nВарианты ответа\n");
            std::cout << "1. Откуда мне знать\n2. ч.т.д.\n3. :(" << "\n";
            std::cin >> n;
            printf("Поздравляю, вы наконец написали экзамен!\nРезультаты будут известны после написания всех экзаменов!\n");
            break;
        case 2:
            printf("Вопрос 1\nДоказать, что если A * B - E вырожденная матрица, то и B * A - E вырожденная матрица.\nВарианты ответа\n");
            std::cout << "1. Ну если то, то и это\n2. А где числа\n3. 3" << "\n";
            std::cin >> n;
            printf("Вопрос 2\nПусть A – матрица. Доказать, что определитель матрицы E-A равен 0 или 1.\nВарианты ответа\n");
            std::cout << "1. 0\n2. 1\n3. хз" << "\n";
            std::cin >> n;
            printf("Вопрос 3\nДоказать, что все шесть слагаемых в разложении определителя 3-го порядка не могут быть одновременно положительными.\nВарианты ответа\n");
            std::cout << "1. Откуда мне знать\n2. ч.т.д.\n3. :(" << "\n";
            std::cin >> n;
            printf("Поздравляю, вы наконец написали экзамен!\nРезультаты будут известны после написания всех экзаменов!\n");
            break;
        case 3:
            printf("2");
            break;
        }
        

    }
}