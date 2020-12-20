#include <ctime>

using namespace std;

class Canobu {
    public:
        int random(){
            srand(time(0));
            return rand() % 3;
        }

        string game(){
            bot = random();
            type = 1;

            if (user <= 2){
                cout << endl << "Bot choice..." << endl << endl;
            } else {
                return "\n\033[31mError!\033[0m Enter number from 1 until 3.";
            }

            for (int i = 0; i < 3; ++i){
                if (bot == i){
                    result = massive[user][bot];

					cout << "\033[1m";

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
        }

        void logo(){
            cout << "\033[1m\033[34m";
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
