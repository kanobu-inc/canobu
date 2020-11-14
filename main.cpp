#include <iostream>
#include <ctime>
using namespace std;

void event(int type, int bot){
    string results[3] = {"Победа", "Проигрыш", "Ничья"};
    string objects[3] = {"камень", "ножницы", "бумага"};
    cout << " " << results[type] << "! " << "У бота был " << objects[bot] << endl;
}

void game(int user){
    srand(time(0));
    int bot = 1 + rand() % 3;

    user--;
    bot--;

    // cout << "user, bot = " << user << ", " << bot << endl;

    if (user <= 2){
        cout << "Бот выбирает..." << endl << endl;
    } else {
        cout << "Введите число от 1 до 3." << endl;
        return;
    }

    if (user == 0){
        if (bot == 0){
            event(2, bot);
        } else if (bot == 1){
            event(0, bot);
        } else if (bot == 2){
            event(1, bot);
        }
    } else if (user == 1){
        if (bot == 0){
            event(1, bot);
        } else if (bot == 1){
            event(2, bot);
        } else if (bot == 2){
            event(0, bot);
        }
    } else if (user == 2){
        if (bot == 0){
            event(0, bot);
        } else if (bot == 1){
            event(1, bot);
        } else if (bot == 2){
            event(2, bot);
        }
    }
}

int main(){
    cout << "                         " << endl;
    cout << " Камень, ножницы, бумага " << endl;
    cout << "                         " << endl;
    cout << "1. Камень" << endl;
    cout << "2. Ножницы" << endl;
    cout << "3. Бумага" << endl;
    cout << "Выбор: ";

    int number;
    cin >> number;

    cout << endl;

    game(number);

    return 0;
}


