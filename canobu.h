#include <ctime>
using namespace std;

class Canobu {
    public:
        string game(){
            if (user <= 2){
                cout << endl << "Bot choice..." << endl << endl;
            } else {
                return "Введите число от 1 до 3.";
            }

            for (int i = 0; i < 3; ++i){
                if (bot == i){
                    result = massive[user][bot];

                    switch (result){
                        case 0:
                            cout << "\033[32m";
                            break;
                        case 1:
                            cout << "\033[31m";
                            break;
                        case 2:
                            cout << "\033[33m";
                            break;
                    }

                    return results[result] + "!\033[0m Bot has chosen " + objects[bot];
                }
            }
            return "Ban";
        }

        void enter(){
            cout << "Enter your choice: ";
            cin >> user;
            user--;

            srand(time(0));
            bot = rand() % 3;

            type = 1;
        }

        void logo(){
            cout << "\033[34m";
            cout << "                       _           " << endl;
            cout << "  ___ __ _ _ __   ___ | |__  _   _ " << endl;
            cout << " / __/ _` | '_ \\ / _ \\| '_ \\| | | |" << endl;
            cout << "| (_| (_| | | | | (_) | |_) | |_| |" << endl;
            cout << " \\___\\__,_|_| |_|\\___/|_.__/ \\__,_|" << endl << endl;
            cout << "\033[0m";

            for (int i = 0; i < 3; ++i){
                cout << i + 1 << ". " << objects[i] << endl;
            }
        }

    private:
        string results[3] = {"Win", "Lose", "Draw"};
        string objects[3] = {"Rock", "Scissors", "Paper"};
        int massive[3][3] = {{2, 0, 1}, {1, 2, 0}, {0, 1, 2}};

        int bot;
        int user;
        int type;
        int result;
};
