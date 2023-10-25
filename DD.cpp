﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <ctime>
using namespace std;


int main() {
    setlocale(LC_ALL, "RUS");
    int stress = 0;
    int health = 100;
    int kn = 0;

    srand(time(0));
    int f, s;
    int start = 1;
    int end = 21;
    int rand();
    //ПЕРВЫЙ ДЕНЬ
    printf("Вот и началась долгожданная учёба в ВШЭ!\nТебе предстоит пройти удивительный путь длиной в 4 года... \nНо не будем думать о чём-то грандиозном - завтра у тебя первые пять пар подряд!\nТы конечно же пойдёшь на них!\n\tДа,ведь?..[1 - ДА/ 0 - НЕТ]\n");
    std::cin >> f;
    if (f == 1) {
        kn += 10; std::cout << "Даа...";
        Sleep(1000);
        std::cout << "\n Это был сложный первый день, но ты понял, что технологии программирования точно нельзя пропускать - \n\tЭто лучший предмет в мире!";
    }
    else if (f == 0)
    {
        std::cout << "\nТы уверен, что не пойдёшь? Это всё-таки первые пары - ты сможешь узнать много полезной информации для дальнейшей учёбы.. [1 - ДА, 0 - НЕТ]\n";
        std::cin >> s;
        if (s == 1) {
            kn -= 20; std::cout << "Даа...";
            Sleep(1000);
            std::cout << "\nТы замечательно провёл этот день в тёплой кроватке! Однако если ты будешь часто пропускать, то ты скорее всего...\nБудешь отчислен после первой зимней сессии :(\n";
        }
        else if (s == 0) {
            kn += 10; std::cout << "Даа...";
            Sleep(1000);
            std::cout << "\n Это был сложный первый день, но ты понял, что технологии программирования точно нельзя пропускать - \n\tЭто лучший предмет в мире!\n";
        }
        else printf("Кажется,ты ввёл некорректный ответ - посмотри на возможные варианты снова.");
    }
    else printf("Кажется,ты ввёл некорректный ответ - посмотри на возможные варианты снова.");
    //ВТОРОЙ ДЕНЬ
    std::cout << "\nНа следующий день ты посетил пары по мат. анализу и линейной алгебре" << endl << "Ты заработал чуть больше знаний и понимания!";
    kn += 5;
    //ОРГ
    cin.ignore();
    cin.ignore();
    std::cout << "\n\nПрошло немного времени, ты исправно ходил почти на все пары, делал все задания и кое-что понял..." << endl << "На онлайн парах не следят, где ты и что ты делаешь...";
    std::cout << "\nПойдёшь ли ты обедать во время пары? Или будешь примерно сидеть, слушать и отвечать...,и голодать\n[1 - ОБЕДАТЬ, 0 - УЧИТЬСЯ]\n";
    std::cin >> f;
    if (f == 0) {
        printf("Молодец! Ты ответил на все вопросы преподавателя и получил несколько \"плюсиков\".\nНо постоянно урчащий живот и чувство голода испортили тебе настроение :(\n");
        cin.ignore();
        cin.ignore();
        kn += 5;
        stress += 5;
    }
    else if (f == 1) {
        printf("Приятного аппетита! Пару раз тебя звал преподаватель, но ты не откликнулся, потому что наслаждался вкуснейшим супом :)\nКажется, тебе поставили \"минус\"..\n");
        cin.ignore();
        cin.ignore();
        kn -= 5;
        stress -= 5;
    }
    else printf("Кажется,ты ввёл некорректный ответ - посмотри на возможные варианты снова.");
    //ПЕРВАЯ САМОСТОЯТЕЛЬНАЯ ПО ЛИНАЛУ
    std::cout << "\n\nВремя идёт очень быстро!\nОт старшекурников ты узнал, что на каждой практике по линалу у вас будут проверочные работы.\nПодготовишься ли ты вечером к ней?" << endl << "[1 - ДА/0 - НЕТ]\n";
    std::cin >> f;
    if (f == 1) {
        printf("Очень ответственный подход - молодец! Завтра ты точно блеснёшь своими знаниями!\n");
        cin.ignore();
        cin.ignore();
        kn += 10;
        stress += 1;
    }
    else if (f == 0) {
        printf("Спать же тоже когда-то надо! Завтра как-нибудь да и выкрутишься...");
        cin.ignore();
        cin.ignore();
        kn -= 5;
        stress -= 5;
    }
    else printf("Кажется,ты ввёл некорректный ответ - посмотри на возможные варианты снова.");
    std::cout << "\nТы приходишь на ту самую практику по линейной алгебре и геометрии...";
    Sleep(1000);
    if (kn >= 10) {
        printf("\nПоздравляю, проверочная была очень лёгкой для тебя!\n Продолжай в том же духе!");
        cin.ignore();
        cin.ignore();
        kn += 5;
        stress -= 1;
    }
    else {
        printf("\nТы видишь задание и понимаешь, что вообще не знаешь, как это решать :(");
        cin.ignore();
        cin.ignore();
        printf("\nНе хочешь попробовать списать у соседа?\nВозможно у него всё правильно, а возможно нет...\n[1 - СПИСАТЬ/ 0 - НЕ СПИСЫВАТЬ]\n");
        std::cin >> f;
        if (f == 0) {
            printf("\nКажется, ты получил 0 за эту работу :(\nВозможно стоит чуть больше вкладывать сил в учёбу...");
            cin.ignore();
            kn -= 20;
            stress += 10;
        }
        else if (f == 1) {
            int x = rand() % (end - start + 1) + start;
            printf("\nПосмоотрим, с тобой ли удача сегодня - правильно ли пишет твой сосед и успеешь ли ты списать...");
            cin.ignore();
            cin.ignore();
            printf("\nЕсли выпавшее рандомное число будет больше или равно 15, ты получишь максимальную оценку за работу!\nЕсли же нет, ты получишь заслуженный 0...");
            std::cout << "\n\tТвоё число - " << x;
            if (x >= 15) {
                printf("\nТебе стоит пойти играть в казино! Максимальная оценка теперь твоя!");
                cin.ignore();
                cin.ignore();
                kn += 10;
                stress -= 5;
            }
            else {
                printf("\nНе сегодня, друг.\nПомни,что зимой тебя ждёт финальный босс!");
                cin.ignore();
                cin.ignore();
                kn -= 20;
                stress += 10;
            }
        }
        else printf("\nКажется,ты ввёл некорректный ответ - посмотри на возможные варианты снова.");
    }
    //вечериночки
    printf("\n\nВ этот же день твои одногруппники предлагают отдохнуть и повеселиться!\nЗавтра утром у тебя будут пары по математическому анализу...\nПойдёшь ли ты с ними?[1 - ДА/0 - НЕТ]\n");
    std::cin >> f;
    if (f == 0) {
        printf("\nКажется, тебя ждёт увлекательный вечер за кипой книг Зорича и Демидовича.");
        Sleep(1000);
        printf("\nДаа... Слишком много информации для одного вечера - ты изрядно устаёшь!");
        cin.ignore();
        kn += 20;
        stress += 20;
        health -= 10;
    }
    else if (f == 1) {
        printf("\nКогда-то же нужно отдыхать! Один вечер не может сильно повредить...");
        Sleep(1000);
        printf("\nТы немного расслабился, но пришёл домой совсем поздно, а количество выпитых тобой напитков точно не поможет завтра на учёбе :(");
        kn -= 15;
        stress -= 20;
        health -= 5;
        Sleep(1000);
        printf("\nТы еле-еле встаёшь утром...\nУпсс,ты уже сильно опаздываешь!");
        cin.ignore();
        cin.ignore();
    }
    //МАТАН
    printf("\nОказывается, сегодня у вас будет контрольная! Посмотрим, как ты справишься с ней...");
    cin.ignore();
    if ((kn >= 35) && (stress < 25)) {
        printf("\nТы решаешь её за 20 минут, а потом перепроверяешь много раз...\nТы определённо получаешь все 11 баллов! :)");
        cin.ignore();
        kn += 10;
        stress -= 1;
    }
    else if (kn < 35) {
        int y = rand() % (end - start + 1) + start;
        printf("\nДаа... Все эти непонятные слова в заданиях - тебе определённо не хватает подготовки :(");
        Sleep(1000);
        printf("\nТы можешь, конечно, попробовать достать телефон или тетрадь и списать оттуда...\nКто знает, заметит ли тебя преподаватель...[1 - ПОПРОБОВАТЬ/0 - НЕ ПРОБОВАТЬ]\n");
        std::cin >> s;
        if (s == 1) {
            int y = rand() % (end - start + 1) + start;
            printf("\nВсё будет зависеть от твоей удачи: если тебе выпадет число больше или равное 16, ты успеешь всё сделать незаметно!\nЕсли же нет,тебя с позором выгонят из аудитории :(\n");
            std::cout << "Твоё число - " << y << endl;
            if (y >= 16) {
                printf("Удача на твоей стороне! Ты получил свою 7!");
                cin.ignore();
                stress -= 1;
                kn += 5;
            }
            else {
                printf("Преподаватель замечает твой телефон...\nСтавит тебе 0 и выгоняет из аудитории!\nКажется, списывание - плохая идея.");
                cin.ignore();
                stress += 10;
                kn -= 20;
            }
        }
        else if ((s == 0) && (kn >= 0)) {
            printf("\nТы решил честно написать работу! И получил свою заслуженную 4...\nВсё-таки иногда учиться нужно...");
            cin.ignore();
            kn += 5;
            stress += 5;
        }
        else if ((s == 0) && (kn < 0)) {
            printf("\nХочешь написать всё, что знаешь сам, без списывания! Однако в учёбу ты вкладывал определённо недостаточно - твоя оценка 2 :(");
            cin.ignore();
            kn -= 10;
        }
        else printf("\nКажется,ты ввёл некорректный ответ - посмотри на возможные варианты снова.");
    }
    else if (stress >= 25) {
        printf("\nТы очень много занимался последнее время и почти не отдыхал :(\nТы начинаешь сильно нервничать - из головы вылетает всё, что ты знал...\nИногда стоит отдыхать: твоя оценка - 4.");
        cin.ignore();
        kn += 5;
        stress += 10;
        health -= 10;
    }
    printf("\n");
    //КОНЕЦ ПЕРВОГО МОДУЛЯ
    //max kn - 60, min kn - -85; max stress - 36, min stress - -35, min health - 80


    /* printf("!Объявление!\nВот и началась зимняя сессия!\nДалее будет решаться твое будущее!\nВ связи с твоей стратегией обучения вопросы будут восприниматься по-разному\n");
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
             printf("Сегодня тебе предстоит экзамен по математическому анализу. К сожалению, вместо учебы ты выбрал друзей и прогулки, поэтому вопросы покажутся тебе неимоверно сложными\n");
             printf("Ты заходишь в кабинет, накануне ты даже не заглядывал в тетрадь, так как у тебя там ничего не записано. Ты садишься за первую парту и ждешь своей участи\n");
             printf("Преподаватель запугивает аудиторию, дабы никто не списывал, однако даже заглянув кому-то в бланк ты видишь только фигу.\n");
             printf("Наконец, листочек с заданиями доходит и до тебя\n");
             printf("Вопрос 1\nРешить уравнение z^2 - 4z + 13 = 0\nВарианты ответа\n");
             std::cout << "1. Я дурак?\n2. Я дурак...\n3. Вот дураки, дискриминант же отрицательный! \n" << "\n";
             std::cin >> n;
             printf("Вопрос 2\nВычислить (-1 + i(3)^(1/2))^11.\nВарианты ответа\n");
             std::cout << "1. 0\n2. 1\n3. хз" << "\n";
             std::cin >> n;
             printf("Вопрос 3\nВычислить предел lim((x*sin2x)/(1 - cos x)).\nВарианты ответа\n");
             std::cout << "1. Откуда мне знать\n2. 0\n3. :(" << "\n";
             std::cin >> n;
             printf("Поздравляю, вы наконец написали экзамен!\nРезультаты будут известны после написания всех экзаменов!\n");
             break;
         case 3:
             printf("Сегодня тебе предстоит экзамен по дискретной математике. К сожалению, вместо учебы ты выбрал друзей и прогулки, поэтому вопросы покажутся тебе неимоверно сложными\n");
             printf("Ты заходишь в кабинет, накануне ты даже не заглядывал в тетрадь, так как у тебя там ничего не записано. Ты садишься за первую парту и ждешь своей участи\n");
             printf("Преподаватель запугивает аудиторию, дабы никто не списывал, однако даже заглянув кому-то в бланк ты видишь только фигу.\n");
             printf("Наконец, листочек с заданиями доходит и до тебя\n");
             printf("Вопрос 1\n. Решить уравнение A u X = В\nВарианты ответа\n");
             std::cout << "1. Ну если то, то и это\n2. А где числа\n3. 3" << "\n";
             std::cin >> n;
             printf("Вопрос 2\nСоставить диаграмму отношения включения на булеанах множества Р = { -1 ,0 ,1 }\nВарианты ответа\n");
             std::cout << "1. 0\n2. 1\n3. хз" << "\n";
             std::cin >> n;
             printf("Вопрос 3\nСоставить диаграмму отношения включения на булеане множества Р = { 2,4,6,8 } и ее дерево путей.Записать все последовательности включений элементов булеана.\nВарианты ответа\n");
             std::cout << "1. Откуда мне знать\n2.пупупу\n3. :(" << "\n";
             std::cin >> n;
             printf("Поздравляю, вы наконец написали экзамен!\nРезультаты будут известны после написания всех экзаменов!\n");
             break;
         }
         printf("Выходя из аудитории, ты понимаещь, насколько все плохо, однако готовиться уже поздно\n");
         printf("Экзамены по остальным предметам проходят так же, как и первый\n Ты как и в первый раз пишешь ответы наугад, и кажется понимаешь к чему все ведет...");


     }*/
    return 0;
}