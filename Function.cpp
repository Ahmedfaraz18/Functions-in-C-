#include <iostream>
using namespace std;

void calculator() {
int s1, s2, s3;
cin >> s1;
cin >> s2;
s3 = s1+s2;
cout << "the sum of " << s1 << " and " << s2 << " is " << s3;
}

// void dataTypes(){
//     cout << "The size of int is: " << sizeof(int) <<endl;
//     cout << "The size of float: " << sizeof(float) <<endl;
//     cout << "The size of char " << sizeof(char) <<endl;
//     cout << "The size of bool " << sizeof(bool) <<endl;
//     cout << "The size of double" << sizeof(double) <<endl;
//     cout << "The size of long double is: " << sizeof(long double) <<endl;
// }

// void logInForm(){
// string username;
// int password;

// cout << "enter username: " << endl;
// cin >> username;

// cout << " enter password: " << endl;
// cin >> password;

// if (username == "faraz" && password == 1234){
// cout << "Congratulations login successfully";
// }
// else{
// cout << "invalid username & password";
//  }
//  }

// void ATM(){
    
// 	int input;
	
// 	cout << "************ ATM MANAGMENT SYSTEM ************"<<endl<<endl;
// 	cout << "Press 1 for Balance Inquiry: "<<endl;
// 	cout << "Press 2 for cash Withdrawal: "<<endl;
// 	cout << "Press 3 for Pin Change: "<<endl;
// 	cout << "Press 4 for Services: "<<endl;
// 	cout << "Press 5 for Fund Transfer: "<<endl;
	
// 	cout <<endl<< "Enter your choice: ";
// 	cin >> input;
	
// 	switch(input){
// 		int pin;
// 		case 1:
// 			cout<<endl<< "Balance Inquiry:-"<<endl;
// 			cout << "Total amount: 50k"<< endl;
// 			cout << "Deducted Amount: 30k"<< endl;
// 			cout << "Current Amount: 20k"<< endl;
// 			break;
			
// 			case 2:
// 			cout<<endl<< "Cash Withdrawal:-"<<endl;
// 			cout << "Total amount: 90k"<< endl;
// 			cout << "Amount Withdrawal: 55k"<< endl;
// 			cout << "Account balance: 35k"<< endl;
// 			break;
			
// 			case 3:
// 			cout<<endl<< "Pin Change:-"<<endl;
// 			cout << "Enter Old Pin: ";
// 			cin >> pin;
// 			cout << "Enter New Pin: ";
// 			cin >> pin;
// 			cout << "Re-Enter New Pin: ";
// 			cin >> pin;
// 			cout << "Your Pin Code Is Change Now: ";
// 			break;
			
// 			case 4:
// 			cout<<endl<< "Services:-"<<endl;
// 			cout << "Cash Withdrawals: "<< endl;
// 			cout << "Balance Checking: "<< endl;
// 			cout << "Transferring Credit: "<< endl;
// 			break;
			
// 			case 5:
// 			cout<<endl<< "Funds Transfer:-"<<endl;
// 			cout << " Insert your debit/ATM card: "<< endl;
// 			cout << " Enter your ATM PIN "<< endl;
// 			cin >> pin;
// 			cout << "Enter the required bank details. "<< endl;
// 			cout << "Enter the amount and click on 'Yes'";
// 			break;
// 	}
	
// }

// void payRoll(){
//     int sal;
	
// 	while (true){
	
// 	cout << "********* PAYROLL MANAGMENT SYSTEM *********"<<endl;
// 	cout << "Enter 0 for exit or"<< endl;
// 	cout << "Enter Your Salary: ";
// 	cin >> sal;
	
// 	if(sal<=10000){
// 		int medical, hRent, tax, total;
// 		medical = sal*7/100;
// 		hRent = sal*10/100;
// 		tax = sal*5/100;
// 		total = sal+medical+hRent-tax;
		
// 		cout << "Medical Allowance :" << medical << endl;
// 		cout << "House Rent Allowance :" << hRent << endl;
// 		cout << "Tax On Salary :" << tax << endl;
// 		cout << "Your Total Salary :"<< total << endl<< endl;
		
// 	}
// 	else if(sal>10000 && sal<=20000){
// 		int medical, hRent, tax, total;
// 		medical = sal*10/100;
// 		hRent = sal*15/100;
// 		tax = sal*8/100;
// 		total = sal+medical+hRent-tax;
		
// 		cout << "Medical Allowance :" << medical << endl;
// 		cout << "House Rent Allowance :" << hRent << endl;
// 		cout << "Tax On Salary :" << tax << endl;
// 		cout << "Your Total Salary :"<< total << endl<< endl;
// 	}
// 	else if(sal==0){
// 		exit(0);
// 	}
// 	else {
// 		int medical, hRent, tax, total;
// 		medical = sal*15/100;
// 		hRent = sal*20/100;
// 		tax = sal*12/100;
// 		total = sal+medical+hRent-tax;
		
// 		cout << "Medical Allowance :" << medical << endl;
// 		cout << "House Rent Allowance :" << hRent << endl;
// 		cout << "Tax On Salary :" << tax << endl;
// 		cout << "Your Total Salary :"<< total << endl<< endl;
// 	}
// }//while
// }



int main() {
  calculator();
//   dataTypes();
//   logInForm();
// ATM();
// payRoll();
  return 0;
}
