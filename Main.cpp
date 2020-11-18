//Prison management system
// Vansh Damania[1981009] & Hitansh Kadakia[1981018]
// username = admin
// password = pass

#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <fstream>
#include <ctime>
using namespace std;

void FrontPage(); // Front Page Or Main Page
void Date();      // Getting Date
void Time();      // Display time

class Prison
{
private:
    // Detaiils of Prisoner
    string First_Name[20] = {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
    string Second_Name[20];
    string Gender[20];
    int CellNo[20] = {1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020};
    int Age[20];
    double Height[20];
    string Eyecolor[20];
    string Crime[20];
    int Punishmentmonths[20];
    int o = 0;

public:
    void SetData();      // Set data of the prisoners
    void Details();      // Getting details of the prisoners
    void Afterlogin();   // After login page OR Menu function
    void Attendance();   // Storing attendace of the prisoners
    void Release();      // Release the prisoners
    void SearchPrison(); // Search Prison
    void PrisonFile();   // Priosn File
    void Logout();       // Logout
    void Exit();         // Exit function
    void Login();        //login
};

void Prison::Logout()
{
    system("cls");
    cout << "\n\n\n\n\n\n\t\t\t\t\t";
    cout << "logging out ";

    for (int x = 0; x < 15; x++)
    {
        for (int a = 0; a <= 100000000; a++)
        {
        }
        cout << ".";
    }
    Prison::Login();
}

void Prison::Login()
{

    char Username[15];
    char Password[15];
    char Epwd;
    int true1 = 1;
    int try1 = 0;
    int i = 0;

    do
    {
        system("cls");
        Time();
        cout << "\n\n\n\n\n\n";
        int a;
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    ----------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    |   PRISON STATION MANAGEMENT SYSTEM   |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    ----------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\n\n";
        cout << "\t\t\t\t\t";
        cout << "Username : ";
        cin >> Username;
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "Password : ";
        for (i = 0;;)
        {
            Epwd = getch();
            if ((Epwd >= 'a' && Epwd <= 'z') || (Epwd >= 'A' && Epwd <= 'Z') || (Epwd >= '0' && Epwd <= '9'))
            {
                Password[i] = Epwd;
                ++i;
                cout << "*";
            }
            if (Epwd == '\b' && i >= 1)
            {
                cout << "\b \b";
                --i;
            }
            if (Epwd == '\r')
            {
                Password[i] = '\0';
                break;
            }
        }

        if (strcmp(Username, "admin") == 0 && strcmp(Password, "pass") == 0)
        {
            cout << "\n\n";
            cout << "\t\t\t\t";
            cout << "You are accessed to the system!\n\n";
            cout << "\t\t\t\t";
            system("pause");
            system("cls");
            true1 = 0;
            try1 = 4;
            Prison::Afterlogin();
        }
        else
        {
            system("cls");
            try1 = try1 + 1;
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout << "\t\t\t\t\t";
            cout << "No. of attempts remain: " << 3 - try1;
            cout << "\n\n";
            cout << "\t\t\t\t";
            system("pause");

            if (try1 >= 3)
            {
                cout << "\t\t\t\t\t\t";
                cout << "\n";
                cout << "\t\t\t\t";
                cout << "No permission to enter the system!\n\n";
                cout << "\t\t\t\t";
                system("pause");
                exit;
            }
        }
    } while (try1 < 3);
}

void Prison ::SetData()
{
    system("cls");
    Time();
    int a, s;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    -----------------------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    |                                                   |\n";
    cout << "\t\t\t\t    |         Enter basic information of prisoner       |\n";
    cout << "\t\t\t\t    |                                                   |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    -----------------------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\n\n";
    cout << "\t\t\t\t\t";
    cout << "Enter first name : ";
    cin >> First_Name[o];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter second name : ";
    cin >> Second_Name[o];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter gender : ";
    cin >> Gender[o];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter age : ";
    cin >> Age[o];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter height : ";
    cin >> Height[o];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter eyecolor : ";
    cin >> Eyecolor[o];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter crime : ";
    cin >> Crime[o];
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Enter punishment span in months : ";
    cin >> Punishmentmonths[o];
    cout << "\t\t\t\t\t";
    cout << "\n\n\n";
    cout << "\t\t\t\t\t";
    cout << "Your Cell No is " << CellNo[o];
    cout << "\n\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    o = o + 1;
    cout << "Press 1 to return : ";
    scanf("%d", &s);
    if (s == 1)
    {
        Prison ::Afterlogin();
    }
}

void Prison ::Details()
{
    system("cls");
    Time();
    int t;
    for (t = 0; t <= 100000000; t++)
    {
    }
    cout << "\t\t\t\t    -----------------------------------------------------\n";
    for (t = 0; t <= 100000000; t++)
    {
    }
    cout << "\t\t\t\t    |                                                   |\n";
    cout << "\t\t\t\t    |                Prisoner list                      |\n";
    cout << "\t\t\t\t    |                                                   |\n";
    for (t = 0; t <= 100000000; t++)
    {
    }
    cout << "\t\t\t\t    -----------------------------------------------------\n";
    for (t = 0; t <= 100000000; t++)
    {
    }
    int s, c = 0, p = 0;

    cout << "\n\t\t\t\t\t";

    cout << "\n===========================================================================================================\n";
    cout << "SR.\tNAME\t\t\tCell Block\tAge\tGender\tHeight\tEye Colour\tCrime\tPunishment\n";
    cout << "===========================================================================================================\n";

    for (int x = 0; x <= 19; x++)
    {
        if (First_Name[x] != " ")
        {
            p++;
            cout << p << "\t" << First_Name[x] << "" << Second_Name[x] << "\t\t" << CellNo[x] << "\t\t" << Age[x] << "\t" << Gender[x] << "\t" << Height[x] << "\t" << Eyecolor[x] << "\t\t" << Crime[x] << "\t\t" << Punishmentmonths[x] << endl;
            cout << "\n"
                 << endl;
            c++;
        }
    }
    if (c == 0)
    {
        cout << "\n\t\t\t\t\t";
        cout << "No prisoner Present";
        cout << "\n";
        cout << "\t\t\t\t\t";
    }
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Press 1 to return : ";
    scanf("%d", &s);
    if (s == 1)
    {
        Prison::Afterlogin();
    }
}

void Prison ::Attendance()
{
    int s, l, c = 0;
    char ch;
    do
    {
        system("cls");
        Time();
        system("cls");
        int t;
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |           Prisoner attendance maintainer          |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        for (t = 0; t <= 100000000; t++)
        {
        }

        cout << "\n\t\t\t\t\t";
        cout << "\n===========================================================================================================\n";
        cout << "NAME\t\t\tCell Block\tAge\tGender\tHeight\tEye Colour\tCrime\tPunishment\n";
        cout << "===========================================================================================================\n";
        for (int x = 0; x <= 19; x++)
        {
            if (First_Name[x] != " ")
            {
                cout << First_Name[x] << "" << Second_Name[x] << "\t\t" << CellNo[x] << "\t\t" << Age[x] << "\t" << Gender[x] << "\t" << Height[x] << "\t" << Eyecolor[x] << "\t\t" << Crime[x] << "\t\t" << Punishmentmonths[x] << endl;
                cout << "\n"
                     << endl;
                c++;
            }
        }
        if (c != 0)
        {
            cout << "\n\t\t\t\t\t";
            cout << "Enter the cell  block of the prisoner :";
            scanf("%d", &l);
            l = l - 1001;
            cout << "\n\t\t\t\t\t";
            cout << "Name : ";
            cout << First_Name[l] << " " << Second_Name[l];
            Punishmentmonths[l]--;
            cout << "\n\t\t\t\t\t";
            cout << "Punishment for :" << Punishmentmonths[l] << " months";
            if (Punishmentmonths[l] <= 0)
            {
                cout << "\n\t\t\t\t\t";
                cout << "Prisoner is ready for release";
            }
            cout << "\n\n";
            cout << "\n\t\t\t\t\t";
            cout << "Press y to choose another prisoner and press n to exit :";
            cin >> ch;
        }
        else
        {
            int a;
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t                                                    \n";
            cout << "\t\t\t\t    ------------------------------------------------\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    |             No prisoners present             |\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    ------------------------------------------------\n";
        }

    } while (ch == 'y');
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Press 1 to return : ";
    scanf("%d", &s);
    if (s == 1)
    {
        Prison::Afterlogin();
    }
}

void Prison ::Release()
{
    int s, l, c = 0, r;
    char ch;
    do
    {
        system("cls");
        Time();
        int t;
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |                Release prisoner                   |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        for (t = 0; t <= 100000000; t++)
        {
        }

        cout << "\n\t\t\t\t\t";
        cout << "\n===========================================================================================================\n";
        cout << "NAME\t\t\tCell Block\tAge\tGender\tHeight\tEye Colour\tCrime\tPunishment\n";
        cout << "===========================================================================================================\n";

        for (int x = 0; x <= 19; x++)
        {
            if (First_Name[x] != " ")
            {
                cout << First_Name[x] << "" << Second_Name[x] << "\t\t" << CellNo[x] << "\t\t" << Age[x] << "\t" << Gender[x] << "\t" << Height[x] << "\t" << Eyecolor[x] << "\t\t" << Crime[x] << "\t\t" << Punishmentmonths[x] << endl;
                cout << "\n"
                     << endl;
                c++;
            }
        }
        if (c != 0)
        {
            cout << "\n\t\t\t\t\t";
            cout << "Enter the cell block of the prisoner :";
            scanf("%d", &l);
            l = l - 1001;
            cout << "\n\t\t\t\t\t";
            cout << "Name : ";
            cout << First_Name[l] << " " << Second_Name[l];
            cout << "\n\t\t\t\t\t";
            if (Punishmentmonths[l] <= 0)
            {
                cout << "\n\t\t\t\t\t";
                cout << "Prisoner is ready for release";
                cout << "\n\t\t\t\t\t";
                cout << "Press 1 to release the prisoner :";
                cin >> r;
                if (r == 1)
                {
                    First_Name[l] = " ";
                    Second_Name[l] = " ";
                    Gender[l] = " ";
                    Age[l] = 0;
                    Height[l] = 0;
                    Eyecolor[l] = " ";
                    Punishmentmonths[l] = 0;
                    cout << "\n\t\t\t\t\tProcessing";

                    for (int process = 0; process < 7; process++)
                    {
                        for (int a = 0; a <= 100000000; a++)
                        {
                        }
                        cout << ".";
                    }
                    cout << "\n\t\t\t\t\t";
                    cout << "Prisoner released successfully";
                }
            }
            else
            {
                cout << "\n\t\t\t\t\t";
                cout << "Prisoner is not ready for release";
            }

            cout << "\n\n";
            cout << "\n\t\t\t\t\t";
            cout << "Press y to choose another prisoner and press n to exit :";
            cin >> ch;
        }
        else
        {
            int a;
            cout << "\t\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t\t";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t                                                    \n";
            cout << "\t\t\t\t    ------------------------------------------------\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    |             No prisoners present             |\n";
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    ------------------------------------------------\n";
            break;
        }
    } while (ch == 'y');
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Press 1 to return : ";
    scanf("%d", &s);
    if (s == 1)
    {
        Prison::Afterlogin();
    }
}

void Prison ::SearchPrison()
{
    int info;
    int CN, i, a, s, l;
    int c = 0, p = 0;

    system("cls");
    cout << "\t\t\t\t    ----------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    |             Search Menu              |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    ----------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\n\n";
    cout << "\t\t\t\t";
    cout << "Enter the prisoner cell id to be searched : ";
    cin >> CN;
    cout << "\n\t\t\t\t";
    cout << "\n===========================================================================================================\n";
    cout << "NAME\t\t\tCell Block\tAge\tGender\tHeight\tEye Colour\tCrime\tPunishment\n";
    cout << "===========================================================================================================\n";
    l = CN - 1001;
    info = CellNo[l];
    if (CN == info)
    {
        if (First_Name[l] != " ")
        {
            cout << First_Name[l] << "" << Second_Name[l] << "\t\t" << CellNo[l] << "\t\t" << Age[l] << "\t" << Gender[l] << "\t" << Height[l] << "\t" << Eyecolor[l] << "\t\t" << Crime[l] << "\t\t" << Punishmentmonths[l] << endl;
            cout << "\n"
                 << endl;
        }
        else
        {
            cout << "\n";
            cout << "\t\t\t\t";
            cout << "\n";
            cout << "\t\t\t\t";
            cout << "cell block empty" << endl;
        }
    }
    else
    {
        cout << "\n";
        cout << "\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t";
        cout << "invalid cell id" << endl;
    }
    cout << "\n";
    cout << "\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t";
    cout << "Press 1 to return : ";
    scanf("%d", &s);
    if (s == 1)
    {
        Prison::Afterlogin();
    }
}

void Prison ::PrisonFile()
{
    Time();
    system("cls");

    int format, a;
    int s, c = 0, p = 0;
    cout << "\n\n\n";
    cout << "\t\t\t\t-----------------------------------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t|                                                               |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t|                     1)   Txt File                             |\n";
    cout << "\t\t\t\t|                                                               |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t|                     2)   Html File                            |\n";
    cout << "\t\t\t\t|                                                               |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t|                     3)   Word File                            |\n";
    cout << "\t\t\t\t|                                                               |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t-----------------------------------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\n";
    cout << "\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t";
    cout << "In which format you want to open your file? ";
    cin >> format;
    std::ofstream MyFile_;
    switch (format)
    {
    case 1:
        Time();
        system("cls");
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |        Txt File created successfully              |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";

        MyFile_.open("Prison_Data.txt");

        MyFile_ << "\t\t\t\t    -----------------------------------------------------\n";
        MyFile_ << "\t\t\t\t    |                                                                            |\n";
        MyFile_ << "\t\t\t\t    |                Prisoner list                                     |\n";
        MyFile_ << "\t\t\t\t    |                                                                            |\n";
        MyFile_ << "\t\t\t\t    -----------------------------------------------------\n";

        MyFile_ << "\n\t\t\t\t\t";

        MyFile_ << "\n=====================================================================================================================\n";
        MyFile_ << "SR.\tNAME\t\t\tCell Block\tAge\t\tGender\tHeight\tEye Colour\tCrime\tPunishment\n";
        MyFile_ << "=======================================================================================================================\n";

        for (int x = 0; x <= 19; x++)
        {
            if (First_Name[x] != " ")
            {
                p++;
                MyFile_ << p << "\t" << First_Name[x] << "" << Second_Name[x] << "\t\t" << CellNo[x] << "\t" << Age[x] << "\t\t" << Gender[x] << "\t" << Height[x] << "\t\t" << Eyecolor[x] << "\t\t" << Crime[x] << "\t\t" << Punishmentmonths[x] << endl;
                MyFile_ << "\n"
                        << endl;
                c++;
            }
        }
        if (c == 0)
        {
            MyFile_ << "\n\t\t\t\t\t";
            MyFile_ << "No prisoner Present";
            MyFile_ << "\n";
            MyFile_ << "\t\t\t\t\t";
        }
        MyFile_.close();
        break;

    case 2:
        Time();
        system("cls");
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |          Html File created successfully           |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";

        MyFile_.open("Prison_Data.html");

        MyFile_ << "\t\t\t\t    -----------------------------------------------------";
        MyFile_ << "\t\t\t\t    |                                                   |";
        MyFile_ << "\t\t\t\t    |                Prisoner list                      |";
        MyFile_ << "\t\t\t\t    |                                                   |";
        MyFile_ << "\t\t\t\t    -----------------------------------------------------";
        MyFile_ << "<br>";

        for (int x = 0; x <= 19; x++)
        {
            if (First_Name[x] != " ")
            {
                MyFile_ << "First name: " << First_Name[x];
                MyFile_ << "<br>";
                MyFile_ << "Second name: " << Second_Name[x];
                MyFile_ << "<br>";
                MyFile_ << "Cell number: " << CellNo[x];
                MyFile_ << "<br>";
                MyFile_ << "Age: " << Age[x];
                MyFile_ << "<br>";
                MyFile_ << "Gender: " << Gender[x];
                MyFile_ << "<br>";
                MyFile_ << "Height: " << Height[x];
                MyFile_ << "<br>";
                MyFile_ << "Eye colour: " << Eyecolor[x];
                MyFile_ << "<br>";
                MyFile_ << "Crime: " << Crime[x];
                MyFile_ << "<br>";
                MyFile_ << "Punishment Months: " << Punishmentmonths[x];
                MyFile_ << "<br>";
                MyFile_ << "<br>";
                c++;
            }
        }
        if (c == 0)
        {

            MyFile_ << "<br>\t\t\t\t\t";
            MyFile_ << "No prisoner Present";
            MyFile_ << "<br>";
            MyFile_ << "\t\t\t\t\t";
        }
        MyFile_.close();
        break;

    case 3:
        Time();
        system("cls");
        cout << "\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t";
        cout << "\n\n\n\n\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |          Word File created successfully           |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";

        MyFile_.open("Prison_Data.doc");

        MyFile_ << "\t\t\t *** Prisoner list *** ";
        MyFile_ << "\n";

        for (int x = 0; x <= 19; x++)
        {
            if (First_Name[x] != " ")
            {
                MyFile_ << "First name: " << First_Name[x];
                MyFile_ << "\n";
                MyFile_ << "Second name: " << Second_Name[x];
                MyFile_ << "\n";
                MyFile_ << "Cell number: " << CellNo[x];
                MyFile_ << "\n";
                MyFile_ << "Age: " << Age[x];
                MyFile_ << "\n";
                MyFile_ << "Gender: " << Gender[x];
                MyFile_ << "\n";
                MyFile_ << "Height: " << Height[x];
                MyFile_ << "\n";
                MyFile_ << "Eye colour: " << Eyecolor[x];
                MyFile_ << "\n";
                MyFile_ << "Crime: " << Crime[x];
                MyFile_ << "\n";
                MyFile_ << "Punishment Months: " << Punishmentmonths[x];
                MyFile_ << "\n";
                MyFile_ << "\n";
                c++;
            }
        }
        if (c == 0)
        {

            MyFile_ << "\n\t\t\t\t";
            MyFile_ << "No prisoner Present";
            MyFile_ << "\n";
            MyFile_ << "\t\t\t\t\t";
        }
        MyFile_.close();
        break;
    default:
        cout << "Invalid choice";
        break;
    }

    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "\n";
    cout << "\t\t\t\t\t";
    cout << "Press 1 to return : ";
    scanf("%d", &s);
    if (s == 1)
    {
        Prison::Afterlogin();
    }
}

void Prison ::Afterlogin()
{
    int a, c;
    int v;
    do
    {
        v = 0;
        system("cls");
        Time();
        cout << "\n\n\n";
        cout << "\t\t\t\t---------------------------------------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     1)   New prisoner entry                             |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     2)   Prisoner details                               |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     3)   Attendace prisoner                             |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     4)   Release prisoner                               |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     5)   Search prisoner                                |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     6)   Prison File                                    |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     7)   Logout                                         |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     8)   Exit                                           |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t---------------------------------------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\n";
        cout << "\t\t\t\t\t\t\t";
        cout << "\n";
        cout << "\t\t\t\t\t\t\t";
        cout << "Enter your choice : ";
        cin >> c;
        switch (c)
        {
        case 1:
            Prison ::SetData();
            break;
        case 2:
            Prison ::Details();
            break;
        case 3:
            Prison ::Attendance();
            break;
        case 4:
            Prison ::Release();
            break;
        case 5:
            Prison ::SearchPrison();
            break;
        case 6:
            Prison::PrisonFile();
            break;
        case 7:
            Prison::Logout();
            break;
        case 8:
            Prison::Exit();
            break;
        default:
            cout << "\n\t\t\t\tInvalid choice\n";
            cout << "\t\t\t\tPress 1 to return : ";
            cin >> v;
        }
    } while (v == 1);
}

void Prison ::Exit()
{
    system("cls");
    Time();
    cout << "\n\n\n\n\n\n\t\t\t\t\t\t";
    cout << "Thank you!!";
    cout << "\n\n\n\n\n\n\t\t\t\t\t\t";
    getch();
}

void Date()
{
    time_t T = time(NULL);
    struct tm tm = *localtime(&T);
    cout << "\n\n\n";
    cout << "\t\t\t\t\t   Date: " << tm.tm_mday << "/" << tm.tm_mon + 1 << "/" << tm.tm_year + 1900 << "\n";
}

void Time()
{
    time_t curr_time;
    curr_time = time(NULL);

    tm *tm_local = localtime(&curr_time);
    cout << "Time : " << tm_local->tm_hour << ":" << tm_local->tm_min << ":" << tm_local->tm_sec << endl;
}

void FrontPage()
{
    int process = 0;
    system("cls");
    Time();
    Date();
    cout << "\n";
    int a;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    ----------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    |   PRISON STATION MANAGEMENT SYSTEM   |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    ----------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\n\n";
    cout << "\t\t\t\t";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "Prepared By    ";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << ":";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "   Hitansh Kadakia[1981018] & Vansh Damania[1981009]";
    cout << "\n\n";
    cout << "\t\t\t\t";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "Mini Project   ";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << ":";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "   Prison Management System";
    cout << "\n\n";
    cout << "\t\t\t\t";
    cout << "\n\n";
    cout << "\n\n";
    cout << "\t\t\t\t";
    system("pause");
    cout << "\n\t\t\t\tLoading";

    for (process = 0; process < 15; process++)
    {
        for (int a = 0; a <= 100000000; a++)
        {
        }
        cout << ".";
    }
}

int main()
{
    Prison a;

    FrontPage();
    a.Login();
    return 0;
}
