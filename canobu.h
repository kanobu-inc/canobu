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
                    e = results[result] + "! Bot has chosen " + objects[bot];
                    return e;
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
            cout << endl << " Rock paper scissors " << endl << endl;
            for (int i = 0; i < 3; ++i){
                cout << i + 1 << ". " << objects[i] << endl;
            }
        }

    private:
        string results[3] = {"Win", "Lose", "Draw"};
        string objects[3] = {"Rock", "Scissors", "Paper"};
        int massive[3][3] = {{2, 0, 1}, {1, 2, 0}, {0, 1, 2}};

        string e;
        int bot;
        int user;
        int type;
        int result;
};
