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
    user = 2;

    int massive[3][3] = {
        {2, 0, 1},
        {1, 2, 0},
        {0, 1, 2}
    };

    user--;
    bot--;

    // cout << "user, bot = " << user << ", " << bot << endl;

    if (user <= 2){
        cout << "Бот выбирает..." << endl << endl;
    } else {
        cout << "Введите число от 1 до 3." << endl;
        return;
    }

    for (int i = 0; i < 3; ++i){
        if (bot == i){
            event(massive[user][bot], bot);
            break;
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


