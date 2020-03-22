#include <iostream>
#include <string>
#include <stdlib.h>  
#include <math.h> 
#include <cmath> 
#include <time.h> 
#include "simpleFunc.h"
#include "gameFunc.h"
#include <sstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void menu(){
	bool flag = true;
	char opt = 'a';
	while(flag)
	{
		cout<< "enter 'a' - for learning mode, 'b'- for game mode, or 'c' - to exit: "<< endl;
		//cin >> opt;
		opt = inputVald1();
		switch(opt){
			case 'a':
				learnMode();
				break;
			case'b':
				gameMode();
				break;
			case 'c' :
				flag = false;
				break;
		}
	}

}

int main() {

	menu();
	return 0;
}
