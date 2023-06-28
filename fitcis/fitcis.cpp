#include <stdlib.h>
#include <fstream>// for read and update database
#include <iostream>// for input and output
#include <string>// usage of getline and string data type
#include <Windows.h>// for manipulating console 
#include <conio.h>
#include <stdio.h>// input and output
#include <shellapi.h>// accessing links
#include <ctime>// used for the games
using namespace std;

// STUDENT void
void student();
void Slogin();
void Sfpass();
void Sreg();
void Sfit(string Suser);

//ADMIN void
void admin();
void Alogin();
void Afpass();
void Areg();
void Afit(string Auser);

//FITCIS void
void about(string Suser);
void fitfloor(string Suser);
void conduct(string Suser);
void off(string Suser);
void acad(string Suser);
void game(string Suser);
void link(string Suser);
void con(string Suser);


//FITCIS about
void vmc(string Suser);
void his(string Suser);
void icon(string Suser);
void hymn(string Suser);



//FITCIS Floors
void floor1(string Suser);
void floor2(string Suser);
void floor3(string Suser);
void floor4(string Suser);
void floor5(string Suser);
void floor6(string Suser);
void floor7(string Suser);
void floor8(string Suser);
void floor9(string Suser);
void floor10(string Suser);

void floor11(string Suser);
void floor12(string Suser);
void floor14(string Suser);
void floor15(string Suser);
void floor16(string Suser);
void floor17(string Suser);
void floor18(string Suser);

//FITCIS Offices
void aero(string Suser);
void accntng(string Suser);
void cash(string Suser);
void rgstr(string Suser);
void cesu(string Suser);
void csms(string Suser);
void du(string Suser);
void gu(string Suser);
void sadu(string Suser);
void hsu(string Suser);
void icare(string Suser);
void ialap(string Suser);
void lbry(string Suser);


//FITCIS Academics
void dcode(string Suser);
void tuit(string Suser);
void ccsma(string Suser);
void eng(string Suser);

//FITCIS CCSMA 
void se(string Suser);
void ds(string Suser);
void ba(string Suser);
void ib(string Suser);
void agd(string Suser);
void wma(string Suser);
void bma(string Suser);

//FITCIS Engineering
void ce(string Suser);
void cpe(string Suser);
void ee(string Suser);
void elc(string Suser);
void me(string Suser);

//FITCIS Game
void quiz(string Suser);
void thunt(string Suser);
void luck(string Suser);


//FITCIS Admin access
void Aabout(string Auser);
void Afitfloor(string Auser);
void Aconduct(string Auser);
void Aoff(string Auser);
void Aacad(string Auser);
void Alink(string Auser);
void Acon(string Auser);

//FITCIS admin about
void Avmc(string Auser);
void Ahis(string Auser);
void Aicon(string Auser);
void Ahymn(string Auser);

//FITCIS Admin floors
void Afloor1(string Auser);
void Afloor2(string Auser);
void Afloor3(string Auser);
void Afloor4(string Auser);
void Afloor5(string Auser);
void Afloor6(string Auser);
void Afloor7(string Auser);
void Afloor8(string Auser);
void Afloor9(string Auser);
void Afloor10(string Auser);
void Afloor11(string Auser);
void Afloor12(string Auser);
void Afloor14(string Auser);
void Afloor15(string Auser);
void Afloor16(string Auser);
void Afloor17(string Auser);
void Afloor18(string Auser);

//FITCIS Admin Offices
void Aaero(string Auser);
void Aaccntng(string Auser);
void Acash(string Auser);
void Argstr(string Auser);
void Acesu(string Auser);
void Acsms(string Auser);
void Adu(string Auser);
void Agu(string Auser);
void Asadu(string Auser);
void Ahsu(string Auser);
void Aicare(string Auser);
void Aialap(string Auser);
void Albry(string Auser);

//FITCIS Admin ccsma
void Accsma(string Auser);
void Aeng(string Auser);
void Ase(string Auser);
void Ads(string Auser);
void Aba(string Auser);
void Aib(string Auser);
void Aagd(string Auser);
void Awma(string Auser);
void Abma(string Auser);


//FITCIS Admin eng
void Ace(string Auser);
void Acpe(string Auser);
void Aee(string Auser);
void Aelc(string Auser);
void Ame(string Auser);


//FITCIS Admin editing info
void edabout(string Auser);
void edfitfloor(string Auser);
void edconduct(string Auser);
void edoff(string Auser);
void edacad(string Auser);
void edcon(string Auser);
void abouted(string Auser);
void fitfloored(string Auser);
void offed(string Auser);



int main() {
	system("cls");
	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 600;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//attrib for color changing
	SetConsoleTextAttribute(color, 2);
	cout << "------------------------------------------------\n";
	cout << "--------- WELCOME TO FITCIS LOGIN PAGE ---------\n";
	cout << "------------------------------------------------\n";
	cout << endl;

	int userT;

	SetConsoleTextAttribute(color, 14);
	cout << "[1] STUDENT \n";
	cout << "[2] ADMIN \n\n";
	cout << "[0] EXIT \n\n";

	SetConsoleTextAttribute(color, 15);
	cout << "Please enter your choice: ";
	SetConsoleTextAttribute(color, 14);
	cin >> userT;
	cout << endl;

	switch (userT) {
	case 1:
		student();
		break;

	case 2:
		admin();
		break;

	case 0:
		SetConsoleTextAttribute(color, 2);
		cout << "---------- \n";
		SetConsoleTextAttribute(color, 11);
		cout << "Thank you for visiting FITCIS. Please come again. \n";
		system("pause");
		cin.clear();
		break;

	default:
		system("cls");
		SetConsoleTextAttribute(color, 12);
		cout << "Invalid input. Please try again. \n";
		main();
	}
}


void student() {
	system("cls");
	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 600;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//attrib for color changing
	SetConsoleTextAttribute(color, 2);
	cout << "----------------------------------------------------------\n";
	cout << "--------- WELCOME TO FITCIS LOGIN PAGE : STUDENT ---------\n";
	cout << "----------------------------------------------------------\n";
	cout << endl;

	int Schoice;

	SetConsoleTextAttribute(color, 14);
	cout << "[1] LOGIN \n";
	cout << "[2] REGISTER \n";
	cout << "[3] SEARCH ACCOUNT \n";
	cout << "[4] BACK \n\n";
	cout << "[0] EXIT \n\n";

	SetConsoleTextAttribute(color, 15);
	cout << "Please enter your choice: ";
	SetConsoleTextAttribute(color, 14);
	cin >> Schoice;
	cout << endl;

	switch (Schoice) {
	case 1:
		Slogin();
		break;

	case 2:
		Sreg();
		break;


	case 3:
		Sfpass();
		break;


	case 4:
		system("cls");
		main();
		break;

	case 5:
		SetConsoleTextAttribute(color, 2);
		cout << "---------- \n";
		SetConsoleTextAttribute(color, 11);
		cout << "Thank you for visiting FITCIS. Please come again. \n";
		system("pause");
		cin.clear();
		break;

	default:
		SetConsoleTextAttribute(color, 12);
		cout << "---------- \n";
		cout << "Invalid input. Please try again. \n";
		system("pause");
		student();
	}

}

void Slogin() {
	system("cls");

	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 600;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//attrib for color changing
	SetConsoleTextAttribute(color, 2);
	cout << "----------------------------------------------------------\n";
	cout << "--------- WELCOME TO FITCIS LOGIN PAGE : STUDENT ---------\n";
	cout << "----------------------------------------------------------\n";
	cout << endl;

	int i = 0;
	string Suser, Spass, Su, Sp;
	SetConsoleTextAttribute(color, 15);



	SetConsoleTextAttribute(color, 15);
	cout << "      Student Number: ";
	SetConsoleTextAttribute(color, 14);
	cin >> Suser;

	SetConsoleTextAttribute(color, 15);
	cout << "      Password: ";
	SetConsoleTextAttribute(color, 14);
	cin >> Spass;

	ifstream input("stdntDb.txt");
	while (input >> Su >> Sp) {
		if (Su == Suser && Sp == Spass) {
			i = 1;
			system("cls");
		}

	}
	input.close();
	if (i == 1) {
		SetConsoleTextAttribute(color, 2);
		cout << "LOGIN SUCCESSSFUL. \n\n";
		SetConsoleTextAttribute(color, 14);
		cout << "Hello, iTam ";
		SetConsoleTextAttribute(color, 15);
		cout << Suser;
		SetConsoleTextAttribute(color, 14);
		cout << "! \nWelcome to FITCIS. ";
		cin.get();
		cin.get();
		system("cls");
		Sfit(Suser);
	}

	else {
		SetConsoleTextAttribute(color, 12);
		cout << "\nLOGIN FAILED. Please try again. \n ";
		system("pause");
		system("cls");
		main();



	}



}

void Sreg() {
	system("cls");

	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 600;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//attrib for color changing
	SetConsoleTextAttribute(color, 2);
	cout << "-------------------------------------------------------------\n";
	cout << "--------- WELCOME TO FITCIS REGISTER PAGE : STUDENT ---------\n";
	cout << "-------------------------------------------------------------\n";
	cout << endl;
	string Sregu, Sregp, Su, Spw;
	SetConsoleTextAttribute(color, 15);
	cout << "---------------\n";


	SetConsoleTextAttribute(color, 15);
	cout << "      Enter your Student Number: ";
	SetConsoleTextAttribute(color, 14);
	cin >> Sregu;

	SetConsoleTextAttribute(color, 15);
	cout << "      Enter your Password: ";
	SetConsoleTextAttribute(color, 14);
	cin >> Sregp;


	ofstream studReg("stdntDb.txt", ios::app);
	studReg << Sregu << ' ' << Sregp << endl;
	system("cls");
	SetConsoleTextAttribute(color, 2);
	cout << "REGISTRATION SUCESSFUL.\n";
	main();





}


void Sfpass() {
	system("cls");

	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 600;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//attrib for color changing
	SetConsoleTextAttribute(color, 2);
	cout << "------------------------------------------------------------\n";
	cout << "--------- WELCOME TO FITCIS ACCOUNT PAGE : STUDENT ---------\n";
	cout << "------------------------------------------------------------\n";
	cout << endl;

	int SfpassC;

	SetConsoleTextAttribute(color, 14);
	cout << "[1] SEARCH Student Number \n";
	cout << "[2] SEARCH Password \n";
	cout << "[3] BACK \n\n";
	cout << "[0] EXIT \n\n";

	SetConsoleTextAttribute(color, 15);
	cout << "Please enter your choice: ";
	SetConsoleTextAttribute(color, 14);
	cin >> SfpassC;
	switch (SfpassC) {

	case 1:
	{
		system("cls");
		int i = 0;
		string searchSuser, sSu, sSpw;
		SetConsoleTextAttribute(color, 15);
		cout << "Enter your Student Number: ";
		SetConsoleTextAttribute(color, 14);
		cin >> searchSuser;

		ifstream srchStud("stdntDb.txt");
		while (srchStud >> sSu >> sSpw) {
			if (sSu == searchSuser) {
				i = 1;
			}
		}
		srchStud.close();
		if (i == 1) {
			SetConsoleTextAttribute(color, 2);
			cout << "---------------\n";
			cout << "ACCOUNT FOUND.\n";
			SetConsoleTextAttribute(color, 15);
			cout << "Your Password: ";
			SetConsoleTextAttribute(color, 14);
			cout << sSpw;
			cin.get();
			cin.get();
			system("cls");
			main();

		}

		else {
			SetConsoleTextAttribute(color, 12);
			cout << "---------------\n";
			cout << "ACCOUNT NOT FOUND.\n";
			SetConsoleTextAttribute(color, 14);
			cout << "Please contact your School Administrator for further details.";
			cin.get();
			cin.get();
			system("cls");
			main();


		}
		break;
	}

	case 2:
	{
		system("cls");
		int i = 0;
		string searchPuser, sPu, sSpass;
		SetConsoleTextAttribute(color, 15);
		cout << "Enter your Password: ";
		SetConsoleTextAttribute(color, 14);
		cin >> searchPuser;

		ifstream srchSpw("stdntDb.txt");
		while (srchSpw >> sPu >> sSpass) {
			if (sSpass == searchPuser) {
				i = 1;
			}
		}
		srchSpw.close();
		if (i == 1) {
			SetConsoleTextAttribute(color, 2);
			cout << "---------------\n";
			cout << "ACCOUNT PASSWORD FOUND.\n";
			SetConsoleTextAttribute(color, 15);
			cout << "Your Student Number: ";
			SetConsoleTextAttribute(color, 14);
			cout << sPu;
			cin.get();
			cin.get();
			system("cls");
			main();

		}

		else {
			SetConsoleTextAttribute(color, 12);
			cout << "---------------\n";
			cout << "ACCOUNT NOT FOUND.\n";
			SetConsoleTextAttribute(color, 14);
			cout << "Please contact your School Administrator for further details.";
			cin.get();
			cin.get();
			system("cls");
			main();


		}
		break;
	}

	case 3:
	{
		system("cls");
		main();
		break;

	}

	case 4:
	{
		SetConsoleTextAttribute(color, 2);
		cout << "---------- \n";
		SetConsoleTextAttribute(color, 11);
		cout << "Thank you for visiting FITCIS, Please come again. \n";
		system("pause");
		cin.clear();
		break;

	}


	default:

		SetConsoleTextAttribute(color, 12);
		cout << "---------- \n";
		cout << "Invalid Input, Please try again. \n";
		system("pause");
		cout << endl;
		Sfpass();



	}


}






void admin() {
	system("cls");
	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 600;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//attrib for color changing
	SetConsoleTextAttribute(color, 2);
	cout << "--------------------------------------------------------\n";
	cout << "--------- WELCOME TO FITCIS LOGIN PAGE : ADMIN ---------\n";
	cout << "--------------------------------------------------------\n";
	cout << endl;

	int Achoice;

	SetConsoleTextAttribute(color, 14);
	cout << "[1] LOGIN \n";
	cout << "[2] REGISTER \n";
	cout << "[3] SEARCH ACCOUNT \n";
	cout << "[4] BACK \n\n";
	cout << "[0] EXIT \n\n";

	SetConsoleTextAttribute(color, 15);
	cout << "Please enter your choice: ";
	SetConsoleTextAttribute(color, 14);
	cin >> Achoice;
	cout << endl;

	switch (Achoice) {
	case 1:
		Alogin();
		break;

	case 2:
		Areg();
		break;


	case 3:
		Afpass();
		break;


	case 4:
		system("cls");
		main();
		break;

	case 5:
		SetConsoleTextAttribute(color, 2);
		cout << "---------- \n";
		SetConsoleTextAttribute(color, 11);
		cout << "Thank you for visiting FITCIS. Please come again. \n";
		system("pause");
		cin.clear();
		break;

	default:
		SetConsoleTextAttribute(color, 12);
		cout << "---------- \n";
		cout << "Invalid input. Please try again. \n";
		system("pause");
		admin();
	}
}




void Alogin() {
	system("cls");

	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 600;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//attrib for color changing
	SetConsoleTextAttribute(color, 2);
	cout << "--------------------------------------------------------\n";
	cout << "--------- WELCOME TO FITCIS LOGIN PAGE : ADMIN ---------\n";
	cout << "--------------------------------------------------------\n";
	cout << endl;

	int i = 0;
	string Auser, Apass, Au, Ap;
	SetConsoleTextAttribute(color, 15);



	SetConsoleTextAttribute(color, 15);
	cout << "      Admin Number: ";
	SetConsoleTextAttribute(color, 14);
	cin >> Auser;

	SetConsoleTextAttribute(color, 15);
	cout << "      Password: ";
	SetConsoleTextAttribute(color, 14);
	cin >> Apass;

	ifstream input("admnDb.txt");
	while (input >> Au >> Ap) {
		if (Au == Auser && Ap == Apass) {
			i = 1;
			system("cls");
		}

	}
	input.close();
	if (i == 1) {
		SetConsoleTextAttribute(color, 2);
		cout << "LOGIN SUCCESSSFUL. \n\n";
		SetConsoleTextAttribute(color, 14);
		cout << "Hello, iTam Admin ";
		SetConsoleTextAttribute(color, 15);
		cout << Auser;
		SetConsoleTextAttribute(color, 14);
		cout << "! \nWelcome to FITCIS. ";

		cin.get();
		cin.get();
		system("cls");
		Afit(Auser);
	}

	else {
		SetConsoleTextAttribute(color, 12);
		cout << "\nLOGIN FAILED. Please try again. \n ";
		system("pause");
		system("cls");
		main();



	}


}

void Areg() {
	system("cls");

	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 600;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//attrib for color changing
	SetConsoleTextAttribute(color, 2);
	cout << "-----------------------------------------------------------\n";
	cout << "--------- WELCOME TO FITCIS REGISTER PAGE : ADMIN ---------\n";
	cout << "-----------------------------------------------------------\n";
	cout << endl;
	string Aregu, Aregp, Au, Apw;
	SetConsoleTextAttribute(color, 15);



	SetConsoleTextAttribute(color, 15);
	cout << "      Enter your Admin Number: ";
	SetConsoleTextAttribute(color, 14);
	cin >> Aregu;

	SetConsoleTextAttribute(color, 15);
	cout << "      Enter your Password: ";
	SetConsoleTextAttribute(color, 14);
	cin >> Aregp;


	ofstream studReg("admnDb.txt", ios::app);
	studReg << Aregu << ' ' << Aregp << endl;
	system("cls");
	SetConsoleTextAttribute(color, 2);
	cout << "REGISTRATION SUCESSFUL.\n";
	main();

}


void Afpass() {
	system("cls");

	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 600;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//attrib for color changing
	SetConsoleTextAttribute(color, 2);
	cout << "------------------------------------------------------------\n";
	cout << "--------- WELCOME TO FITCIS ACCOUNT PAGE : STUDENT ---------\n";
	cout << "------------------------------------------------------------\n";
	cout << endl;

	int AfpassC;

	SetConsoleTextAttribute(color, 14);
	cout << "[1] SEARCH Admin Number \n";
	cout << "[2] SEARCH Password \n";
	cout << "[3] BACK \n\n";
	cout << "[0] EXIT \n\n";

	SetConsoleTextAttribute(color, 15);
	cout << "Please enter your choice: ";
	SetConsoleTextAttribute(color, 14);
	cin >> AfpassC;
	switch (AfpassC) {

	case 1:
	{
		system("cls");
		int i = 0;
		string searchAuser, aSu, aSpw;
		SetConsoleTextAttribute(color, 15);
		cout << "Enter your Admin Number: ";
		SetConsoleTextAttribute(color, 14);
		cin >> searchAuser;

		ifstream srchStud("stdntDb.txt");
		while (srchStud >> aSu >> aSpw) {
			if (aSu == searchAuser) {
				i = 1;
			}
		}
		srchStud.close();
		if (i == 1) {
			SetConsoleTextAttribute(color, 2);
			cout << "---------------\n";
			cout << "ACCOUNT FOUND.\n";
			SetConsoleTextAttribute(color, 15);
			cout << "Your Password: ";
			SetConsoleTextAttribute(color, 14);
			cout << aSpw;
			cin.get();
			cin.get();
			system("cls");
			main();

		}

		else {
			SetConsoleTextAttribute(color, 12);
			cout << "---------------\n";
			cout << "ACCOUNT NOT FOUND.\n";
			SetConsoleTextAttribute(color, 14);
			cout << "Please contact your System Developer for further details.";
			cin.get();
			cin.get();
			system("cls");
			main();


		}
		break;
	}

	case 2:
	{
		system("cls");
		int i = 0;
		string searchaPuser, aPu, aSpass;
		SetConsoleTextAttribute(color, 15);
		cout << "Enter your Password: ";
		SetConsoleTextAttribute(color, 14);
		cin >> searchaPuser;

		ifstream srchSpw("admnDb.txt");
		while (srchSpw >> aPu >> aSpass) {
			if (aSpass == searchaPuser) {
				i = 1;
			}
		}
		srchSpw.close();
		if (i == 1) {
			SetConsoleTextAttribute(color, 2);
			cout << "---------------\n";
			cout << "ACCOUNT PASSWORD FOUND.\n";
			SetConsoleTextAttribute(color, 15);
			cout << "Your Admin Number: ";
			SetConsoleTextAttribute(color, 14);
			cout << aPu;
			cin.get();
			cin.get();
			system("cls");
			main();

		}

		else {
			SetConsoleTextAttribute(color, 12);
			cout << "---------------\n";
			cout << "ACCOUNT NOT FOUND.\n";
			SetConsoleTextAttribute(color, 14);
			cout << "Please contact your System Developer for further details.";
			cin.get();
			cin.get();
			system("cls");
			main();


		}
		break;
	}

	case 3:
	{
		system("cls");
		main();
		break;

	}

	case 0:
	{
		SetConsoleTextAttribute(color, 2);
		cout << "---------- \n";
		SetConsoleTextAttribute(color, 11);
		cout << "Thank you for visiting FITCIS, Please come again. \n";
		system("pause");
		cin.clear();
		break;

	}


	default:

		SetConsoleTextAttribute(color, 12);
		cout << "---------- \n";
		cout << "Invalid Input, Please try again. \n";
		system("pause");
		cout << endl;
		Afpass();



	}



}
// Main System for Student

void Sfit(string Suser) {
	system("cls");
	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 600;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//attrib for color changing
	SetConsoleTextAttribute(color, 2);
	cout << "----------------------------------------------------------\n";
	cout << "--------- WELCOME TO FITCIS : USER ";
	SetConsoleTextAttribute(color, 15);
	cout << Suser;
	SetConsoleTextAttribute(color, 2);
	cout << " ------------- \n";
	cout << "----------------------------------------------------------\n";
	cout << endl;

	int Sfchoice;

	SetConsoleTextAttribute(color, 14);
	cout << "[1] FIT About \n";
	cout << "[2] FIT Floor Map \n";
	cout << "[3] FIT Code of Conduct \n";
	cout << "[4] FIT Offices \n";
	cout << "[5] FIT Academics \n";
	cout << "[6] FIT Game \n";
	cout << "[7] FIT Links \n";
	cout << "[8] FIT Contacts \n";
	cout << "[9] BACK \n\n";

	cout << "[0] EXIT \n\n";

	SetConsoleTextAttribute(color, 15);
	cout << "Please enter your choice: ";
	SetConsoleTextAttribute(color, 14);
	cin >> Sfchoice;
	cout << endl;

	switch (Sfchoice) {
	case 1:
		about(Suser);
		break;

	case 2:
		fitfloor(Suser);
		break;


	case 3:
		conduct(Suser);
		break;

	case 4:
		off(Suser);
		break;

	case 5:
		acad(Suser);
		break;

	case 6:
		game(Suser);
		break;


	case 7:
		link(Suser);
		break;

	case 8:
		con(Suser);
		break;


	case 9:
		system("cls");
		main();
		break;

	case 0:
		SetConsoleTextAttribute(color, 2);
		cout << "---------- \n";
		SetConsoleTextAttribute(color, 11);
		cout << "Thank you for visiting FITCIS. Please come again. \n";
		system("pause");
		cin.clear();
		break;

	default:
		SetConsoleTextAttribute(color, 12);
		cout << "---------- \n";
		cout << "Invalid input. Please try again. \n";
		system("pause");
		Sfit(Suser);
	}

}




void about(string Suser) {
	system("cls");

	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 600;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//attrib for color changing
	SetConsoleTextAttribute(color, 2);
	cout << "---------------------------------------------------------\n";
	cout << "--------- FIT CAMPUS INFORMATION SYSTEM : ABOUT ---------\n";
	cout << "---------------------------------------------------------\n";
	cout << endl;

	int abtchoice;

	SetConsoleTextAttribute(color, 14);
	cout << "[1] FIT Vision, Mission & Core Values \n";
	cout << "[2] FEU History \n";
	cout << "[3] FIT Icon \n";
	cout << "[4] FIT Hymn \n";
	cout << "[5] BACK \n\n";

	cout << "[0] EXIT \n\n";

	SetConsoleTextAttribute(color, 15);
	cout << "Please enter your choice: ";
	SetConsoleTextAttribute(color, 14);
	cin >> abtchoice;
	cout << endl;

	switch (abtchoice) {
	case 1:
		vmc(Suser);
		break;

	case 2:
		his(Suser);
		break;


	case 3:
		icon(Suser);
		break;

	case 4:
		hymn(Suser);
		break;



	case 5:
		system("cls");
		Sfit(Suser);
		break;

	case 0:
		SetConsoleTextAttribute(color, 2);
		cout << "---------- \n";
		SetConsoleTextAttribute(color, 11);
		cout << "Thank you for visiting FITCIS. Please come again. \n";
		system("pause");
		cin.clear();
		break;

	default:
		SetConsoleTextAttribute(color, 12);
		cout << "---------- \n";
		cout << "Invalid input. Please try again. \n";
		system("pause");
		about(Suser);
	}


}


void vmc(string Suser) {
	system("cls");

	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 600;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//attrib for color changing
	SetConsoleTextAttribute(color, 14);
	cout << "-------------------------------------------------------------------------------\n";
	cout << "--------- FEU INSTITUTE OF TECHNOLOGY : VISION, MISSION & CORE VALUES ---------\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << endl;


	SetConsoleTextAttribute(color, 15);

	// retrieve information in the database
	fstream aboutt;

	aboutt.open("about.txt", ios::in);
	if (aboutt.is_open()) {
		string abt;
		while (getline(aboutt, abt)) {

			cout << abt << endl;
		}

		aboutt.close();
	}
	cout << endl;
	SetConsoleTextAttribute(color, 2);
	system("pause");
	about(Suser);

}





void his(string Suser) {
	system("cls");

	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 600;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//attrib for color changing
	SetConsoleTextAttribute(color, 14);
	cout << "----------------------------------------------------------\n";
	cout << "--------- FEU INSTITUTE OF TECHNOLOGY : HISTORY  ---------\n";
	cout << "----------------------------------------------------------\n";
	cout << endl;


	SetConsoleTextAttribute(color, 15);

	// retrieve information in the database
	fstream aboutt;

	aboutt.open("history.txt", ios::in);
	if (aboutt.is_open()) {
		string abt;
		while (getline(aboutt, abt)) {

			cout << abt << endl;
		}

		aboutt.close();
	}
	cout << endl;
	SetConsoleTextAttribute(color, 2);
	system("pause");
	about(Suser);
}



void icon(string Suser) {
	system("cls");

	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 600;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//attrib for color changing
	SetConsoleTextAttribute(color, 14);
	cout << "--------------------------------------------------------------\n";
	cout << "--------- FEU INSTITUTE OF TECHNOLOGY : ICON & SEAL  ---------\n";
	cout << "--------------------------------------------------------------\n";
	cout << endl;


	SetConsoleTextAttribute(color, 15);

	// retrieve information in the database
	fstream aboutt;
	fstream aboutt1;

	aboutt.open("icon.txt", ios::in);
	if (aboutt.is_open()) {
		string abt;
		while (getline(aboutt, abt)) {

			cout << abt << endl;
		}

		aboutt.close();
		//accessing images
		system("icon.jpg");
	}
	aboutt1.open("icon.txt", ios::in);
	if (aboutt1.is_open()) {
		string abt1;
		while (getline(aboutt1, abt1)) {

			cout << abt1 << endl;
		}

		aboutt1.close();
		//accessing images
		system("seal.png");
	}


	cout << endl;
	SetConsoleTextAttribute(color, 2);
	system("pause");
	about(Suser);


}



void hymn(string Suser) {
	system("cls");

	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 600;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//attrib for color changing
	SetConsoleTextAttribute(color, 14);
	cout << "--------------------------------------------------\n";
	cout << "--------- FAR EASTERN UNIVERSITY : HYMN  ---------\n";
	cout << "--------------------------------------------------\n";
	cout << endl;


	int hymnchoice;

	SetConsoleTextAttribute(color, 15);

	// retrieve information in the database
	fstream aboutt;

	aboutt.open("hymn.txt", ios::in);
	if (aboutt.is_open()) {
		string abt;
		while (getline(aboutt, abt)) {

			cout << abt << endl;
		}

		aboutt.close();
	}

	SetConsoleTextAttribute(color, 14);
	cout << "[1] LISTEN \n";

	cout << "[0] BACK \n\n";

	SetConsoleTextAttribute(color, 15);
	cout << "Please enter your choice: ";
	SetConsoleTextAttribute(color, 14);
	cin >> hymnchoice;
	cout << endl;

	switch (hymnchoice) {
	case 1:
		// accessing link
		ShellExecute(0, 0, L"https://www.youtube.com/watch?v=-JZs1ef8I8s", 0, 0, SW_SHOW);
		hymn(Suser);
		break;


	case 0:
		system("cls");
		about(Suser);
		break;


	default:
		SetConsoleTextAttribute(color, 12);
		cout << "---------- \n";
		cout << "Invalid input. Please try again. \n";
		system("pause");
		hymn(Suser);

	}
}




	void fitfloor(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "--------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : FLOORS ---------\n";
		cout << "--------------------------------------------------------\n";
		cout << endl;

		int abtchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1]  FIT GROUND FLOOR \n";
		cout << "[2]  FIT 2ND  FLOOR \n";
		cout << "[3]  FIT 3RD  FLOOR \n";
		cout << "[4]  FIT 4TH  FLOOR \n";
		cout << "[5]  FIT 5TH  FLOOR \n";
		cout << "[6]  FIT 6TH  FLOOR \n";
		cout << "[7]  FIT 7TH  FLOOR \n";
		cout << "[8]  FIT 8TH  FLOOR \n";
		cout << "[9]  FIT 9TH  FLOOR \n";
		cout << "[10] FIT 10TH FLOOR \n";
		cout << "[11] FIT 11TH FLOOR \n";
		cout << "[12] FIT 12TH FLOOR \n";
		cout << "[14] FIT 14TH FLOOR \n";
		cout << "[15] FIT 15TH FLOOR \n";
		cout << "[16] FIT 16TH FLOOR \n";
		cout << "[17] FIT 17TH FLOOR \n";
		cout << "[18] FIT 18TH FLOOR \n";



		cout << "[19] BACK \n\n";

		cout << "[0] EXIT \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> abtchoice;
		cout << endl;

		switch (abtchoice) {
		case 1:
			floor1(Suser);
			break;

		case 2:
			floor2(Suser);
			break;

		case 3:
			floor3(Suser);
			break;

		case 4:
			floor4(Suser);
			break;

		case 5:
			floor5(Suser);
			break;

		case 6:
			floor6(Suser);
			break;

		case 7:
			floor7(Suser);
			break;

		case 8:
			floor8(Suser);
			break;

		case 9:
			floor9(Suser);
			break;

		case 10:
			floor10(Suser);
			break;


		case 11:
			floor11(Suser);
			break;

		case 12:
			floor12(Suser);
			break;

		case 14:
			floor14(Suser);
			break;

		case 15:
			floor15(Suser);
			break;

		case 16:
			floor16(Suser);
			break;

		case 17:
			floor17(Suser);
			break;

		case 18:
			floor8(Suser);
			break;


		case 19:
			system("cls");
			Sfit(Suser);
			break;

		case 0:
			SetConsoleTextAttribute(color, 2);
			cout << "---------- \n";
			SetConsoleTextAttribute(color, 11);
			cout << "Thank you for visiting FITCIS. Please come again. \n";
			system("pause");
			cin.clear();
			break;

		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			fitfloor(Suser);
		}

}




	void floor1(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : GROUND FLOOR  ---------\n";
		cout << "---------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);

		// retrieve information in the database
		fstream floor;

		floor.open("floor1.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		fitfloor(Suser);
		

	}

	void floor2(string Suser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 2ND FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);

		// retrieve information in the database
		fstream floor;

		floor.open("floor2.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("2ndfloor.jpg");
			floor2(Suser);
			break;


		case 0:
			system("cls");
			fitfloor(Suser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			floor2(Suser);

		}

	}
	void floor3(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 3RD FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);

		// retrieve information in the database
		fstream floor;

		floor.open("floor3.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		fitfloor(Suser);



		}
	void floor4(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 4TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);

		// retrieve information in the database
		fstream floor;

		floor.open("floor4.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("4thfloor.png");
			floor4(Suser);
			break;


		case 0:
			system("cls");
			fitfloor(Suser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			floor4(Suser);

		}

		}

	void floor5(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 5TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);

		// retrieve information in the database
		fstream floor;

		floor.open("floor5.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("5thfloor.jpg");
			floor5(Suser);
			break;


		case 0:
			system("cls");
			fitfloor(Suser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			floor5(Suser);

		}

		}
	void floor6(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 6TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);

		// retrieve information in the database
		fstream floor;

		floor.open("floor6.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("6thfloor.jpg");
			floor6(Suser);
			break;


		case 0:
			system("cls");
			fitfloor(Suser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			floor6(Suser);

		}

		}
	void floor7(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 7TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);

		// retrieve information in the database
		fstream floor;

		floor.open("floor7.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("7thfloor.jpg");
			floor7(Suser);
			break;


		case 0:
			system("cls");
			fitfloor(Suser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			floor7(Suser);

		}

		}
	void floor8(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 8TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor8.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("8thfloor.jpg");
			floor8(Suser);
			break;


		case 0:
			system("cls");
			fitfloor(Suser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			floor8(Suser);

		}

	}


	void floor9(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 9TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);

		// retrieve information in the database
		fstream floor;

		floor.open("floor9.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("9thfloor.jpg");
			floor9(Suser);
			break;


		case 0:
			system("cls");
			fitfloor(Suser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			floor9(Suser);

		}

		}


	void floor10(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 10TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor10.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("10thfloor.jpg");
			floor10(Suser);
			break;


		case 0:
			system("cls");
			fitfloor(Suser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			floor10(Suser);

		}

		}

	void floor11(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 11TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor11.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("11thfloor.jpg");
			floor11(Suser);
			break;


		case 0:
			system("cls");
			fitfloor(Suser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			floor11(Suser);

		}

		}
	void floor12(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 12TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor12.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("12thfloor.jpg");
			floor12(Suser);
			break;


		case 0:
			system("cls");
			fitfloor(Suser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			floor12(Suser);

		}

		}
	void floor14(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 14TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor14.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("14thfloor.jpg");
			floor14(Suser);
			break;


		case 0:
			system("cls");
			fitfloor(Suser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			floor14(Suser);

		}

		}
	void floor15(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 15TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor15.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("15thfloor.png");
			floor15(Suser);
			break;


		case 0:
			system("cls");
			fitfloor(Suser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			floor15(Suser);

		}

		}
	void floor16(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 16TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor16.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("16thfloor.png");
			floor16(Suser);
			break;


		case 0:
			system("cls");
			fitfloor(Suser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			floor16(Suser);

		}

		}
	void floor17(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 17TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor17.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		fitfloor(Suser);

		}


	void floor18(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 18TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor18.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		fitfloor(Suser);

	}


	void conduct(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-----------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : CODE OF CONDUCT ---------\n";
		cout << "-----------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream conduct;

		conduct.open("conduct.txt", ios::in);
		if (conduct.is_open()) {
			string cdt;
			while (getline(conduct, cdt)) {

				cout << cdt << endl;
			}

			conduct.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Sfit(Suser);

	}


	void off(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : OFFICES ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;

		int offchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1]  FIT AERO \n";
		cout << "[2]  FIT ACCOUNTING OFFICE \n";
		cout << "[3]  FIT CASHIER's OFFICE \n";
		cout << "[4]  FIT REGISTRAR OFFICE\n";
		cout << "[5]  FIT CESU \n";
		cout << "[6]  FIT CSO & MIS \n";
		cout << "[7]  FIT DISCIPLE UNIT \n";
		cout << "[8]  FIT GUIDANCE UNIT\n";
		cout << "[9]  FIT SADU \n";
		cout << "[10] FIT HSU \n";
		cout << "[11] FIT ICARE \n";
		cout << "[12] FIT IALAP \n";
		cout << "[13] FIT LIBRARY\n";
		cout << "[14] BACK \n\n";


		cout << "[0] EXIT \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> offchoice;
		cout << endl;

		switch (offchoice) {
		case 1:
			aero(Suser);
			break;

		case 2:
			accntng(Suser);
			break;


		case 3:
			cash(Suser);
			break;

		case 4:
			rgstr(Suser);
			break;


		case 5:
			cesu(Suser);
			break;

		case 6:
			csms(Suser);
			break;


		case 7:
			du(Suser);
			break;

		case 8:
			gu(Suser);
			break;


		case 9:
			sadu(Suser);
			break;

		case 10:
			hsu(Suser);
			break;


		case 11:
			icare(Suser);
			break;

		case 12:
			ialap(Suser);
			break;

		case 13:
			lbry(Suser);
			break;


		case 14:
			system("cls");
			Sfit(Suser);
			break;

		case 0:
			SetConsoleTextAttribute(color, 2);
			cout << "---------- \n";
			SetConsoleTextAttribute(color, 11);
			cout << "Thank you for visiting FITCIS. Please come again. \n";
			system("pause");
			cin.clear();
			break;

		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			off(Suser);
		}

	}


	void aero(string Suser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : AERO ---------\n";
		cout << "------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("aero.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		off(Suser);



	}
	void accntng(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : ACCOUNTING OFFICE ---------\n";
		cout << "-------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("accntng.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		off(Suser);


		}
	void cash(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : CASHIER'S OFFICE ---------\n";
		cout << "------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("cash.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		off(Suser);



		}

	void rgstr(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : REGISTRAR OFFICE ---------\n";
		cout << "------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("rgstr.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		off(Suser);



		}
	void cesu(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : CESU ---------\n";
		cout << "------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("cesu.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		off(Suser);


		}


	void csms(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : CSMS ---------\n";
		cout << "------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("csms.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		off(Suser);

		}


	void du(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-----------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : DISCIPLINE UNIT ---------\n";
		cout << "-----------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("csms.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		off(Suser);



		}
	void gu(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : GUIDANCE UNIT ---------\n";
		cout << "---------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("gu.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		off(Suser);

		}


	void sadu(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : HEALTH SERVICE UNIT ---------\n";
		cout << "---------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("hsu.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		off(Suser);



		}


	void hsu(string Suser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : SADU ---------\n";
		cout << "------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("sadu.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		off(Suser);




	}

	void icare(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : ICARE ---------\n";
		cout << "-------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("icare.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		off(Suser);



		}
	void ialap(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : IALAP ---------\n";
		cout << "-------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("ialap.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		off(Suser);
		}

	void lbry(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : LIBRARY ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("lbry.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		off(Suser);

		}


	void acad(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "-------------------------------------------------------------\n";
		cout << "--------- FIT CAMPUS INFORMATION SYSTEM : ACADEMICS ---------\n";
		cout << "-------------------------------------------------------------\n";
		cout << endl;

		int acadchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FIT SCHOOL CALENDAR \n";
		cout << "[2] FEU GRADING SYSTEM \n";
		cout << "[3] FIT DRESS CODE \n";
		cout << "[4] FIT TUITION \n";
		cout << "[5] FIT COLLEGE OF CCSMA \n";
		cout << "[6] FEU COLLEGE OF ENGINEERING \n";
	
		cout << "[7] BACK \n\n";

		cout << "[0] EXIT \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> acadchoice;
		cout << endl;

		switch (acadchoice) {
		case 1:
			system("calendar.png");
			acad(Suser);
			break;

		case 2:
			system("gradesys.jpg");
			acad(Suser);
			break;


		case 3:
			dcode(Suser);
			break;



		case 4:
			tuit(Suser);
			break;


		case 5:
			ccsma(Suser);
			break;


		case 6:
			eng(Suser);
			break;



		case 7:
			system("cls");
			Sfit(Suser);
			break;

		case 0:
			SetConsoleTextAttribute(color, 2);
			cout << "---------- \n";
			SetConsoleTextAttribute(color, 11);
			cout << "Thank you for visiting FITCIS. Please come again. \n";
			system("pause");
			cin.clear();
			break;

		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			acad(Suser);
		}

	}




	void dcode(string Suser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "-------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : DRESS CODE ---------\n";
		cout << "-------------------------------------------------------------\n";
		cout << endl;

		int dresschoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FIT OFFICIAL UNIFORM \n";
		cout << "[2] FIT P.E. UNIFORM \n";
		cout << "[3] FIT ALTERNATE UNIFORM \n";
		cout << "[4] FIT NSTP UNIFORM \n";
	

		cout << "[5] BACK \n\n";

		cout << "[0] EXIT \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> dresschoice;
		cout << endl;

		switch (dresschoice) {
		case 1:
			system("unif.png");
			dcode(Suser);
			break;

		case 2:
			system("pe.png");
			dcode(Suser);
			break;


		case 3:
			system("polo.png");
			dcode(Suser);
			break;



		case 4:
			system("alt.png");
			dcode(Suser);
			break;



		case 5:
			system("cls");
			acad(Suser);
			break;

		case 0:
			SetConsoleTextAttribute(color, 2);
			cout << "---------- \n";
			SetConsoleTextAttribute(color, 11);
			cout << "Thank you for visiting FITCIS. Please come again. \n";
			system("pause");
			cin.clear();
			break;

		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			dcode(Suser);
		}


	}


	void ccsma(string Suser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "-----------------------------------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : COLLEGE OF COMPUTER STUDIES & MULTIMEDIA ARTS ---------\n";
		cout << "-----------------------------------------------------------------------------------------------\n";
		cout << endl;

		int colchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FIT BSCS-SE \n";
		cout << "[2] FIT BSCS-DS \n";
		cout << "[3] FIT BSIT-BA \n";
		cout << "[4] FIT BSIT-IB \n";
		cout << "[5] FIT BSIT-AGD \n";
		cout << "[6] FIT BSIT-WMA \n";
		cout << "[7] FIT BMA \n";


		cout << "[8] BACK \n\n";

		cout << "[0] EXIT \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> colchoice;
		cout << endl;

		switch (colchoice) {
		case 1:
			se(Suser);
			break;

		case 2:
			ds(Suser);
			break;


		case 3:
			ba(Suser);
			break;


		case 4:
			ib(Suser);
			break;


		case 5:
			agd(Suser);
			break;

		case 6:
			wma(Suser);
			break;

		case 7:
			bma(Suser);
			break;


		case 8:
			system("cls");
			acad(Suser);
			break;

		case 0:
			SetConsoleTextAttribute(color, 2);
			cout << "---------- \n";
			SetConsoleTextAttribute(color, 11);
			cout << "Thank you for visiting FITCIS. Please come again. \n";
			system("pause");
			cin.clear();
			break;

		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			ccsma(Suser);
		}


	}



	void eng(string Suser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "------------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : COLLEGE OF ENGINEERING ---------\n";
		cout << "------------------------------------------------------------------------\n";
		cout << endl;

		int colchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FIT CIVIL ENGINEERING \n";
		cout << "[2] FIT COMPUTER ENGINEERING \n";
		cout << "[3] FIT ELECTRICAL ENGINEERING \n";
		cout << "[4] FIT ELECTRONICS ENGINEERING \n";
		cout << "[5] FIT MECHANICAL ENGINEERING \n";

		cout << "[6] BACK \n\n";

		cout << "[0] EXIT \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> colchoice;
		cout << endl;

		switch (colchoice) {
		case 1:
			ce(Suser);
			break;

		case 2:
			cpe(Suser);
			break;


		case 3:
			ee(Suser);
			break;


		case 4:
			elc(Suser);
			break;


		case 5:
			me(Suser);
			break;


		case 6:
			system("cls");
			acad(Suser);
			break;

		case 0:
			SetConsoleTextAttribute(color, 2);
			cout << "---------- \n";
			SetConsoleTextAttribute(color, 11);
			cout << "Thank you for visiting FITCIS. Please come again. \n";
			system("pause");
			cin.clear();
			break;

		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			eng(Suser);
		}


	}


	void se(string Suser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : BSCS-SE ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("se.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		ccsma(Suser);

	}
	void ds(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : BSCS-DS ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("ds.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		ccsma(Suser);

		}
	void ba(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : BSIT-BA ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("ba.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		ccsma(Suser);

		}
	void ib(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : BSIT-IB ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("ib.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		ccsma(Suser);


		}

	void agd(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : BSIT-AGD ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("ib.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		ccsma(Suser);


		}
	void wma(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : BSIT-WMA ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("ib.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		ccsma(Suser);

		}

	void bma(string Suser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-----------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : BMA ---------\n";
		cout << "-----------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("bma.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		ccsma(Suser);


	}


	void ce(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : CIVIL ENGINEERING ---------\n";
		cout << "-------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("ce.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		eng(Suser);

		}
	void cpe(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "----------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : COMPUTER ENGINEERING ---------\n";
		cout << "----------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("cpe.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		eng(Suser);

		}
	void ee(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : ELECTRICAL ENGINEERING ---------\n";
		cout << "------------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("ee.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		eng(Suser);

		}
	void elc(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-------------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : ELECTRONICS ENGINEERING ---------\n";
		cout << "-------------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("ee.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		eng(Suser);

		}
	void me(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : MECHANICAL ENGINEERING ---------\n";
		cout << "------------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("me.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		eng(Suser);

		}



	
	void tuit(string Suser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : TUITION ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream tuition;

		tuition.open("tuition.txt", ios::in);
		if (tuition.is_open()) {
			string tui;
			while (getline(tuition, tui)) {

				cout << tui << endl;
			}

			tuition.close();
		}


		int tuichoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] TUITION SAMPLE \n";
		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> tuichoice;
		cout << endl;

		switch (tuichoice) {
		case 1:
			system("tui.jpg");
			tuit(Suser);
			break;


		case 0:
			system("cls");
			acad(Suser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			tuit(Suser);

		}

	}
		




	void game(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FIT CAMPUS INFORMATION SYSTEM : GAMES ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;

		int gamechoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FITCIS QUIZ \n";
		cout << "[2] FITCIS TAMHUNT \n";
		cout << "[3] FITCIS PYRAMID ART \n";

		cout << "[4] BACK \n\n";

		cout << "[0] EXIT \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> gamechoice;
		cout << endl;

		switch (gamechoice) {
		case 1:
			quiz(Suser);
			break;

		case 2:
			thunt(Suser);
			break;

		case 3:
			luck(Suser);
			break;


		case 4:
			system("cls");
			Sfit(Suser);
			break;

		case 0:
			SetConsoleTextAttribute(color, 2);
			cout << "---------- \n";
			SetConsoleTextAttribute(color, 11);
			cout << "Thank you for visiting FITCIS. Please come again. \n";
			system("pause");
			cin.clear();
			break;

		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			game(Suser);
		}

		}


	void quiz(string Suser) {

		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "-------------------------------------------------------------\n";
		cout << "--------- FIT CAMPUS INFORMATION SYSTEM : QUIZ GAME ---------\n";
		cout << "-------------------------------------------------------------\n";
		cout << endl;

		srand((unsigned)time(0));
		int result = 1 + (rand() % 5);



		switch (result) {
		case 1:
			SetConsoleTextAttribute(color, 14);
			cout << "Who is the founder of Far Eastern University?\n";
			cout << "  [1] Nicanor Reyes\n";
			cout << "  [2] Alberto Reyes\n";
			cout << "  [3] Juan Reyes\n";
			cout << "  [4] Joshua Reyes\n\n";
			int ans;
			SetConsoleTextAttribute(color, 15);
			cout << "Your Answer: ";
			SetConsoleTextAttribute(color, 14);
			cin >> ans;
			char cont;
			if (ans != 1) {
				SetConsoleTextAttribute(color, 11);
				cout << "\n Your answer is WRONG!\n";

			rep:
				SetConsoleTextAttribute(color, 15);
				cout << "Do you want to continue?[Y/N]: ";
				SetConsoleTextAttribute(color, 14);
				cin >> cont;
				switch (cont) {

				case 'Y': case'y':
					quiz(Suser);
					break;


				case 'N': case'n':
					system("pause");
					game(Suser);
					break;


				default:
					SetConsoleTextAttribute(color, 12);
					cout << "\n\nInvalid input. Please try again. \n\n";
					system("pause");
					system("cls");
					goto rep;
				}

			}
			else {
				SetConsoleTextAttribute(color, 11);
				cout << "\nYour answer is CORRECT!\n";

			rep1:
				SetConsoleTextAttribute(color, 15);
				cout << "Do you want to continue?[Y/N]: ";
				SetConsoleTextAttribute(color, 14);
				cin >> cont;
				switch (cont) {

				case 'Y': case'y':
					quiz(Suser);
					break;


				case 'N': case'n':
					system("pause");
					game(Suser);
					break;


				default:
					SetConsoleTextAttribute(color, 12);
					cout << "\nInvalid input. Please try again. \n\n";
					system("pause");
					system("cls");
					goto rep1;
				}

			}

			break;



		case 2:
			SetConsoleTextAttribute(color, 14);
			cout << "What date when East Asia College of Information Technology was identified by CHED \nas a Center of Development for Excellence in Information Technology Education?\n";
			cout << "  [1] February 27, 2000\n";
			cout << "  [2] February 26, 2000\n";
			cout << "  [3] February 24, 2000 \n";
			cout << "  [4] February 25, 2000 \n\n";
			int ans1;
			SetConsoleTextAttribute(color, 15);
			cout << "Your Answer: ";
			SetConsoleTextAttribute(color, 14);
			cin >> ans1;
			char cont1;

			if (ans1 != 3) {
				SetConsoleTextAttribute(color, 11);
				cout << "\n Your answer is WRONG!\n";

			repp:
				SetConsoleTextAttribute(color, 15);
				cout << "Do you want to continue?[Y/N]: ";
				SetConsoleTextAttribute(color, 14);
				cin >> cont1;
				switch (cont1) {

				case 'Y': case'y':
					quiz(Suser);
					break;


				case 'N': case'n':
					system("pause");
					game(Suser);
					break;


				default:
					SetConsoleTextAttribute(color, 12);
					cout << "\n\nInvalid input. Please try again. \n\n";
					system("pause");
					system("cls");
					goto repp;
				}

			}
			else {
				SetConsoleTextAttribute(color, 11);
				cout << "\nYour answer is CORRECT!\n";

			rep2:
				SetConsoleTextAttribute(color, 15);
				cout << "Do you want to continue?[Y/N]: ";
				SetConsoleTextAttribute(color, 14);
				cin >> cont1;
				switch (cont1) {

				case 'Y': case'y':
					quiz(Suser);
					break;


				case 'N': case'n':
					system("pause");
					game(Suser);
					break;


				default:
					SetConsoleTextAttribute(color, 12);
					cout << "\nInvalid input. Please try again. \n\n";
					system("pause");
					system("cls");
					goto rep2;
				}

			}
			break;


		case 3:
			SetConsoleTextAttribute(color, 14);
			cout << "What was the first course offered at FEU Institute of Technology when it was first established?\n";
			cout << "  [1] Bachelor of Science in Computer Engineering\n";
			cout << "  [2] Bachelor of Science in Computer and Information Science\n";
			cout << "  [3] Bachelor of Science in Information Technology \n";
			cout << "  [4] Bachelor of Science in Information Management \n\n";
			int ans2;
			SetConsoleTextAttribute(color, 15);
			cout << "Your Answer: ";
			SetConsoleTextAttribute(color, 14);
			cin >> ans2;
			char cont2;

			if (ans2 != 2) {
				SetConsoleTextAttribute(color, 11);
				cout << "\n Your answer is WRONG!\n";

			rep3:
				SetConsoleTextAttribute(color, 15);
				cout << "Do you want to continue?[Y/N]: ";
				SetConsoleTextAttribute(color, 14);
				cin >> cont2;
				switch (cont2) {

				case 'Y': case'y':
					quiz(Suser);
					break;


				case 'N': case'n':
					system("pause");
					game(Suser);
					break;


				default:
					SetConsoleTextAttribute(color, 12);
					cout << "\n\nInvalid input. Please try again. \n\n";
					system("pause");
					system("cls");
					goto rep3;
				}

			}
			else {
				SetConsoleTextAttribute(color, 11);
				cout << "\nYour answer is CORRECT!\n";

			rep4:
				SetConsoleTextAttribute(color, 15);
				cout << "Do you want to continue?[Y/N]: ";
				SetConsoleTextAttribute(color, 14);
				cin >> cont2;
				switch (cont2) {

				case 'Y': case'y':
					quiz(Suser);
					break;


				case 'N': case'n':
					system("pause");
					game(Suser);
					break;


				default:
					SetConsoleTextAttribute(color, 12);
					cout << "\nInvalid input. Please try again. \n\n";
					system("pause");
					system("cls");
					goto rep4;
				}

			}
			break;
		case 4:
			SetConsoleTextAttribute(color, 14);
			cout << "What building in FEU serves as the university’s facade and main building in its original years of operations?\n";
			cout << "  [1] Accounts, Business, And Finance Building (ABB)\n";
			cout << "  [2] Nursing Building (NB)\n";
			cout << "  [3] Nicanor Reyes Hall Building (NRHB) \n";
			cout << "  [4] Architecture and Fine Arts Building (AFB)\n\n";
			int ans3;
			SetConsoleTextAttribute(color, 15);
			cout << "Your Answer: ";
			SetConsoleTextAttribute(color, 14);
			cin >> ans3;
			char cont3;

			if (ans3 != 3) {
				SetConsoleTextAttribute(color, 11);
				cout << "\n Your answer is WRONG!\n";

			rep5:
				SetConsoleTextAttribute(color, 15);
				cout << "Do you want to continue?[Y/N]: ";
				SetConsoleTextAttribute(color, 14);
				cin >> cont3;
				switch (cont3) {

				case 'Y': case'y':
					quiz(Suser);
					break;


				case 'N': case'n':
					system("pause");
					game(Suser);
					break;


				default:
					SetConsoleTextAttribute(color, 12);
					cout << "\n\nInvalid input. Please try again. \n\n";
					system("pause");
					system("cls");
					goto rep5;
				}

			}
			else {
				SetConsoleTextAttribute(color, 11);
				cout << "\nYour answer is CORRECT!\n";

			rep6:
				SetConsoleTextAttribute(color, 15);
				cout << "Do you want to continue?[Y/N]: ";
				SetConsoleTextAttribute(color, 14);
				cin >> cont3;
				switch (cont3) {

				case 'Y': case'y':
					quiz(Suser);
					break;


				case 'N': case'n':
					system("pause");
					game(Suser);
					break;


				default:
					SetConsoleTextAttribute(color, 12);
					cout << "\nInvalid input. Please try again. \n\n";
					system("pause");
					system("cls");
					goto rep6;
				}

			}
			break;
		case 5:
			SetConsoleTextAttribute(color, 14);
			cout << "The 'F' in FEU core values stands for?\n";
			cout << "  [1] Family\n";
			cout << "  [2] Fortitude\n";
			cout << "  [3] Fabulous \n";
			cout << "  [4] Friendly \n\n";
			int ans4;
			SetConsoleTextAttribute(color, 15);
			cout << "Your Answer: ";
			SetConsoleTextAttribute(color, 14);
			cin >> ans4;
			char cont4;

			if (ans4 != 2) {
				SetConsoleTextAttribute(color, 11);
				cout << "\n Your answer is WRONG!\n";

			rep7:
				SetConsoleTextAttribute(color, 15);
				cout << "Do you want to continue?[Y/N]: ";
				SetConsoleTextAttribute(color, 14);
				cin >> cont4;
				switch (cont4) {

				case 'Y': case'y':
					quiz(Suser);
					break;


				case 'N': case'n':
					system("pause");
					game(Suser);
					break;


				default:
					SetConsoleTextAttribute(color, 12);
					cout << "\n\nInvalid input. Please try again. \n\n";
					system("pause");
					system("cls");
					goto rep7;
				}

			}
			else {
				SetConsoleTextAttribute(color, 11);
				cout << "\nYour answer is CORRECT!\n";

			rep8:
				SetConsoleTextAttribute(color, 15);
				cout << "Do you want to continue?[Y/N]: ";
				SetConsoleTextAttribute(color, 14);
				cin >> cont4;
				switch (cont4) {

				case 'Y': case'y':
					quiz(Suser);
					break;


				case 'N': case'n':
					system("pause");
					game(Suser);
					break;


				default:
					SetConsoleTextAttribute(color, 12);
					cout << "\nInvalid input. Please try again. \n\n";
					system("pause");
					system("cls");
					goto rep8;
				}

			}
			break;

		default:
			cout << "ERROR!";
			break;
		}


	}


	void thunt(string Suser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "-----------------------------------------------------------\n";
		cout << "--------- FIT CAMPUS INFORMATION SYSTEM : TAMHUNT ---------\n";
		cout << "-----------------------------------------------------------\n";
		cout << endl;

		srand((unsigned)time(0));
		int result = 1 + (rand() % 4);
		SetConsoleTextAttribute(color, 14);
		cout << "Where does Tammy hiding? \n";
		cout << "  [1] Behind the tree\n";
		cout << "  [2] Inside the bush\n";
		cout << "  [3] Inside the cave\n";
		cout << "  [4] Inside of your house\n\n";
		int ans;
		SetConsoleTextAttribute(color, 15);
		cout << "Your Answer: ";
		SetConsoleTextAttribute(color, 14);
		cin >> ans;

		cout << "------------\n";


		switch (result) {
		case 1:
			SetConsoleTextAttribute(color, 11);
			cout << "\nbleep bloop. I'm at your house iTAM\n";


		rep:
			SetConsoleTextAttribute(color, 15);
			cout << "\nDo you want to continue?[Y/N]: ";
			SetConsoleTextAttribute(color, 14);
			char cont;
			cin >> cont;
			switch (cont) {

			case 'Y': case'y':
				thunt(Suser);
				break;


			case 'N': case'n':
				system("pause");
				game(Suser);
				break;


			default:
				SetConsoleTextAttribute(color, 12);
				cout << "\nInvalid input. Please try again. \n\n";
				system("pause");
				system("cls");
				goto rep;
			}

			break;



		case 2:
			SetConsoleTextAttribute(color, 11);
			cout << "\nyeehaw. I'm at the cave iTAM\n";


		rep1:
			SetConsoleTextAttribute(color, 15);
			cout << "\nDo you want to continue?[Y/N]: ";
			SetConsoleTextAttribute(color, 14);
			char cont1;
			cin >> cont1;
			switch (cont1) {

			case 'Y': case'y':
				thunt(Suser);
				break;


			case 'N': case'n':
				system("pause");
				game(Suser);
				break;


			default:
				SetConsoleTextAttribute(color, 12);
				cout << "\nInvalid input. Please try again. \n\n";
				system("pause");
				system("cls");
				goto rep1;
			}


			break;

		case 3:
			SetConsoleTextAttribute(color, 11);
			cout << "\nhee hee. I'm at the forest iTAM\n";


		rep2:
			SetConsoleTextAttribute(color, 15);
			cout << "\nDo you want to continue?[Y/N]: ";
			SetConsoleTextAttribute(color, 14);
			char cont2;
			cin >> cont2;
			switch (cont2) {

			case 'Y': case'y':
				thunt(Suser);
				break;


			case 'N': case'n':
				system("pause");
				game(Suser);
				break;


			default:
				SetConsoleTextAttribute(color, 12);
				cout << "\nInvalid input. Please try again. \n\n";
				system("pause");
				system("cls");
				goto rep2;
			}
			break;


		case 4:
			SetConsoleTextAttribute(color, 11);
			cout << "\nwoosh woosh. I'm at the bush iTAM\n";


		rep3:
			SetConsoleTextAttribute(color, 15);
			cout << "\nDo you want to continue?[Y/N]: ";
			SetConsoleTextAttribute(color, 14);
			char cont3;
			cin >> cont3;
			switch (cont3) {

			case 'Y': case'y':
				thunt(Suser);
				break;


			case 'N': case'n':
				system("pause");
				game(Suser);
				break;


			default:
				SetConsoleTextAttribute(color, 12);
				cout << "\nInvalid input. Please try again. \n\n";
				system("pause");
				system("cls");
				goto rep3;
			}
			break;



		default:
			cout << "ERROR!";
			break;
		}
	}

	void luck(string Suser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		
	
		

		int rows;
		char con;
		do {
			system("cls");
			SetConsoleTextAttribute(color, 2);
			cout << "---------------------------------------------------------------\n";
			cout << "--------- FIT CAMPUS INFORMATION SYSTEM : PYRAMID ART ---------\n";
			cout << "---------------------------------------------------------------\n";
			cout << endl;
			
			SetConsoleTextAttribute(color, 15);
			cout << "Enter number of rows: ";
			SetConsoleTextAttribute(color, 14);
			cin >> rows;

			for (int i = 1; i <= rows; ++i)
			{
				for (int j = 1; j <= i; ++j)
				{
					cout << "* ";
				}
				cout << "\n";
			}

			SetConsoleTextAttribute(color, 15);
			cout << "\nDo you want to continue?[Y/N]: ";
			SetConsoleTextAttribute(color, 14);
			cin >> con;

		} while (con != 'n' && 'N');

		game(Suser);


	}



	void link(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "--------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : LINKS  ---------\n";
		cout << "--------------------------------------------------------\n";
		cout << endl;


		int linkchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FIT STUDENT PORTAL \n";
		cout << "[2] FIT WEBSITE \n";
		cout << "[3] FIT FACEBOOK \n";
		cout << "[4] FIT CANVAS \n\n";
		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> linkchoice;
		cout << endl;

		switch (linkchoice) {
		case 1:
			ShellExecute(0, 0, L"https://students.feutech.edu.ph/", 0, 0, SW_SHOW);
			link(Suser);
			break;

		case 2:
			ShellExecute(0, 0, L"https://www.feutech.edu.ph/", 0, 0, SW_SHOW);
			link(Suser);
			break;

		case 3:
			ShellExecute(0, 0, L"https://www.facebook.com/feueac/", 0, 0, SW_SHOW);
			link(Suser);
			break;

		case 4:
			ShellExecute(0, 0, L"https://feu.instructure.com/", 0, 0, SW_SHOW);
			link(Suser);
			break;



		case 0:
			system("cls");
			Sfit(Suser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			link(Suser);

		}

		}



	void con(string Suser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "----------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : CONTACTS ---------\n";
		cout << "----------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream link;

		link.open("contact.txt", ios::in);
		if (link.is_open()) {
			string cor;
			while (getline(link, cor)) {

				cout << cor << endl;
			}

			link.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Sfit(Suser);

	}

	void Afit(string Auser){
	system("cls");
	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 600;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	//attrib for color changing
	SetConsoleTextAttribute(color, 2);
	cout << "----------------------------------------------------------\n";
	cout << "--------- WELCOME TO FITCIS : USER ";
	SetConsoleTextAttribute(color, 15);
	cout << Auser;
	SetConsoleTextAttribute(color, 2);
	cout << " ------------- \n";
	cout << "----------------------------------------------------------\n";
	cout << endl;

	int Afchoice;

	SetConsoleTextAttribute(color, 14);
	cout << "[1] FIT About \n";
	cout << "[2] FIT Floor Map \n";
	cout << "[3] FIT Code of Conduct \n";
	cout << "[4] FIT Offices \n";
	cout << "[5] FIT Academics \n";
	cout << "[6] FIT Game \n";
	cout << "[7] FIT Links \n";
	cout << "[8] FIT Contacts \n";
	cout << "[9] BACK \n\n";

	cout << "[0] EXIT \n\n";

	SetConsoleTextAttribute(color, 15);
	cout << "Please enter your choice: ";
	SetConsoleTextAttribute(color, 14);
	cin >> Afchoice;
	cout << endl;

	switch (Afchoice) {
	case 1:
		Aabout(Auser);
		break;

	case 2:
		Afitfloor(Auser);
		break;


	case 3:
		Aconduct(Auser);
		break;

	case 4:
		Aoff(Auser);
		break;

	case 5:
		Aacad(Auser);
		break;

	case 6:
		game(Auser);
		break;


	case 7:
		link(Auser);
		break;

	case 8:
		Acon(Auser);
		break;


	case 9:
		system("cls");
		main();
		break;

	case 0:
		SetConsoleTextAttribute(color, 2);
		cout << "---------- \n";
		SetConsoleTextAttribute(color, 11);
		cout << "Thank you for visiting FITCIS. Please come again. \n";
		system("pause");
		cin.clear();
		break;

	default:
		SetConsoleTextAttribute(color, 12);
		cout << "---------- \n";
		cout << "Invalid input. Please try again. \n";
		system("pause");
		Afit(Auser);
	}


	}

	void Aabout(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------------------\n";
		cout << "--------- FIT CAMPUS INFORMATION SYSTEM : ABOUT VIEW & EDIT ---------\n";
		cout << "---------------------------------------------------------------------\n";
		cout << endl;


		int edchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] VIEW \n";
		cout << "[2] EDIT \n\n";
		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> edchoice;
		cout << endl;


		switch (edchoice) {
		case 1:
			edabout(Auser);
			break;

		case 2:
			abouted(Auser);
			break;



		case 0:
			system("cls");
			Afit(Auser);
			break;



		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Aabout(Auser);
		}



	}



	void edabout(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FIT CAMPUS INFORMATION SYSTEM : ABOUT ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;

		int abtchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FIT Vision, Mission & Core Values \n";
		cout << "[2] FEU History \n";
		cout << "[3] FIT Icon \n";
		cout << "[4] FIT Hymn \n";
		cout << "[5] BACK \n\n";

		cout << "[0] EXIT \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> abtchoice;
		cout << endl;

		switch (abtchoice) {
		case 1:
			Avmc(Auser);
			break;

		case 2:
			Ahis(Auser);
			break;


		case 3:
			Aicon(Auser);
			break;

		case 4:
			Ahymn(Auser);
			break;



		case 5:
			system("cls");
			Aabout(Auser);
			break;

		case 0:
			SetConsoleTextAttribute(color, 2);
			cout << "---------- \n";
			SetConsoleTextAttribute(color, 11);
			cout << "Thank you for visiting FITCIS. Please come again. \n";
			system("pause");
			cin.clear();
			break;

		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			edabout(Auser);
		}


	}

	void Avmc(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-------------------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : VISION, MISSION & CORE VALUES ---------\n";
		cout << "-------------------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream aboutt;

		aboutt.open("about.txt", ios::in);
		if (aboutt.is_open()) {
			string abt;
			while (getline(aboutt, abt)) {

				cout << abt << endl;
			}

			aboutt.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edabout(Auser);

	}

	void Ahis(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "----------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : HISTORY  ---------\n";
		cout << "----------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream aboutt;

		aboutt.open("history.txt", ios::in);
		if (aboutt.is_open()) {
			string abt;
			while (getline(aboutt, abt)) {

				cout << abt << endl;
			}

			aboutt.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edabout(Auser);

	}

	void Aicon(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "--------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : ICON & SEAL  ---------\n";
		cout << "--------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream aboutt;
		fstream aboutt1;

		aboutt.open("icon.txt", ios::in);
		if (aboutt.is_open()) {
			string abt;
			while (getline(aboutt, abt)) {

				cout << abt << endl;
			}

			aboutt.close();
			system("icon.jpg");
		}
		aboutt1.open("icon.txt", ios::in);
		if (aboutt1.is_open()) {
			string abt1;
			while (getline(aboutt1, abt1)) {

				cout << abt1 << endl;
			}

			aboutt1.close();
			system("seal.png");
		}


		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edabout(Auser);


	}

	void Ahymn(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "--------------------------------------------------\n";
		cout << "--------- FAR EASTERN UNIVERSITY : HYMN  ---------\n";
		cout << "--------------------------------------------------\n";
		cout << endl;


		int hymnchoice;

		SetConsoleTextAttribute(color, 15);


		fstream aboutt;

		aboutt.open("hymn.txt", ios::in);
		if (aboutt.is_open()) {
			string abt;
			while (getline(aboutt, abt)) {

				cout << abt << endl;
			}

			aboutt.close();
		}

		SetConsoleTextAttribute(color, 14);
		cout << "[1] LISTEN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> hymnchoice;
		cout << endl;

		switch (hymnchoice) {
		case 1:
			ShellExecute(0, 0, L"https://www.youtube.com/watch?v=-JZs1ef8I8s", 0, 0, SW_SHOW);
			Ahymn(Auser);
			break;


		case 0:
			system("cls");
			edabout(Auser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Ahymn(Auser);

		}


	}


	void abouted(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FIT CAMPUS INFORMATION SYSTEM : ABOUT ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;

		int abtchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FIT Vision, Mission & Core Values \n";
		cout << "[2] FEU History \n";
		cout << "[3] FIT Icon \n";
		cout << "[4] FIT Hymn \n";
		cout << "[5] BACK \n\n";

		cout << "[0] EXIT \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> abtchoice;
		cout << endl;

		switch (abtchoice) {
		case 1:
			system("about.txt");
			abouted(Auser);
			break;

		case 2:
			system("history.txt");
			abouted(Auser);
			break;


		case 3:
			system("icon.txt");
			abouted(Auser);
			break;

		case 4:
			system("hymn.txt");
			abouted(Auser);
			break;



		case 5:
			system("cls");
			Aabout(Auser);
			break;

		case 0:
			SetConsoleTextAttribute(color, 2);
			cout << "---------- \n";
			SetConsoleTextAttribute(color, 11);
			cout << "Thank you for visiting FITCIS. Please come again. \n";
			system("pause");
			cin.clear();
			break;

		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			abouted(Auser);
		}


	}



	void Afitfloor(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "--------------------------------------------------------------------------\n";
		cout << "--------- FIT CAMPUS INFORMATION SYSTEM : FIT FLOORS VIEW & EDIT ---------\n";
		cout << "--------------------------------------------------------------------------\n";
		cout << endl;


		int edchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] VIEW \n";
		cout << "[2] EDIT \n\n";
		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> edchoice;
		cout << endl;


		switch (edchoice) {
		case 1:
			edfitfloor(Auser);
			break;

		case 2:
			fitfloored(Auser);
			break;



		case 0:
			system("cls");
			Afit(Auser);
			break;



		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Afitfloor(Auser);
		}

	}


	void edfitfloor(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "--------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : FLOORS ---------\n";
		cout << "--------------------------------------------------------\n";
		cout << endl;

		int abtchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1]  FIT GROUND FLOOR \n";
		cout << "[2]  FIT 2ND  FLOOR \n";
		cout << "[3]  FIT 3RD  FLOOR \n";
		cout << "[4]  FIT 4TH  FLOOR \n";
		cout << "[5]  FIT 5TH  FLOOR \n";
		cout << "[6]  FIT 6TH  FLOOR \n";
		cout << "[7]  FIT 7TH  FLOOR \n";
		cout << "[8]  FIT 8TH  FLOOR \n";
		cout << "[9]  FIT 9TH  FLOOR \n";
		cout << "[10] FIT 10TH FLOOR \n";
		cout << "[11] FIT 11TH FLOOR \n";
		cout << "[12] FIT 12TH FLOOR \n";
		cout << "[14] FIT 14TH FLOOR \n";
		cout << "[15] FIT 15TH FLOOR \n";
		cout << "[16] FIT 16TH FLOOR \n";
		cout << "[17] FIT 17TH FLOOR \n";
		cout << "[18] FIT 18TH FLOOR \n";



		cout << "[19] BACK \n\n";

		cout << "[0] EXIT \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> abtchoice;
		cout << endl;

		switch (abtchoice) {
		case 1:
			Afloor1(Auser);
			break;

		case 2:
			Afloor2(Auser);
			break;

		case 3:
			Afloor3(Auser);
			break;

		case 4:
			Afloor4(Auser);
			break;

		case 5:
			Afloor5(Auser);
			break;

		case 6:
			Afloor6(Auser);
			break;

		case 7:
			Afloor7(Auser);
			break;

		case 8:
			Afloor8(Auser);
			break;

		case 9:
			Afloor9(Auser);
			break;

		case 10:
			Afloor10(Auser);
			break;


		case 11:
			Afloor11(Auser);
			break;

		case 12:
			Afloor12(Auser);
			break;

		case 14:
			Afloor14(Auser);
			break;

		case 15:
			Afloor15(Auser);
			break;

		case 16:
			Afloor16(Auser);
			break;

		case 17:
			Afloor17(Auser);
			break;

		case 18:
			Afloor8(Auser);
			break;


		case 19:
			system("cls");
			Afitfloor(Auser);
			break;

		case 0:
			SetConsoleTextAttribute(color, 2);
			cout << "---------- \n";
			SetConsoleTextAttribute(color, 11);
			cout << "Thank you for visiting FITCIS. Please come again. \n";
			system("pause");
			cin.clear();
			break;

		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			edfitfloor(Auser);
		}


	}

	void Afloor1(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : GROUND FLOOR  ---------\n";
		cout << "---------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor1.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edfitfloor(Auser);




	}

	void Afloor2(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 2ND FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor2.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("2ndfloor.jpg");
			Afloor2(Auser);
			break;


		case 0:
			system("cls");
			edfitfloor(Auser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Afloor2(Auser);

		}




		}
	void Afloor3(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 3RD FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor3.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Afitfloor(Auser);




		}
	void Afloor4(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 4TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor4.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("4thfloor.png");
			Afloor4(Auser);
			break;


		case 0:
			system("cls");
			edfitfloor(Auser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Afloor4(Auser);

		}




		}
	void Afloor5(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 5TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor5.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("5thfloor.jpg");
			Afloor5(Auser);
			break;


		case 0:
			system("cls");
			edfitfloor(Auser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Afloor5(Auser);

		}




		}
	void Afloor6(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 6TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor6.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("6thfloor.jpg");
			Afloor6(Auser);
			break;


		case 0:
			system("cls");
			edfitfloor(Auser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Afloor6(Auser);

		}




		}
	void Afloor7(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 7TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor7.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("7thfloor.jpg");
			Afloor7(Auser);
			break;


		case 0:
			system("cls");
			edfitfloor(Auser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Afloor7(Auser);

		}




		}
	void Afloor8(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 8TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor8.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("8thfloor.jpg");
			Afloor8(Auser);
			break;


		case 0:
			system("cls");
			edfitfloor(Auser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Afloor8(Auser);

		}




		}
	void Afloor9(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 9TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor9.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("9thfloor.jpg");
			Afloor9(Auser);
			break;


		case 0:
			system("cls");
			edfitfloor(Auser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Afloor9(Auser);

		}

		}


	void Afloor10(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 10TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor10.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("10thfloor.jpg");
			floor10(Auser);
			break;


		case 0:
			system("cls");
			fitfloor(Auser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Afloor10(Auser);

		}

		}


	void Afloor11(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 11TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor11.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("11thfloor.jpg");
			Afloor11(Auser);
			break;


		case 0:
			system("cls");
			edfitfloor(Auser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Afloor11(Auser);

		}



	}
	void Afloor12(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 12TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor12.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("12thfloor.jpg");
			Afloor12(Auser);
			break;


		case 0:
			system("cls");
			edfitfloor(Auser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Afloor12(Auser);

		}



		}
	void Afloor14(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 14TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor14.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("14thfloor.jpg");
			Afloor14(Auser);
			break;


		case 0:
			system("cls");
			edfitfloor(Auser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Afloor14(Auser);

		}



		}
	void Afloor15(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 15TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor15.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("15thfloor.png");
			Afloor15(Auser);
			break;


		case 0:
			system("cls");
			edfitfloor(Auser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Afloor15(Auser);

		}



		}
	void Afloor16(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 16TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor16.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}


		int floorchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FLOOR PLAN \n";

		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> floorchoice;
		cout << endl;

		switch (floorchoice) {
		case 1:
			system("16thfloor.png");
			Afloor16(Auser);
			break;


		case 0:
			system("cls");
			edfitfloor(Auser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Afloor16(Auser);

		}



		}
	void Afloor17(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 17TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor17.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edfitfloor(Auser);



		}
	void Afloor18(string Auser){

		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : 18TH FLOOR  ---------\n";
		cout << "------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream floor;

		floor.open("floor18.txt", ios::in);
		if (floor.is_open()) {
			string flor;
			while (getline(floor, flor)) {

				cout << flor << endl;
			}

			floor.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edfitfloor(Auser);


		}



	void fitfloored(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "--------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : FLOORS ---------\n";
		cout << "--------------------------------------------------------\n";
		cout << endl;

		int abtchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1]  FIT GROUND FLOOR \n";
		cout << "[2]  FIT 2ND  FLOOR \n";
		cout << "[3]  FIT 3RD  FLOOR \n";
		cout << "[4]  FIT 4TH  FLOOR \n";
		cout << "[5]  FIT 5TH  FLOOR \n";
		cout << "[6]  FIT 6TH  FLOOR \n";
		cout << "[7]  FIT 7TH  FLOOR \n";
		cout << "[8]  FIT 8TH  FLOOR \n";
		cout << "[9]  FIT 9TH  FLOOR \n";
		cout << "[10] FIT 10TH FLOOR \n";
		cout << "[11] FIT 11TH FLOOR \n";
		cout << "[12] FIT 12TH FLOOR \n";
		cout << "[14] FIT 14TH FLOOR \n";
		cout << "[15] FIT 15TH FLOOR \n";
		cout << "[16] FIT 16TH FLOOR \n";
		cout << "[17] FIT 17TH FLOOR \n";
		cout << "[18] FIT 18TH FLOOR \n";



		cout << "[19] BACK \n\n";

		cout << "[0] EXIT \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> abtchoice;
		cout << endl;

		switch (abtchoice) {
		case 1:
			system("floor1.txt");
			fitfloored(Auser);
			break;

		case 2:
			system("floor2.txt");
			fitfloored(Auser);
			break;

		case 3:
			system("floor3.txt");
			fitfloored(Auser);
			break;

		case 4:
			system("floor4.txt");
			fitfloored(Auser);
			break;

		case 5:
			system("floor5.txt");
			fitfloored(Auser);
			break;

		case 6:
			system("floor6.txt");
			fitfloored(Auser);
			break;

		case 7:
			system("floor7.txt");
			fitfloored(Auser);
			break;

		case 8:
			system("floor8.txt");
			fitfloored(Auser);
			break;

		case 9:
			system("floor9.txt");
			fitfloored(Auser);
			break;

		case 10:
			system("floor10.txt");
			fitfloored(Auser);
			break;


		case 11:
			system("floor11.txt");
			fitfloored(Auser);
			break;

		case 12:
			system("floor12.txt");
			fitfloored(Auser);
			break;

		case 14:
			system("floor14.txt");
			fitfloored(Auser);
			break;

		case 15:
			system("floor15.txt");
			fitfloored(Auser);
			break;

		case 16:
			system("floor16.txt");
			fitfloored(Auser);
			break;

		case 17:
			system("floor17.txt");
			fitfloored(Auser);
			break;

		case 18:
			system("floor18.txt");
			fitfloored(Auser);
			break;


		case 19:
			system("cls");
			Afitfloor(Auser);
			break;

		case 0:
			SetConsoleTextAttribute(color, 2);
			cout << "---------- \n";
			SetConsoleTextAttribute(color, 11);
			cout << "Thank you for visiting FITCIS. Please come again. \n";
			system("pause");
			cin.clear();
			break;

		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			fitfloored(Auser);
		}


	}





	void Aconduct(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-------------------------------------------------------------------------------\n";
		cout << "--------- FIT CAMPUS INFORMATION SYSTEM : CODE OF CONDUCT VIEW & EDIT ---------\n";
		cout << "-------------------------------------------------------------------------------\n";
		cout << endl;


		int edchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] VIEW \n";
		cout << "[2] EDIT \n\n";
		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> edchoice;
		cout << endl;


		switch (edchoice) {
		case 1:
			edconduct(Auser);
			break;

		case 2:
			system("conduct.txt");
			Aconduct(Auser);
			break;



		case 0:
			system("cls");
			Afit(Auser);
			break;



		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Aconduct(Auser);
		}

		}

	void edconduct(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-----------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : CODE OF CONDUCT ---------\n";
		cout << "-----------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream conduct;

		conduct.open("conduct.txt", ios::in);
		if (conduct.is_open()) {
			string cdt;
			while (getline(conduct, cdt)) {

				cout << cdt << endl;
			}

			conduct.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Aconduct(Auser);

	}




	void Aoff(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-----------------------------------------------------------------------\n";
		cout << "--------- FIT CAMPUS INFORMATION SYSTEM : OFFICES VIEW & EDIT ---------\n";
		cout << "-----------------------------------------------------------------------\n";
		cout << endl;


		int edchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] VIEW \n";
		cout << "[2] EDIT \n\n";
		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> edchoice;
		cout << endl;


		switch (edchoice) {
		case 1:
			edoff(Auser);
			break;

		case 2:
			offed(Auser);
			break;



		case 0:
			system("cls");
			Afit(Auser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Aconduct(Auser);
		}

	}

	void edoff(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : OFFICES ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;

		int offchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1]  FIT AERO \n";
		cout << "[2]  FIT ACCOUNTING OFFICE \n";
		cout << "[3]  FIT CASHIER's OFFICE \n";
		cout << "[4]  FIT REGISTRAR OFFICE\n";
		cout << "[5]  FIT CESU \n";
		cout << "[6]  FIT CSO & MIS \n";
		cout << "[7]  FIT DISCIPLE UNIT \n";
		cout << "[8]  FIT GUIDANCE UNIT\n";
		cout << "[9]  FIT SADU \n";
		cout << "[10] FIT HSU \n";
		cout << "[11] FIT ICARE \n";
		cout << "[12] FIT IALAP \n";
		cout << "[13] FIT LIBRARY\n";
		cout << "[14] BACK \n\n";


		cout << "[0] EXIT \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> offchoice;
		cout << endl;

		switch (offchoice) {
		case 1:
			Aaero(Auser);
			break;

		case 2:
			Aaccntng(Auser);
			break;


		case 3:
			Acash(Auser);
			break;

		case 4:
			Argstr(Auser);
			break;


		case 5:
			Acesu(Auser);
			break;

		case 6:
			Acsms(Auser);
			break;


		case 7:
			Adu(Auser);
			break;

		case 8:
			Agu(Auser);
			break;


		case 9:
			Asadu(Auser);
			break;

		case 10:
			Ahsu(Auser);
			break;


		case 11:
			Aicare(Auser);
			break;

		case 12:
			Aialap(Auser);
			break;

		case 13:
			Albry(Auser);
			break;


		case 14:
			system("cls");
			Aoff(Auser);
			break;

		case 0:
			SetConsoleTextAttribute(color, 2);
			cout << "---------- \n";
			SetConsoleTextAttribute(color, 11);
			cout << "Thank you for visiting FITCIS. Please come again. \n";
			system("pause");
			cin.clear();
			break;

		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			edoff(Auser);
		}



	}

	void Aaero(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : AERO ---------\n";
		cout << "------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("aero.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edoff(Auser);




	}
	void Aaccntng(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : ACCOUNTING OFFICE ---------\n";
		cout << "-------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("accntng.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edoff(Auser);

		}

	void Acash(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : CASHIER'S OFFICE ---------\n";
		cout << "------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("cash.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edoff(Auser);




		}
	void Argstr(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : REGISTRAR OFFICE ---------\n";
		cout << "------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("rgstr.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edoff(Auser);



		}
	void Acesu(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : CESU ---------\n";
		cout << "------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("cesu.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edoff(Auser);



		}
	void Acsms(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : CSMS ---------\n";
		cout << "------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("csms.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edoff(Auser);



		}
	void Adu(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-----------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : DISCIPLINE UNIT ---------\n";
		cout << "-----------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("csms.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edoff(Auser);



		}
	void Agu(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : GUIDANCE UNIT ---------\n";
		cout << "---------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("gu.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edoff(Auser);



		}
	void Asadu(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : HEALTH SERVICE UNIT ---------\n";
		cout << "---------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("hsu.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edoff(Auser);




		}
	void Ahsu(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : SADU ---------\n";
		cout << "------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("sadu.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edoff(Auser);



		}
	void Aicare(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : ICARE ---------\n";
		cout << "-------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("icare.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edoff(Auser);

		}



	void Aialap(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : IALAP ---------\n";
		cout << "-------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("ialap.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edoff(Auser);



		}
	void Albry(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : LIBRARY ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream office;

		office.open("lbry.txt", ios::in);
		if (office.is_open()) {
			string off;
			while (getline(office, off)) {

				cout << off << endl;
			}

			office.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		edoff(Auser);



		}

	void offed(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : OFFICES ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;

		int offchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1]  FIT AERO \n";
		cout << "[2]  FIT ACCOUNTING OFFICE \n";
		cout << "[3]  FIT CASHIER's OFFICE \n";
		cout << "[4]  FIT REGISTRAR OFFICE\n";
		cout << "[5]  FIT CESU \n";
		cout << "[6]  FIT CSO & MIS \n";
		cout << "[7]  FIT DISCIPLE UNIT \n";
		cout << "[8]  FIT GUIDANCE UNIT\n";
		cout << "[9]  FIT SADU \n";
		cout << "[10] FIT HSU \n";
		cout << "[11] FIT ICARE \n";
		cout << "[12] FIT IALAP \n";
		cout << "[13] FIT LIBRARY\n";
		cout << "[14] BACK \n\n";


		cout << "[0] EXIT \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> offchoice;
		cout << endl;

		switch (offchoice) {
		case 1:
			system("aero.txt");
			offed(Auser);
			break;

		case 2:
			system("accntng.txt");
			offed(Auser);
			break;


		case 3:
			system("cash.txt");
			offed(Auser);
			break;

		case 4:
			system("rgstr.txt");
			offed(Auser);
			break;


		case 5:
			system("cesu.txt");
			offed(Auser);
			break;

		case 6:
			system("csms.txt");
			offed(Auser);
			break;


		case 7:
			system("du.txt");
			offed(Auser);
			break;

		case 8:
			system("gu.txt");
			offed(Auser);
			break;


		case 9:
			system("sadu.txt");
			offed(Auser);
			break;

		case 10:
			system("hsu.txt");
			offed(Auser);
			break;


		case 11:
			system("icare.txt");
			offed(Auser);
			break;

		case 12:
			system("ialap.txt");
			offed(Auser);
			break;

		case 13:
			system("lbry.txt");
			offed(Auser);
			break;


		case 14:
			system("cls");
			Aoff(Auser);
			break;

		case 0:
			SetConsoleTextAttribute(color, 2);
			cout << "---------- \n";
			SetConsoleTextAttribute(color, 11);
			cout << "Thank you for visiting FITCIS. Please come again. \n";
			system("pause");
			cin.clear();
			break;

		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			offed(Auser);
		}

	}





	void Aacad(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-------------------------------------------------------------------------\n";
		cout << "--------- FIT CAMPUS INFORMATION SYSTEM : ACADEMICS VIEW & EDIT ---------\n";
		cout << "-------------------------------------------------------------------------\n";
		cout << endl;


		int edchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] VIEW \n";
		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> edchoice;
		cout << endl;


		switch (edchoice) {
		case 1:
			edacad(Auser);
			break;


		case 0:
			system("cls");
			Afit(Auser);
			break;



		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Aacad(Auser);
		}


		}


	void edacad(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "-------------------------------------------------------------\n";
		cout << "--------- FIT CAMPUS INFORMATION SYSTEM : ACADEMICS ---------\n";
		cout << "-------------------------------------------------------------\n";
		cout << endl;

		int acadchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FIT SCHOOL CALENDAR \n";
		cout << "[2] FEU GRADING SYSTEM \n";
		cout << "[3] FIT DRESS CODE \n";
		cout << "[4] FIT TUITION \n";
		cout << "[5] FIT COLLEGE OF CCSMA \n";
		cout << "[6] FEU COLLEGE OF ENGINEERING \n";

		cout << "[7] BACK \n\n";

		cout << "[0] EXIT \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> acadchoice;
		cout << endl;

		switch (acadchoice) {
		case 1:
			system("calendar.png");
			edacad(Auser);
			break;

		case 2:
			system("gradesys.jpg");
			edacad(Auser);
			break;


		case 3:
			dcode(Auser);
			break;



		case 4:
			tuit(Auser);
			break;


		case 5:
			Accsma(Auser);
			break;


		case 6:
			Aeng(Auser);
			break;



		case 7:
			system("cls");
			Aacad(Auser);
			break;

		case 0:
			SetConsoleTextAttribute(color, 2);
			cout << "---------- \n";
			SetConsoleTextAttribute(color, 11);
			cout << "Thank you for visiting FITCIS. Please come again. \n";
			system("pause");
			cin.clear();
			break;

		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			edacad(Auser);
		}

	}

	void Accsma(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "-----------------------------------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : COLLEGE OF COMPUTER STUDIES & MULTIMEDIA ARTS ---------\n";
		cout << "-----------------------------------------------------------------------------------------------\n";
		cout << endl;

		int colchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FIT BSCS-SE \n";
		cout << "[2] FIT BSCS-DS \n";
		cout << "[3] FIT BSIT-BA \n";
		cout << "[4] FIT BSIT-IB \n";
		cout << "[5] FIT BSIT-AGD \n";
		cout << "[6] FIT BSIT-WMA \n";
		cout << "[7] FIT BMA \n";


		cout << "[8] BACK \n\n";

		cout << "[0] EXIT \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> colchoice;
		cout << endl;

		switch (colchoice) {
		case 1:
			Ase(Auser);
			break;

		case 2:
			Ads(Auser);
			break;


		case 3:
			Aba(Auser);
			break;


		case 4:
			Aib(Auser);
			break;


		case 5:
			Aagd(Auser);
			break;

		case 6:
			Awma(Auser);
			break;

		case 7:
			Abma(Auser);
			break;


		case 8:
			system("cls");
			Aacad(Auser);
			break;

		case 0:
			SetConsoleTextAttribute(color, 2);
			cout << "---------- \n";
			SetConsoleTextAttribute(color, 11);
			cout << "Thank you for visiting FITCIS. Please come again. \n";
			system("pause");
			cin.clear();
			break;

		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Accsma(Auser);
		}


	}

	void Aeng(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 2);
		cout << "------------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : COLLEGE OF ENGINEERING ---------\n";
		cout << "------------------------------------------------------------------------\n";
		cout << endl;

		int colchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FIT CIVIL ENGINEERING \n";
		cout << "[2] FIT COMPUTER ENGINEERING \n";
		cout << "[3] FIT ELECTRICAL ENGINEERING \n";
		cout << "[4] FIT ELECTRONICS ENGINEERING \n";
		cout << "[5] FIT MECHANICAL ENGINEERING \n";

		cout << "[6] BACK \n\n";

		cout << "[0] EXIT \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> colchoice;
		cout << endl;

		switch (colchoice) {
		case 1:
			Ace(Auser);
			break;

		case 2:
			Acpe(Auser);
			break;


		case 3:
			Aee(Auser);
			break;


		case 4:
			Aelc(Auser);
			break;


		case 5:
			Ame(Auser);
			break;


		case 6:
			system("cls");
			Aacad(Auser);
			break;

		case 0:
			SetConsoleTextAttribute(color, 2);
			cout << "---------- \n";
			SetConsoleTextAttribute(color, 11);
			cout << "Thank you for visiting FITCIS. Please come again. \n";
			system("pause");
			cin.clear();
			break;

		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Aeng(Auser);
		}


	}

	void Ase(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : BSCS-SE ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("se.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Accsma(Auser);


		}
	void Ads(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : BSCS-DS ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("ds.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Accsma(Auser);


	}
	void Aba(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : BSIT-BA ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("ba.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Accsma(Auser);


		}
	void Aib(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : BSIT-IB ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("ib.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Accsma(Auser);


		}
	void Aagd(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : BSIT-AGD ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("ib.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Accsma(Auser);


		}
	void Awma(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "---------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : BSIT-WMA ---------\n";
		cout << "---------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("ib.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Accsma(Auser);


		}
	void Abma(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-----------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : BMA ---------\n";
		cout << "-----------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("bma.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Accsma(Auser);


		}

	void Ace(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : CIVIL ENGINEERING ---------\n";
		cout << "-------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("ce.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Aeng(Auser);


		}
	void Acpe(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "----------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : COMPUTER ENGINEERING ---------\n";
		cout << "----------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("cpe.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Aeng(Auser);


		}
	void Aee(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : ELECTRICAL ENGINEERING ---------\n";
		cout << "------------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("ee.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Aeng(Auser);


		}
	void Aelc(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "-------------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : ELECTRONICS ENGINEERING ---------\n";
		cout << "-------------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream course;

		course.open("ee.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Aeng(Auser);


		}
	void Ame(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : MECHANICAL ENGINEERING ---------\n";
		cout << "------------------------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);

		fstream course;

		course.open("me.txt", ios::in);
		if (course.is_open()) {
			string cor;
			while (getline(course, cor)) {

				cout << cor << endl;
			}

			course.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Aeng(Auser);


		}


	void Alink(string Auser){
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "--------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : LINKS  ---------\n";
		cout << "--------------------------------------------------------\n";
		cout << endl;


		int linkchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] FIT STUDENT PORTAL \n";
		cout << "[2] FIT WEBSITE \n";
		cout << "[3] FIT FACEBOOK \n";
		cout << "[4] FIT CANVAS \n\n";
		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> linkchoice;
		cout << endl;

		switch (linkchoice) {
		case 1:
			ShellExecute(0, 0, L"https://students.feutech.edu.ph/", 0, 0, SW_SHOW);
			link(Auser);
			break;

		case 2:
			ShellExecute(0, 0, L"https://www.feutech.edu.ph/", 0, 0, SW_SHOW);
			link(Auser);
			break;

		case 3:
			ShellExecute(0, 0, L"https://www.facebook.com/feueac/", 0, 0, SW_SHOW);
			link(Auser);
			break;

		case 4:
			ShellExecute(0, 0, L"https://feu.instructure.com/", 0, 0, SW_SHOW);
			link(Auser);
			break;



		case 0:
			system("cls");
			Sfit(Auser);
			break;


		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			link(Auser);

		}

		}
	void Acon(string Auser){

		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "------------------------------------------------------------------------\n";
		cout << "--------- FIT CAMPUS INFORMATION SYSTEM : CONTACTS VIEW & EDIT ---------\n";
		cout << "------------------------------------------------------------------------\n";
		cout << endl;


		int edchoice;

		SetConsoleTextAttribute(color, 14);
		cout << "[1] VIEW \n";
		cout << "[2] EDIT \n\n";
		cout << "[0] BACK \n\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Please enter your choice: ";
		SetConsoleTextAttribute(color, 14);
		cin >> edchoice;
		cout << endl;


		switch (edchoice) {
		case 1:
			edcon(Auser);
			break;

		case 2:
			system("contact.txt");
			Acon(Auser);
			break;



		case 0:
			system("cls");
			Afit(Auser);
			break;



		default:
			SetConsoleTextAttribute(color, 12);
			cout << "---------- \n";
			cout << "Invalid input. Please try again. \n";
			system("pause");
			Aoff(Auser);
		}


		}


	void edcon(string Auser) {
		system("cls");

		// font-size and font-color
		static CONSOLE_FONT_INFOEX fontex;
		fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		GetCurrentConsoleFontEx(h0ut, 0, &fontex);
		fontex.FontWeight = 600;
		fontex.dwFontSize.X = 18;
		fontex.dwFontSize.Y = 18;
		SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

		//attrib for color changing
		SetConsoleTextAttribute(color, 14);
		cout << "----------------------------------------------------------\n";
		cout << "--------- FEU INSTITUTE OF TECHNOLOGY : CONTACTS ---------\n";
		cout << "----------------------------------------------------------\n";
		cout << endl;


		SetConsoleTextAttribute(color, 15);


		fstream link;

		link.open("contact.txt", ios::in);
		if (link.is_open()) {
			string cor;
			while (getline(link, cor)) {

				cout << cor << endl;
			}

			link.close();
		}
		cout << endl;
		SetConsoleTextAttribute(color, 2);
		system("pause");
		Acon(Auser);


	}


	
