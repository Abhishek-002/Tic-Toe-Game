#include <iostream>
using namespace std;

char BoardDraw[10] = { '0','1','2',
       '3','4','5',
       '6','7','8','9' };

int winner();
void GameBoard(string, string);
int Gamer;

/*
1.GameChart draw.
2.Changing the Value of GameChart.
3.Check Win.
*/
int main()
{   
    Gamer = 1;
    int i, choice;
    string name1;
    string name2;

    cout << "Enter First Gamer Name: ";
    cin >> name1;

    cout << "\nEnter Second Gamer Name: ";
    cin >> name2;

    char mark;

    do
    {
        GameBoard(name1, name2);
        Gamer = (Gamer % 2) ? 1 : 2;

        if (Gamer == 1)
        {
            cout << name1 << " Your Turn, Enter a Number:  ";
            cin >> choice;
        }

        else
        {
            cout << name2 << " Your Turn, Enter a Number:  ";
            cin >> choice;
        }

        /* Part 2 Start Here*/

        mark = (Gamer == 1) ? 'X' : '0';

        if (choice == 1 && BoardDraw[1] == '1')

            BoardDraw[1] = mark;
        else if (choice == 2 && BoardDraw[2] == '2')

            BoardDraw[2] = mark;
        else if (choice == 3 && BoardDraw[3] == '3')

            BoardDraw[3] = mark;
        else if (choice == 4 && BoardDraw[4] == '4')

            BoardDraw[4] = mark;
        else if (choice == 5 && BoardDraw[5] == '5')

            BoardDraw[5] = mark;
        else if (choice == 6 && BoardDraw[6] == '6')

            BoardDraw[6] = mark;
        else if (choice == 7 && BoardDraw[7] == '7')

            BoardDraw[7] = mark;
        else if (choice == 8 && BoardDraw[8] == '8')

            BoardDraw[8] = mark;
        else if (choice == 9 && BoardDraw[9] == '9')

            BoardDraw[9] = mark;
        else
        {
            cout << "\nInvalid Choice Try Again ";
            Gamer--;
            cin.ignore();
            cin.get();
        }
        i = winner();
        Gamer++;
    } while (i == -1);
    GameBoard(name1, name2);
    if (i == 1)
    {
        cout << "\n=============================\n";
        cout << "\a" << name1 << " Is A Winner \n";
        cout << "=============================\n";
    }
    else if (i == 2)
    {
        cout << "\n=============================\n";
        cout << "\a" << name2 << " Is A Winner \n";
        cout << "=============================\n";
    }
    else
    {
        cout << "\n=============================\n";
        cout << "\aGame Is Draw\n";
        cout << "=============================\n";
    }

    cin.ignore();
    cin.get();
    return 0;
}

/*Part 2 ends Here*/

/*Part 3 Start Here*/
int winner()
{
    if (BoardDraw[1] == BoardDraw[2] && BoardDraw[2] == BoardDraw[3])

        return Gamer;
    else if (BoardDraw[4] == BoardDraw[5] && BoardDraw[5] == BoardDraw[6])

        return Gamer;
    else if (BoardDraw[7] == BoardDraw[8] && BoardDraw[8] == BoardDraw[9])

        return Gamer;
    else if (BoardDraw[1] == BoardDraw[4] && BoardDraw[4] == BoardDraw[7])

        return Gamer;
    else if (BoardDraw[2] == BoardDraw[5] && BoardDraw[5] == BoardDraw[8])

        return Gamer;
    else if (BoardDraw[3] == BoardDraw[6] && BoardDraw[6] == BoardDraw[9])

        return Gamer;
    else if (BoardDraw[1] == BoardDraw[5] && BoardDraw[5] == BoardDraw[9])

        return Gamer;
    else if (BoardDraw[3] == BoardDraw[5] && BoardDraw[5] == BoardDraw[7])

        return Gamer;
    else if (BoardDraw[1] != '1' && BoardDraw[2] != '2' && BoardDraw[3] != '3'
        && BoardDraw[4] != '4' && BoardDraw[5] != '5' && BoardDraw[6] != '6'


        && BoardDraw[7] != '7' && BoardDraw[8] != '8' && BoardDraw[9] != '9')

        return 0;
    else
        return -1;
}

/*Part 3 ends Here*/

/*Part 1 Start Here*/

void GameBoard(string name1, string name2)
{
    system("cls");

    cout << "\n==========================";
    cout << "\n\tTic Tac Toe\n";
    cout << "\n==========================\n";

    string nam1 = name1;
    string nam2 = name2;

    cout << nam1 << "( X )" << "========" << nam2 << " (0)\n\n";

    cout << "     ||     ||     " << endl;
    cout << "  " << BoardDraw[1] << "  ||  " << BoardDraw[2] << "  ||  " << BoardDraw[3] << endl;

    cout << "=====||=====||=====" << endl;
    cout << "     ||     ||     " << endl;

    cout << "  " << BoardDraw[4] << "  ||  " << BoardDraw[5] << "  ||  " << BoardDraw[6] << endl;

    cout << "=====||=====||=====" << endl;
    cout << "     ||     ||     " << endl;

    cout << "  " << BoardDraw[7] << "  ||  " << BoardDraw[8] << "  ||  " << BoardDraw[9] << endl;

    cout << "     ||     ||     " << endl << endl;
}