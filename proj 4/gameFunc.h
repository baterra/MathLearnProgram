#include <iostream>
#include <sstream>
double inputValdDouble(){
string s = "a";
	bool t = true;
	int decPointCount = 0;
	double num = 0;
	while (t){
		cin>>s;
		decPointCount = 0;
		t = false;
		for(int i = 0; i < s.length(); i++){
			
			if(s[i] == '.'){
				decPointCount ++;
			}
			if(decPointCount > 1){
			 	t = true;
			 	cout<<"Please Enter a valid number: " << endl;
			 	i = s.length() + 1;
			}else{
				if(s[i] != '0' && s[i] != '1' && s[i] != '2' && s[i] != '3' && s[i] != '4' && s[i] != '5' 
			  	&& s[i] != '6'  && s[i] != '7'  && s[i] != '8'  && s[i] != '9'  && s[i] != '.' )
			 	{
				 	
				 	t = true;
				 	cout<<"Please Enter a valid number: " << endl;
				 	i = s.length() + 1;
			 	
			 	}
			}
			
			
			 
		}
	}
	stringstream aa;
	aa << s;
	aa >> num;
	return num;
}

char inputVald1(){
	string s = "a";
	bool t = true;
	
	while(t){
		cin>>s;
		if(s.length()>1){
			cout<<"Please Enter a char(a,b,c): " << endl;
			
		}
		else{
			if(tolower(s[0]) != 'a' && tolower(s[0]) != 'b' && tolower(s[0]) != 'c' ){
				cout<<"Please Enter a char(a,b,c): " << endl;
			
			}
			else{
				t = false;
			}
			
		}
	}
	return tolower(s[0]);
	
}

char inputVald2(){
	string s = "a";
	bool t = true;
	
	while(t){
		cin>>s;
		if(s.length()>1){
			cout<<"Please Enter a char(a,b,c,d,e,f,g,h): " << endl;
			
		}
		else{
			if(tolower(s[0]) != 'a' && tolower(s[0]) != 'b' && tolower(s[0]) != 'c' && tolower(s[0]) != 'd'
			&& tolower(s[0]) != 'e'&& tolower(s[0]) != 'f' && tolower(s[0]) != 'g' && tolower(s[0]) != 'h' ){
				cout<<"Please Enter a char(a,b,c,d,e,f,g,h): " << endl;
			
			}
			else{
				t = false;
			}
			
		}
	}
	return tolower(s[0]);
	
}

char inputVald3(){
	string s = "a";
	bool t = true;
	
	while(t){
		cin>>s;
		if(s.length()>1){
			cout<<"Please Enter a char(a,b): " << endl;
			
		}
		else{
			if(tolower(s[0]) != 'a' && tolower(s[0]) != 'b' ){
				cout<<"Please Enter a char(a,b): " << endl;
			
			}
			else{
				t = false;
			}
			
		}
	}
	return tolower(s[0]);
	
}

char inputVald4(){
	string s = "a";
	bool t = true;
	
	while(t){
		cin>>s;
		if(s.length()>1){
			cout<<"Please Enter a char(a,b,c,d): " << endl;
			
		}
		else{
			if(tolower(s[0]) != 'a' && tolower(s[0]) != 'b' && tolower(s[0]) != 'c' && tolower(s[0]) != 'd' ){
				cout<<"Please Enter a char(a,b,c,d): " << endl;
			
			}
			else{
				t = false;
			}
			
		}
	}
	return tolower(s[0]);
	
}

char inputVald5(){
	string s = "a";
	bool t = true;
	
	while(t){
		cin>>s;
		if(s.length()>1){
			cout<<"Please Enter a char(a,b,c,d,e,f,g): " << endl;
			
		}
		else{
			if(tolower(s[0]) != 'a' && tolower(s[0]) != 'b' && tolower(s[0]) != 'c' && tolower(s[0]) != 'd'
			&& tolower(s[0]) != 'e'&& tolower(s[0]) != 'f' && tolower(s[0]) != 'g' ){
				cout<<"Please Enter a char(a,b,c,d,e,f,g): " << endl;
			
			}
			else{
				t = false;
			}
			
		}
	}
	return tolower(s[0]);
	
}

char randOp(char opt){
	srand (time(NULL));
	int ran = rand() % 7 + 1;
	char ret = opt;
	
	if(opt == 'h'){
		switch(ran){
			case 1: ret ='a';
			break;
			case 2: ret ='b';
			break;
			case 3:ret = 'c';
			break;
			case 4: ret ='d';
			break;
			case 5: ret ='e';
			break;
			case 6: ret ='f';
			break;
			case 7: ret ='g';
			break;
		}
	}
	return ret;
}

void unaryResult(double opp1, char opt){
	double divRes = 0;
	
	switch(opt){
		case 'e':
			divRes = cosine(opp1);
			cout << " cos( " << opp1;
			
			outs(") = ", divRes);
			
			break;
		case 'f':
			divRes = sine(opp1);
			cout << " sin( " << opp1;
			outs(") = ", divRes);
			break;
		
	}
	
}

void binResult(double opp1, double opp2, char opt){
	double result = 0;
	double divRes = 0;
	char opSym = 'a';
	switch (opt){
		case 'a':
			result = addition(opp1 , opp2);
			opSym = '+';
			break;
		case 'b':
			result =subtraction(opp1 , opp2);
			opSym = '-';
			break;
		case 'c':
			result = multiplication(opp1 , opp2);
			opSym = '*';
			break;
		case 'd':
			if(opp2 != 0){
				divRes = dDivision(opp1 , opp2);
			}
			break;
		case 'g':
			opSym = '^';
			result = power(opp1,opp2);
	}
	
	if( opp2 == 0 && opt == 'd'){
		cout << opp1 << " / " << opp2 << " is undefine." << endl;
		
	}
	
	if(opp2 != 0 && opt == 'd'){
		cout << opp1 << " / " << opp2;
		outs(" = ", divRes);
	}
	
	if(opt != 'd'){
		cout << opp1 << " "<< opSym << " " << opp2;
		outs(" = " , result);
	}
}

void learnMode()
{	
	char option = 'a';
	char option2 = 'a';
	char option3 = 'a';
	bool flag1 = true;
	bool flag2 = true;
	double opperand1 = 0;
	double * op1Ptr = & opperand1;
	double opperand2 = 1;
	double * op2Ptr = & opperand2;
	srand (time(NULL));
	
	
	while(flag1)
	{
		cout << "Enter 'a' for plus, 'b' for minus, 'c' for multiply, 'd' for divide, " <<endl;
		cout << "Enter 'e' for cos, 'f' for sin, 'g' for pow, 'h' for main menu:, " <<endl;
		//cin>>option;
		option = inputVald2();
		if(option == 'h'){
			flag1 = false;
		}
		else{
			flag2 = true;
			while(flag2){
				cout << "Enter 'a' to enter numbers manually, 'b' to randomly generate numbers, " <<endl;
				cout << "or 'c' to return to learn mode menu: " <<endl;
				//cin >> option2;
				option2 = inputVald1();
				if(option2 == 'c'){
					flag2 = false;
				}
				else{
					while(option2 == 'a'){
						cout<< "Enter integer: "<<endl;
						getVal(op1Ptr);
						//cin>>opperand1;
						if(option != 'e' && option != 'f'){
							cout<< "Enter integer: "<<endl;
							//cin>>opperand2;
							getVal(op2Ptr);
						}
						option2 = 'z';
						
					}
					while(option2 == 'b'){
						opperand1 = genRand(20);
						if(option != 'e' && option != 'f'){
							opperand2 = genRand(18);
						}
						option2 = 'z';
						
					}
					
					
					if(option == 'e' or option == 'f' ){
						unaryResult(opperand1, option);
					}
					else{
						binResult(opperand1, opperand2, option);
					}
					
					cout<< "type 'a' to perform the same operation on different numbers " << endl;
					cout<< "or 'b' to start a new operation: " << endl;
					//cin>> option3;
					option3 = inputVald3();
					
					if(option3 == 'b'){
						flag2 = false;
					}
					
				}
			}
		}
		
	}
}


void gameMode()
{
	char option = 'a';
	char option2 = 'a';
	char option3 = 'a';
	bool flag = true;
	double opperand1 = 0;
	double opperand2 = 1;
	while(flag){
		cout << "Enter 'a' for introductory level, 'b' for intermediate level, 'c' for advance level, or 'd' to exit to main menu:  " <<endl;
		//cin>>option;
		option = inputVald4();
		if(option == 'd'){
			flag = false;
		}
		else{
			
			int numOperation = 10;
			int roundCount = 0;
			int score = 0;
			
			//introductory
			while(option == 'a'){
			
				double answer = 0;
				cout << "Enter 'a' for plus, 'b' for minus, 'c' for multiply, 'd' for divide, " <<endl;
				cout << "Enter 'e' for cos, 'f' for sin, 'g' for pow " <<endl;
				//cin>>option2;
				option2 = inputVald5();
				if(option2 == 'e' || option2 == 'f'){
					opperand1 = genRand(9);
					if(option2 == 'e'){
						cout<< "cos( " << opperand1 << " ) = ?" << endl;
						cout<< "Whats the answer? : " << endl;
						answer = inputValdDouble();
						//cin >> answer;
						double diff = abs(answer - cosine(opperand1));
						if(diff <= .001 ){
							cout<< "That is correct!" << endl;
							score++;
						}
						else{
							cout<< "That is wrong. " << endl;
							unaryResult(opperand1, 'e');
							cout << "arcos( " << cosine(opperand1) << " ) = " << opperand1<< endl;
						}
					}
					else{
						cout<< "sin( " << opperand1 << " ) = ?" << endl;
						cout<< "Whats the answer? : " << endl;
						//cin >> answer;
						answer = inputValdDouble();
						double diff = abs(answer - sine(opperand1));
						if(diff <= .001 ){
							cout<< "That is correct!" << endl;
							score++;
						}
						else{
							cout<< "That is wrong. " << endl;
							unaryResult(opperand1, 'f');
							cout << "arcsin( " << sine(opperand1) << " ) = " << opperand1<< endl;
						}
					}
				}
				else{
					opperand1 = genRand(9);
					opperand2 = genRand(8);
					char symbol = 'a';
					double result = 0;
					
					
					switch(option2)
					{
						case 'a':
							symbol = '+'; 
							result = opperand1 + opperand2;
							break;
						case 'b':
							symbol = '-'; 
							result = opperand1 - opperand2;
							break;
						case 'c':
							symbol = '*'; 
							result = opperand1 * opperand2;
							break;
						case 'd':
							symbol = '/'; 
							result = opperand1 / opperand2;
							break;
						case 'g':
							symbol = '^'; 
							result = power(opperand1 , opperand2);
							break;
					}
					
					cout << opperand1 << " " <<symbol<< " " << opperand2 << " = ?"<< endl;
					cout<< "Whats the answer? : " << endl;
					answer = inputValdDouble();
					//cin >> answer;
					
					double diff = abs(answer - result);
					if(diff <= .001 ){
							cout<< "That is correct!" << endl;
							score++;
					}
					else{
							cout<< "That is wrong. " << endl;
							binResult(opperand1, opperand2, option2);
							switch(option2)
							{
								case 'a':
									cout<< result << " - " << opperand1 << " = "<< opperand2<< endl;
									break;
								case 'b':
									cout<< result << " + " << opperand2 << " = "<< opperand1 << endl;
									break;
								case 'c':
									cout<< result << " / " << opperand1 << " = "<< opperand2<< endl;
									break;
								case 'd':
									cout<< result << " * " << opperand2 << " = "<< opperand1<< endl;
									break;
								case 'g':
									cout<< "log "<< opperand1 << " ( "<< result << " ) =  " << opperand2 << endl;
									break;
							}
					}
				}
				
				cout<< "score is " << score << " / " << numOperation << endl;
				roundCount++;
				if(roundCount == numOperation){
					double scorePer = score / (double)numOperation ;
					if((scorePer) >= .70){
						cout << "Enter a- to play same level again, b- to move up a level, c- exit to game mode menu: "<<endl;
						//cin>> option3; 
						option3 = inputVald1();
						
						if(option3 == 'a'){
							 numOperation = 10;
							 roundCount = 0;
							 score = 0;
						}
						else{
							if(option3 == 'b'){
							 	numOperation = 10;
							 	roundCount = 0;
							 	score = 0;
							 	option = 'b';
							}
							else{
								option = 'z';
							}
						}
					}
					else{
						cout << "Enter a- to play same level again, b- exit to game mode menu: "<<endl;
						//cin>> option3; 
						option3 = inputVald3() ;
						if(option3 == 'a'){
							 numOperation = 10;
							 roundCount = 0;
							 score = 0;
						}
						else{
							option = 'z';
						}
					}
				}
				
			}
			
			//intermediate
			while(option == 'b'){
			
				double answer = 0;
				cout << "Enter 'a' for plus, 'b' for minus, 'c' for multiply, 'd' for divide, " <<endl;
				cout << "Enter 'e' for cos, 'f' for sin, 'g' for pow or 'h' for a random operation" <<endl;
				//cin>>option2;
				option2 = inputVald2();
				option2 = randOp(option2); 
				if(option2 == 'e' || option2 == 'f'){
					opperand1 = genRand(90) + 9;
					if(option2 == 'e'){
						cout<< "cos( " << opperand1 << " ) = ?" << endl;
						cout<< "Whats the answer? : " << endl;
						answer = inputValdDouble();
						//cin >> answer;
						long double diff = abs(answer - cosine(opperand1));
						if(diff <= .001 ){
							cout<< "That is correct!" << endl;
							score++;
						}
						else{
							cout<< "That is wrong. " << endl;
							unaryResult(opperand1, 'e');
							cout << "arcos( " << cosine(opperand1) << " ) = " << opperand1<< endl;
						}
					}
					else{
						cout<< "sin( " << opperand1 << " ) = ?" << endl;
						cout<< "Whats the answer? : " << endl;
						//cin >> answer;
						double diff = abs(answer - sine(opperand1));
						if(diff <= .001 ){
							cout<< "That is correct!" << endl;
							score++;
						}
						else{
							cout<< "That is wrong. " << endl;
							unaryResult(opperand1, 'f');
							cout << "arcsin( " << sine(opperand1) << " ) = " << opperand1<< endl;
						}
					}
				}
				else{
					opperand1 =genRand(90) + 9;
					opperand2 = genRand(80) + 9;
					char symbol = 'a';
					double result = 0;
					
					
					switch(option2)
					{
						case 'a':
							symbol = '+'; 
							result = opperand1 + opperand2;
							break;
						case 'b':
							symbol = '-'; 
							result = opperand1 - opperand2;
							break;
						case 'c':
							symbol = '*'; 
							result = opperand1 * opperand2;
							break;
						case 'd':
							symbol = '/'; 
							result = opperand1 / opperand2;
							break;
						case 'g':
							symbol = '^'; 
							result = power(opperand1 , opperand2);
							break;
					}
					
					cout << opperand1 << " " <<symbol<< " " << opperand2 << " = ?"<< endl;
					cout<< "Whats the answer? : " << endl;
					answer = inputValdDouble();
					//cin >> answer;
					
					double diff = abs(answer - result);
					if(diff <= .001 ){
							cout<< "That is correct!" << endl;
							score++;
					}
					else{
							cout<< "That is wrong. " << endl;
							binResult(opperand1, opperand2, option2);
							switch(option2)
							{
								case 'a':
									cout<< result << " - " << opperand1 << " = "<< opperand2<< endl;
									break;
								case 'b':
									cout<< result << " + " << opperand2 << " = "<< opperand1 << endl;
									break;
								case 'c':
									cout<< result << " / " << opperand1 << " = "<< opperand2<< endl;
									break;
								case 'd':
									cout<< result << " * " << opperand2 << " = "<< opperand1<< endl;
									break;
								case 'g':
									cout<< "log "<< opperand1 << " ( "<< result << " ) =  " << opperand2 << endl;
									break;
							}
					}
				}
				
				cout<< "score is " << score << " / " << numOperation << endl;
				roundCount++;
				if(roundCount == numOperation){
					double scorePer = score / (double)numOperation ;
					if((scorePer) >= .70){
						cout << "Enter a- to play same level again, b- to move up a level, c- exit to game mode menu: "<<endl;
						//cin>> option3;
						option3 = inputVald1();
						
						if(option3 == 'a'){
							 numOperation = 10;
							 roundCount = 0;
							 score = 0;
						}
						else{
							if(option3 == 'b'){
							 	numOperation = 10;
							 	roundCount = 0;
							 	score = 0;
							 	option = 'c';
							}
							else{
								option = 'z';
							}
						}
					}
					else{
						cout << "Enter a- to play same level again, b- exit to game mode menu: "<<endl;
						//cin>> option3;
						option3 = inputVald3();
						if(option3 == 'a'){
							 numOperation = 10;
							 roundCount = 0;
							 score = 0;
						}
						else{
							option = 'z';
						}
					}
				}
				
			}
			//advance
			
			while(option == 'c'){
			
				double answer = 0;
				
				option2 = randOp('h'); 
				if(option2 == 'e' || option2 == 'f'){
					opperand1 = genRand(99) ;
					if(option2 == 'e'){
						cout<< "cos( " << opperand1 << " ) = ?" << endl;
						cout<< "Whats the answer? : " << endl;
						answer = inputValdDouble();
						//cin >> answer;
						long double diff = abs(answer - cosine(opperand1));
						if(diff <= .001 ){
							cout<< "That is correct!" << endl;
							score++;
						}
						else{
							cout<< "That is wrong. " << endl;
							unaryResult(opperand1, 'e');
							cout << "arcos( " << cosine(opperand1) << " ) = " << opperand1<< endl;
						}
					}
					else{
						cout<< "sin( " << opperand1 << " ) = ?" << endl;
						cout<< "Whats the answer? : " << endl;
						answer = inputValdDouble();
						//cin >> answer;
						long double diff = abs(answer - sine(opperand1));
						if(diff <= .001 ){
							cout<< "That is correct!" << endl;
							score++;
						}
						else{
							cout<< "That is wrong. " << endl;
							unaryResult(opperand1, 'f');
							cout << "arcsin( " << sine(opperand1) << " ) = " << opperand1<< endl;
						}
					}
				}
				else{
					opperand1 =genRand(99);
					opperand2 = genRand(80) ;
					char symbol = 'a';
					long double result = 0;
					
					
					switch(option2)
					{
						case 'a':
							symbol = '+'; 
							result = opperand1 + opperand2;
							break;
						case 'b':
							symbol = '-'; 
							result = opperand1 - opperand2;
							break;
						case 'c':
							symbol = '*'; 
							result = opperand1 * opperand2;
							break;
						case 'd':
							symbol = '/'; 
							result = opperand1 / opperand2;
							break;
						case 'g':
							symbol = '^'; 
							result = power(opperand1 , opperand2);
							break;
					}
					
					cout << opperand1 << " " <<symbol<< " " << opperand2 << " = ?"<< endl;
					cout<< "Whats the answer? : " << endl;
					answer = inputValdDouble();
					//cin >> answer;
					
					long double diff = abs(answer - result);
					if(diff <= .001 ){
							cout<< "That is correct!" << endl;
							score++;
					}
					else{
							cout<< "That is wrong. " << endl;
							binResult(opperand1, opperand2, option2);
							switch(option2)
							{
								case 'a':
									cout<< result << " - " << opperand1 << " = "<< opperand2<< endl;
									break;
								case 'b':
									cout<< result << " + " << opperand2 << " = "<< opperand1 << endl;
									break;
								case 'c':
									cout<< result << " / " << opperand1 << " = "<< opperand2<< endl;
									break;
								case 'd':
									cout<< result << " * " << opperand2 << " = "<< opperand1<< endl;
									break;
								case 'g':
									cout<< "log "<< opperand1 << " ( "<< result << " ) =  " << opperand2 << endl;
									break;
							}
					}
				}
				
				cout<< "score is " << score << " / " << numOperation << endl;
				roundCount++;
				if(roundCount == numOperation){
					double scorePer = score / (double)numOperation ;
					if((scorePer) >= .70){
						cout << "Enter a- to play same level again, b- exit to game mode menu: "<<endl;
						//cin>> option3;
						option3 = inputVald3();
						
						if(option3 == 'a'){
							 numOperation = 10;
							 roundCount = 0;
							 score = 0;
						}
						else{
							if(option3 == 'b'){
							 	option = 'z';
							}
							else{
								option = 'z';
							}
						}
					}
					else{
						cout << "Enter a- to play same level again, b- exit to game mode menu: "<<endl;
						//cin>> option3;
						option3 = inputVald3();
						if(option3 == 'a'){
							 numOperation = 10;
							 roundCount = 0;
							 score = 0;
						}
						else{
							option = 'z';
						}
					}
				}
				
			}
			
		}
		
		
		
		
	}
}
