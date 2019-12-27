#include<iostream>
#include<cstdlib>
#include<time.h>
#include<conio.h>
#include<cstring>
#include<string>
#include<cmath>
#include<fstream>
#include<cstdio>
#include<stdio.h>
using namespace std;

/* Composition Relation Between Client & Other Bank Facilities Classes */

char Welcome(){
char ch;
cout<<"Press ESC To Exit..";
cout<<"\n\n\n\n\n\n______________________________________________________________________________________";
cout<<"\n\n\t\tWelcome To Hongkong & Shanghai Banking Corporation <HSBC> ";
cout<<"\n\t\t       Are You New To HSBC [OR] Our Old Client?\n\t\t\tChoose Any Option From The Following\n1. New\n2. Old\n";
cout<<"______________________________________________________________________________________\n"
<<"\n\n\n\t\t\t       Enter Your Choice :";
ch=getch();
if(ch==27){
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t   Thank You :)";
cout<<"\n\t\t\t\t Come Again Soon";
cout<<"\n\n\n\n\n\n\n\n\n";
exit(1);
}
else if(ch==49){ //when new user
return '1';
}
else if(ch==50){ // when old user
return '2';
}
else{   // when wrong option is chosen
return '0';
}

}











class HSBC{                                //HSBC

protected:
static int Totalclients;
static unsigned long int TotalEmployees;
static unsigned long int BankBal;
static unsigned long int LoansGiven;
protected:
static void HSBCBankData(){
system("cls");
cout<<"\n\n\n\n\n__________________________________________________________________________________\n\n";
cout<<"                                  HSBC Bank Data\n";
cout<<"__________________________________________________________________________________";
cout<<"\n\nTotal Clients :"<<Totalclients<<"\n";
cout<<"Total Employees :"<<TotalEmployees<<"\n";
cout<<"Total Bank Balance :"<<BankBal<<"\n";
cout<<"Total Loans Given By HSBC :"<<LoansGiven;
cout<<"\n__________________________________________________________________________________\n";
cout<<"\n\t\t\t   Press Any Key To Continue...";
getch();
}
static void BW(unsigned long int x){
BankBal=BankBal+x;
}
static void BWD(unsigned long int x){
BankBal=BankBal-x;
}
static void LG(unsigned long int x){
LoansGiven=LoansGiven+x;
}

HSBC(){
Totalclients++;
}

};
int HSBC :: Totalclients=0;
unsigned long int HSBC :: TotalEmployees=7548593;
unsigned long int HSBC :: BankBal=0;
unsigned long int HSBC :: LoansGiven=0; 
//Static Variables Initialization








class Clients : protected HSBC{                           //Clients Class


private:
class ATM;//
class SavingAccounts;//
class IRAccounts;
class BasicCheckingAccounts;
class InterestBearingCheckingAccounts;
class ATMCard;
class PersonalInformation;
class Accounts;
class SavingAccounts;
class IRAccounts;
class CheckingAccounts;
class BasicCheckingAccounts;
class InterestBearingCheckingAccounts;
class Loans;
class Cards;
class OnlineTransfers;
class Shares;
class ManualTransfers;
class DebitCard;
class TitaniumCreditCard;
class PlatinumCreditCard;
class BusinessLoans;
class PersonalLoans;
class LetterOfCredit;
class PayOrders;


char x;
static unsigned int ClientId;
ATM *PATM; //pointer to ATM object
SavingAccounts *PSA; // pointer to Saving Account
IRAccounts *PIRA; // ''
BasicCheckingAccounts *PBCA;
InterestBearingCheckingAccounts *PIBCA;
ATMCard *PATMC;
BusinessLoans *PBL;
PersonalLoans *PPL;
OnlineTransfers *POT;
Shares *PS;
LetterOfCredit *LOC;
PayOrders *PO;
DebitCard *PDC;
TitaniumCreditCard *PTCC;
PlatinumCreditCard *PPCC;

int cSA; //counter for saving accounts
int cIRA; // counter for individual retirement accounts
int cBCA; // counter for basic checking accounts
int cIBCA; // counter for interest bearing checking accounts 
int cDC; //counter for debit card
int cTCC; //counter for titanium crideit card
int cPCC; // counter for platinum credit card
int cBL; // counter to business loan
int cPL; // counter to personal loan
int cS; // counter to shares
int old;


class PersonalInformation{

public:

static string Name,FatherName,Address,DOB,Nationality,City,Profession;
static string PhoneNumber;
static char Gender;
static int age;
static unsigned int AccountsCount; // for input PI call only once
protected:
virtual void abstract()=0;

virtual void InputPI(){
system("cls");
cout<<"\n\n\t\t\tClient Personal Information\n\n";
cout<<"Set Your Client Id :";
cin>>ClientId;
cin.sync();
cin.clear();
cout<<"Enter Your Name :";
while(1){
try
{
	getline(cin,Name);
	if(Name==""){
    throw -1;
    }
    else{
    break;
	}
}
catch(int x)
{
	if(x==-1)
	{
	cout<<"Invalid Name\nPlease Enter Name Again :";
    continue;
	}
}

}
cout<<"Enter Father Name :";
while(1){
try
{
	getline(cin,FatherName);
	if(FatherName==""){
    throw -1;
    }
    else{
    break;
	}
}
catch(int x)
{
	if(x==-1)
	{
	cout<<"Invalid Father Name\nPlease Enter Father Name Again :";
    continue;
	}
}

}
cout<<"Enter Your Age :";
cin>>age;
cin.sync();
while (!cin) { 
cout << "Invalid Age\nPlease Enter Your Age Again :";
cin.clear();
cin.ignore(100,'\n');
cin>>age;
}
cin.clear();
cin.sync();
cout<<"Enter Your Profession :";
while(1){
try
{
	getline(cin,Profession);
	if(Profession==""){
    throw -1;
    }
    else{
    break;
	}
}
catch(int x)
{
	if(x==-1)
	{
	cout<<"Invalid Profession\nPlease Enter Profession Again :";
    continue;
	}
}

}
cout<<"Enter Address :";
getline(cin,Address);
while(1){
if(Address==""){
cout<<"Invalid Address \nPlease Enter Again :";
getline(cin,Address);
}
else{
break;
}
}
cout<<"Enter Date Of Birth :";
while(1){
try
{
	getline(cin,DOB);
	if(DOB==""){
    throw -1;
    }
    else{
    break;
	}
}
catch(int x)
{
	if(x==-1)
	{
	cout<<"Invalid DOB\nPlease Enter DOB Again :";
    continue;
	}
}

}
cout<<"Enter Nationality :";
getline(cin,Nationality);
while(1){
if(Nationality==""){
cout<<"Invalid Nationality \nPlease Enter Again :";
getline(cin,Nationality);
}
else{
break;
}
}
cout<<"Enter City :";
getline(cin,City);
while(1){
if(City==""){
cout<<"Invalid City \nPlease Enter Again :";
getline(cin,City);
}
else{
break;
}
}
cout<<"Enter Gender (M/F/O) :";
Gender=getch();
while(1){
try
{
if(Gender=='M' || Gender=='m' || Gender=='F' || Gender=='f' || Gender=='O' || Gender=='o'){
cout<<Gender<<"\n";
break;
}

else{
throw -1;
}

}
catch (int x)
{
	if(x==-1){
	cout<<Gender<<"\n";
	cout<<"\nError : Invalid Gender";
    cout<<"\nPlease Enter Gender Again (M/F/O) :";
    Gender=getch();
    continue;
	}
}
}
cout<<"Enter Phone Number :";
cin>>PhoneNumber;





}//End Of InputPI Function

};




class ATM{
public:
unsigned int pin; 
public:
ATM(){
pin=0;	
}

void setpin(unsigned int &x){
pin=x;
}
template < class Accountx >void withdraw(Accountx &);






}; // End of ATM class



class Accounts : public PersonalInformation{
public:
string AccountName,AccountType;
unsigned long int AccountNumber;
static unsigned long int TotalAccountsBalance;  // Definition Is Outside Client Class
unsigned long int Balance;
virtual void AccountData()=0;

inline unsigned long int Random(){
srand(time(NULL));
return rand()%84626873+72463467;
}
inline unsigned int Random(int x){
srand(time(NULL));
return rand()%10+1;
}

void abstract(){

}


};




class SavingAccounts:public Accounts{ // ATM Charges + Money Of Saving Acc Does Not Allow To Take Loans

protected:
void abstract(){
}
public :
unsigned long int AmountWithInterestRate;
SavingAccounts(){
Balance=0;
AmountWithInterestRate=0;
AccountType="Saving Account";
AccountData();
}
SavingAccounts(int x){
	
}
void AccountData(){
string x;
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\tYou Have To Enter Some Details To Open A Saving Account";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t Press Any Key To Continue...";
getch();
system("cls");
if(AccountsCount==0){
InputPI();
AccountsCount++;	
}
cout<<"Enter Your Saving Account Name :";
cin.sync();
getline(cin,AccountName);
cin.sync();
cout<<"Do You Want To Deposit Any Amount Initially ? (Yes/No) : ";
getline(cin,x);
while(1){
if(x=="YES" || x=="yes" || x=="Yes"){
unsigned long int amount;
cout<<"Enter Amount To Be Deposited Initially :";
cin>>amount;
Deposit(amount);
break;
}
else if(x=="No" || x=="no" || x=="NO"){
break;
}
else{
	cout<<"Invalid Option\nPlease Let Us Know If You Want To Deposit Amount Initially (Yes / No ) :";
	getline(cin,x);
	continue;
}
}
AccountNumber=Random();
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t   Congratulations ! Your Saving Account Has Been Opened\n";
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t Press Any Key To Continue...";
getch();
}
void Deposit(unsigned long int x){
Balance=Balance+x+(x*0.05);
AmountWithInterestRate=AmountWithInterestRate+(x*0.05);
TotalAccountsBalance=TotalAccountsBalance+x+(x*0.05);
BW(x);
}
void Display(){
system("cls");
cout<<"\n\n____________________________________________________________________________________";
cout<<"\n\n\t\t      Current Status Of Your Saving Account \n";
cout<<"____________________________________________________________________________________\n";
cout<<"\nAccount Name :"<<AccountName;
cout<<"\nAccount Number :"<<AccountNumber;
cout<<"\nAccount Type :"<<AccountType;
cout<<"\nTotal Saving Account Balance :"<<Balance;
cout<<"\nAmount With Interest :"<<AmountWithInterestRate;
cout<<"\nTotal Accounts Balance :"<<TotalAccountsBalance;
cout<<"\n____________________________________________________________________________________\n";
cout<<"\n\n\nPress Any Key To Continue..";
getch();
}


};


class IRAccounts:public Accounts{ // IRAccount = Individual Retirement Accounts
public :
unsigned long int InterestProfits;
double InvestorsProfit;

void Deposit(unsigned long int x){ 
InvestorsProfit=Random(0);
InvestorsProfit/=100;
InterestProfits=InterestProfits+(x*InvestorsProfit);
TotalAccountsBalance=TotalAccountsBalance+x+(x*InvestorsProfit);
Balance=Balance+x+(x*InvestorsProfit);
BW(x);
}

void AccountData(){
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\tYou Have To Enter Some Details To Open A Individual Retirement Account";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t Press Any Key To Continue...";
getch();
system("cls");
if(AccountsCount==0){
InputPI();
AccountsCount++;
}
cout<<"Enter Your IR Account Name :";
cin.sync();
getline(cin,AccountName);
cin.sync();
cout<<"Enter Amount To Be Deposited Initially:";
unsigned long int amount;
cin>>amount;
Deposit(amount);
AccountNumber=Random();
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t   Congratulations ! Your IR Account Has Been Opened\n";
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t Press Any Key To Continue...";
getch();
}

public:
IRAccounts(){
AccountType="Individual Retirement Account";
InterestProfits=0;
InvestorsProfit=0;
Balance=0;
AccountData();
}
IRAccounts(int x){
	
}

void Display(){
system("cls");
cout<<"\n\n____________________________________________________________________________________";
cout<<"\n\n\t\t\tCurrent Status Of Your IR Account\n";
cout<<"____________________________________________________________________________________\n";
cout<<"\nAccount Name :"<<AccountName;
cout<<"\nAccount Number :"<<AccountNumber;
cout<<"\nAccount Type :"<<AccountType;
cout<<"\nTotal IR Account Balance :"<<Balance;
cout<<"\nInterest Profits From Investors :"<<InterestProfits<<" Rs";
cout<<"\nTotal Accounts Balance :"<<TotalAccountsBalance;
cout<<"\n____________________________________________________________________________________\n";
cout<<"\n\n\nPress Any Key To Continue..";
getch();

}





};


class CheckingAccounts:public Accounts{ 
//No Interest Gain + If Profession = Business Only + No ATM Charges
//Money Of Checking Acc Allows To Take Loan
public:
static unsigned long int TotalCheckingAccountsBalance;
unsigned long int InterestPaid;
virtual void Deposit(unsigned long int x)=0;
virtual void AccountData()=0;
virtual void Display()=0;
void abstract(){
}		
};


class BasicCheckingAccounts : public CheckingAccounts{
// No Interest To Be Paid

public:

void Deposit(unsigned long int x){ //No Interest Bearing
TotalCheckingAccountsBalance=TotalCheckingAccountsBalance+x;
TotalAccountsBalance=TotalAccountsBalance+x;
Balance=Balance+x;
BW(x);
}


void AccountData(){
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\t      You Have To Enter Some Details To Open A Basic Checking Account";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t Press Any Key To Continue...";
getch();
system("cls");
if(AccountsCount==0){
InputPI();
AccountsCount++;	
}
cout<<"Enter Your Basic Checking Account Name :";
cin.sync();
getline(cin,AccountName);
cin.sync();
cout<<"Note :'You Have To Deposit At Least 100,000 To Open A Basic Checking Account'";
cout<<"\nEnter Amount To Be Deposited Initially:";
unsigned long int amount;
cin>>amount;
while(1){
if(amount<100000){
cout<<"Starting Depositing Amount Should Be Greater Or Equal To 100,000 At Least";
cout<<"\nEnter Amount Again:";
cin>>amount;
continue;
}
else{
break;
}
}



Deposit(amount);
AccountNumber=Random();
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\tCongratulations! Your Basic Checking Account Has Been Opened\n";
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t Press Any Key To Continue...";
getch();
}
public:



BasicCheckingAccounts(){
Balance=0;
AccountType="Basic Checking Account";
InterestPaid=0;
AccountData();
}
BasicCheckingAccounts(int x){
}
void Display(){
system("cls");
cout<<"\n\n____________________________________________________________________________________";
cout<<"\n\n\t\t   Current Status Of Your Basic Checking Account\n";
cout<<"____________________________________________________________________________________\n";
cout<<"\nAccount Name :"<<AccountName;
cout<<"\nAccount Number :"<<AccountNumber;
cout<<"\nAccount Type :"<<AccountType;
cout<<"\nTotal Basic Checking Account Balance :"<<Balance;
cout<<"\nInterest Paid :0";
cout<<"\nTotal Accounts Balance :"<<TotalAccountsBalance;
cout<<"\n____________________________________________________________________________________\n";
cout<<"\n\n\nPress Any Key To Continue..";
getch();

}


};

class InterestBearingCheckingAccounts : public CheckingAccounts{

public:

void Deposit(unsigned long int x){ //8% Interest For Every Deposit
InterestPaid=InterestPaid+(x*0.08);
TotalCheckingAccountsBalance=TotalCheckingAccountsBalance+x-(x*0.08);
TotalAccountsBalance=TotalAccountsBalance+x-(x*0.08);
Balance=Balance+x-(x*0.08);
BW(x);
}


void AccountData(){
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n      You Have To Enter Some Details To Open A Interest Bearing Checking Account";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t Press Any Key To Continue...";
getch();
system("cls");
if(AccountsCount==0){
InputPI();
AccountsCount++;
}
cout<<"Enter Your Interest Bearing Checking Account Name :";
cin.sync();
getline(cin,AccountName);
cin.sync();
cout<<"Note :'You Have To Deposit At Least 100,000 To Open A IB Checking Account'";
cout<<"\nEnter Amount To Be Deposited Initially:";
unsigned long int amount;
cin>>amount;
while(1){
if(amount<100000){
cout<<"Starting Depositing Amount Should Be Greater Or Equal To 100,000 At Least";
cout<<"\nEnter Amount Again:";
cin>>amount;
continue;
}
else{
break;
}
}
Deposit(amount);
AccountNumber=Random();
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n      Congratulations ! Your Interest Bearing Checking Account Has Been Opened\n";
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t Press Any Key To Continue...";
getch();
}
public:
InterestBearingCheckingAccounts(){
Balance=0;
AccountType="Interest Bearing Checking Account";
InterestPaid=0;
AccountData();
}
InterestBearingCheckingAccounts(int x){
	
}

void Display(){
system("cls");
cout<<"\n\n____________________________________________________________________________________";
cout<<"\n\n\t       Current Status Of Your Interest Bearing Checking Account\n";
cout<<"____________________________________________________________________________________\n";
cout<<"\nAccount Name :"<<AccountName;
cout<<"\nAccount Number :"<<AccountNumber;
cout<<"\nAccount Type :"<<AccountType;
cout<<"\nTotal Interest Bearing Checking Account Balance :"<<Balance;
cout<<"\nInterest Paid :"<<InterestPaid;
cout<<"\nTotal Accounts Balance :"<<TotalAccountsBalance;
cout<<"\n____________________________________________________________________________________\n";
cout<<"\n\n\nPress Any Key To Continue..";
getch();

}


};





class Loans{
public:
	unsigned long long int LoanRequestAmount;
	static unsigned long long int TotalLoansDue; 
	unsigned long int TotalIncome;
	virtual void abstract()=0;
	string Purpose;
	inline int Check(){
        srand(time(NULL));
        return rand()%3;
}
unsigned long int ApplyForLoan(){
    		    system("cls");
    		    cout<<"Why You Want A Loan :";
    		    cin.sync();
    		    getline(cin,Purpose);
    		    cin.sync();
    		    cout<<"What Is Your Total Monthly Income :";
    		    cin>>TotalIncome;
    		    cout<<"How Much Loan You Want :";
    		    cin>>LoanRequestAmount;
    		    int chance;
    		    chance=Check();
    		    if(chance==0){
    		    	system("cls");
    		    	cout<<"\n\n\n\n\n\n\n\n\n\n      Sorry ! We Can't Give You A Loan Right Now Please Try Again Later.\n"
    		        <<"\t\t\t   Press Any Key To Continue...";
    		        getch();
    		        return 0;
				}
				else{
					system("cls");
    		    	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t    Congratulations ! You Have Got Your Loan Successfully.    \n"
    		        <<"\t\t\t   Press Any Key To Continue...";
    		        TotalLoansDue=TotalLoansDue+LoanRequestAmount;
    		        HSBC::LG(LoanRequestAmount);
    		        getch();
    		        return LoanRequestAmount;
				}
    		    
		}

		
};


class BusinessLoans:public Loans{
   public:
   	void abstract(){   //so that objects can only be created of business loans and personal loans
	   }
};

class PersonalLoans:public Loans{
public:
   	void abstract(){
	   }
};




class XCards{
public :
unsigned long int CardNo;
unsigned long int limit;
string CardType;
virtual void abstract()=0;
unsigned long int random(){
	srand(time(NULL));
	return rand()%798675+783214;
}
};


class ATMCard{
public:
static unsigned int pin;

ATMCard(){
	pin=0;
}
//no limit
};


class DebitCard :public XCards{

public:
unsigned int pin;
DebitCard(){
pin=ATMCard::pin;
limit=0; //limit will increase on every shopping and withdraw max limit will be 150,000
CardType="DebitCard";
CardNo=random();
}
void abstract(){
	
}

template <class Accountx> friend void Clients::ATM::withdraw(Accountx &);
template <class Accountx , class Card> void shop(Accountx &, Card &);

};


class CreditCard:public XCards{
public:
template <class Accountx , class Card> friend void Clients::DebitCard::shop(Accountx &, Card &);
//abstracted as pure virtual is inherited already
};

class TitaniumCreditCard  : public CreditCard{
public:
void abstract(){
}
TitaniumCreditCard(){
limit=0;   //limit=upto 400K
CardType="TitaniumCard";
CardNo=random();
}

};

class PlatinumCreditCard : public CreditCard{
public:
void abstract(){
}
PlatinumCreditCard(){
limit=0; // limit is from 400K to 700K
CardType="PlatinumCard";
CardNo=random();
}
};


class Transfers 
{
	public:
		template <class Accountx> static int Subt(Accountx & , unsigned long int &);
};


class OnlineTransfers{
public:
unsigned long int ReceiverAccNo;
unsigned long int Amount;
string ReceiverAddress;



void GetInfo(){
system("cls");
cout<<"Enter Amount To Be Transfered :";
cin>>Amount;
cout<<"Enter Receiver's Address :";
cin>>ReceiverAddress;
cout<<"Enter Receiver's Account No :";
cin>>ReceiverAccNo;
}
};




class Shares{
public:
unsigned long int amazon;
unsigned long int facebook;
unsigned long int google;
unsigned int camz,cfb,cgo; // shares counters
Shares(){
amazon=200000;
facebook=300000;
google=500000;
camz=0;
cfb=0;
cgo=0;
}


message(char x){
system("cls");
if(x=='1')
{
camz++;
cout<<"\n\n\n\n\n\n\n\n\n   Congratulations ! You Have Successfully Bought Amazon's Share For Rs. 200000\n";
}
else if(x=='2'){
cfb++;
cout<<"\n\n\n\n\n\n\n\n\n   Congratulations ! You Have Successfully Bought Facebook's Share For Rs. 300000 \n";
}
else if(x=='3'){
cgo++;
cout<<"\n\n\n\n\n\n\n\n\n   Congratulations ! You Have Successfully Bought Google's Share For Rs. 500000 \n";
}
cout<<"\t\t\tPress Any Key To Continue...";
getch();
}

void ViewShares()
{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\t\t\tYour Shares Details In <HSBC> \n"
	    <<"\t\t\t    Facebook Shares : "<<cfb
	    <<"\n\t\t\t    Google Shares : "<<cgo
	    <<"\n\t\t\t    Amazon Shares : "<<camz;
	    
	getch();
}


template <class Accountx> unsigned long int SharesMenu(Accountx A)
{
unsigned long int amm=0;
while(1){
char x;
system("cls");
cout<<"<HSBC> Provide Following Company's Shares.\n"
<<"To Get Any Of These Shares You Have To Select From The Choice Given Below.\n\n"
<<"Company Name \tCost/Share\n"
<<"1. Amazon \t200000\n"
<<"2. Facebook \t300000\n"
<<"3. Google  \t500000\n\n\n";
x=getch();
if(x=='1' || x=='2' || x=='3')
{
if(x=='1' && A.Balance>=200000)
{
amm=200000;
}
else if(x=='2' && A.Balance>=300000)
{
amm=300000;
}
else if(x=='3' && A.Balance>=500000)
{
amm=500000;
}
else{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\tSorry ! You Do Not Have Enough Balance To Buy Shares\n"
	    <<"\t\t\tPress Any Key To Continue....";
	    getch();
	    return amm;
}
message(x);
return amm;
}
else
{
continue;
}

}
} // end of share menu function


};


class ManualTransfers{
public:
string Address,Country;
unsigned long int Amount;
string TransferAccountAddress;
virtual void Generate()=0;
};


class PayOrders : public ManualTransfers{ 

public:
PayOrders(){
Country="Pakistan";
}


void Generate(){
system("cls");
cout<<"\n\n\n\n\n\n\n\t\t\tYour Pay Order Details\n\n"
    <<"\t\t  Hongkong Shingai Banking Corporation < HSBC >\n"
    <<"\t\t     Total Amount To Be Transfered :"<<Amount
    <<"\n\t\t     Country : Pakistan"
    <<"\n\t\t     Address :"<<TransferAccountAddress
    <<"\n\n\t\t\t  Press Any Key To Continue...";
    getch();
}

};


class LetterOfCredit : public ManualTransfers{
public:
LetterOfCredit(){

}
void Generate(){
system("cls");
cout<<"\n\n\n\n\n\n\n\t\t\tYour Letter Of Credit Details\n\n"
    <<"\t\t  Hongkong Shingai Banking Corporation < HSBC >\n"
    <<"\t\t     Total Amount To Be Transfered :"<<Amount
    <<"\n\t\t     Country :"<<Country
    <<"\n\t\t     Address :"<<TransferAccountAddress
    <<"\n\n\t\t\t  Press Any Key To Continue...";
    getch();
}
};















public:  // public of client class


Clients(){ 

string s;
cSA=0;
cIRA=0;
cBCA=0;
cIBCA=0;
cDC=0; 
cTCC=0; 
cPCC=0;
cBL=0;
cPL=0;
cS=0;
old=0;
fstream reader;
reader.open("HSBC.txt",ios::in);
getline(reader,s);
HSBC::Totalclients=atoi( s.c_str() );
getline(reader,s);
HSBC::TotalEmployees=atoi( s.c_str() );
getline(reader,s);
HSBC::BankBal=atoi( s.c_str() );
getline(reader,s);
HSBC::LoansGiven=atoi( s.c_str() );
reader.close();
    
}

~Clients()

{
	int id;
	unsigned long int i,j,k;
	id=ClientId;
	string s;
	
	
	if(cSA==1 || cIRA==1 || cBCA==1 || cIBCA==1){ 
		
	ofstream writer;
	ifstream reader;
    if(old!=1)
    {
    reader.open("HSBC.txt",ios::in);
	writer.open("Temp.txt",ios::out);
	getline(reader,s);
	i=atoi( s.c_str() );
	getline(reader,s);
	TotalEmployees=atoi( s.c_str() );
	getline(reader,s);
	j==atoi( s.c_str() );
	getline(reader,s);
	k=atoi( s.c_str() );
	HSBC::Totalclients=HSBC::Totalclients+i;
	HSBC::BankBal=HSBC::BankBal+j;
	HSBC::LoansGiven=HSBC::LoansGiven+k;
	writer<<HSBC::Totalclients<<endl;
	writer<<HSBC::TotalEmployees<<endl;
	writer<<HSBC::BankBal<<endl;
	writer<<HSBC::LoansGiven<<endl;
	writer.close();
	reader.close();
	remove("HSBC.txt");
    rename("Temp.txt","HSBC.txt");
    }
    else
    {
    writer.open("HSBC.txt",ios::out);
    writer<<HSBC::Totalclients<<endl;
	writer<<HSBC::TotalEmployees<<endl;
	writer<<HSBC::BankBal<<endl;
	writer<<HSBC::LoansGiven<<endl;
	writer.close();
	}
	
	
	writer.open("Temp.txt",ios::out);
	reader.open("ATM.txt",ios::in);
	writer<<id<<endl;
	writer<<PATM->pin<<endl;
	while(!reader.eof())
	{
		getline(reader,s);
		ClientId=atoi( s.c_str() );
		getline(reader,s);
		PATM->pin=atoi( s.c_str() );
		if(ClientId!=id){
	    writer<<ClientId<<endl;
	    writer<<PATM->pin<<endl;
	    }
	    else{
	    continue;
	    }
	}
	reader.close();
	writer.close();
    remove("ATM.txt");
    rename("Temp.txt","ATM.txt");
	
	
	
	reader.open("ATMCard.txt",ios::in);
	writer.open("Temp.txt",ios::out);
	writer<<id<<endl;
	writer<<PATMC->pin<<endl;
	while(!reader.eof())
	{
		getline(reader,s);
		ClientId=atoi( s.c_str() );
		getline(reader,s);
		PATMC->pin=atoi( s.c_str() );
		if(ClientId!=id){
	    writer<<ClientId<<endl;
	    writer<<PATMC->pin<<endl;
	    }
	    else{
	    continue;
	    }
	}
	reader.close();
	writer.close();
    remove("ATMCard.txt");
    rename("Temp.txt","ATMCard.txt");
    
    
    
	
	
	
	writer.open("Temp.txt",ios::out);
	reader.open("PersonalInformation.txt",ios::in);
	writer<<id<<endl;
	writer<<PersonalInformation::Name<<endl;
	writer<<PersonalInformation::FatherName<<endl;
	writer<<PersonalInformation::Address<<endl;
	writer<<PersonalInformation::DOB<<endl;
	writer<<PersonalInformation::Nationality<<endl;
	writer<<PersonalInformation::City<<endl;
	writer<<PersonalInformation::Profession<<endl;
	writer<<PersonalInformation::PhoneNumber<<endl;
	writer<<PersonalInformation::Gender<<endl;
	writer<<PersonalInformation::age<<endl;
	writer<<PersonalInformation::AccountsCount<<endl;
	writer<<Accounts::TotalAccountsBalance<<endl;
	writer<<Loans::TotalLoansDue<<endl;
    while(!reader.eof())
	{
	getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PersonalInformation::Name=s;
	getline(reader,s);
	PersonalInformation::FatherName=s;
	getline(reader,s);
	PersonalInformation::Address=s;
	getline(reader,s);
	PersonalInformation::DOB=s;
	getline(reader,s);
	PersonalInformation::Nationality=s;
	getline(reader,s);
	PersonalInformation::City=s;
	getline(reader,s);
	PersonalInformation::Profession=s;
	getline(reader,s);
	PersonalInformation::PhoneNumber=s;
	getline(reader,s);
	PersonalInformation::Gender=s[0];
	getline(reader,s);
	PersonalInformation::age=atoi( s.c_str() );
	getline(reader,s);
	PersonalInformation::AccountsCount=atoi( s.c_str() );
	getline(reader,s);
	Accounts::TotalAccountsBalance=atoi( s.c_str() ); 
	getline(reader,s);
	Loans::TotalLoansDue=atoi( s.c_str() );
	if(ClientId!=id){
	writer<<ClientId<<endl;
	writer<<PersonalInformation::Name<<endl;
	writer<<PersonalInformation::FatherName<<endl;
	writer<<PersonalInformation::Address<<endl;
	writer<<PersonalInformation::DOB<<endl;
	writer<<PersonalInformation::Nationality<<endl;
	writer<<PersonalInformation::City<<endl;
	writer<<PersonalInformation::Profession<<endl;
	writer<<PersonalInformation::PhoneNumber<<endl;
	writer<<PersonalInformation::Gender<<endl;
	writer<<PersonalInformation::age<<endl;
	writer<<PersonalInformation::AccountsCount<<endl;
	writer<<Accounts::TotalAccountsBalance<<endl;
	writer<<Loans::TotalLoansDue<<endl;
	}
	else{
	continue;
	}
    }
    reader.close();
	writer.close();
    remove("PersonalInformation.txt");
    rename("Temp.txt","PersonalInformation.txt");
	
    
    
	if(cSA==1)
	{
	writer.open("Temp.txt",ios::out);
	reader.open("SavingAccount.txt",ios::in);
	writer<<id<<endl;
	writer<<PSA->AccountName<<endl;
	writer<<PSA->AccountType<<endl;
	writer<<PSA->AccountNumber<<endl;
	writer<<PSA->Balance<<endl;
	writer<<PSA->AmountWithInterestRate<<endl;
	while(!reader.eof()){
    getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PSA->AccountName=s;
	getline(reader,s);
	PSA->AccountType=s;
	getline(reader,s);
	PSA->AccountNumber=atoi( s.c_str() );
	getline(reader,s);
	PSA->Balance=atoi( s.c_str() );
	getline(reader,s);
	PSA->AmountWithInterestRate=atoi( s.c_str() );
	if(ClientId!=id){
	writer<<ClientId<<endl;
	writer<<PSA->AccountName<<endl;
	writer<<PSA->AccountType<<endl;
	writer<<PSA->AccountNumber<<endl;
	writer<<PSA->Balance<<endl;
	writer<<PSA->AmountWithInterestRate<<endl;
	}
	else{
	continue;
	}
    }
    reader.close();
	writer.close();
    remove("SavingAccount.txt");
    rename("Temp.txt","SavingAccount.txt");
    }
    
    
    
    if(cIRA==1)
	{
	writer.open("Temp.txt",ios::out);
    reader.open("IndividualRetirementAccount.txt",ios::in);
    writer<<id<<endl;
	writer<<PIRA->AccountName<<endl;
	writer<<PIRA->AccountType<<endl;
	writer<<PIRA->AccountNumber<<endl;
	writer<<PIRA->Balance<<endl;
	writer<<PIRA->InterestProfits<<endl;
	writer<<PIRA->InvestorsProfit<<endl;
	while(!reader.eof()){
    getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PIRA->AccountName=s;
	getline(reader,s);
	PIRA->AccountType=s;
	getline(reader,s);
	PIRA->AccountNumber=atoi( s.c_str() );
	getline(reader,s);
	PIRA->Balance=atoi( s.c_str() );
	getline(reader,s);
	PIRA->InterestProfits=atoi( s.c_str() );
	getline(reader,s);
	PIRA->InvestorsProfit=atoi( s.c_str() );
	if(ClientId!=id)
	{
	writer<<ClientId<<endl;
	writer<<PIRA->AccountName<<endl;
	writer<<PIRA->AccountType<<endl;
	writer<<PIRA->AccountNumber<<endl;
	writer<<PIRA->Balance<<endl;
	writer<<PIRA->InterestProfits<<endl;
	writer<<PIRA->InvestorsProfit<<endl;
	}
	else
	{
	continue;
	}
    }
    reader.close();
	writer.close();
    remove("IndividualRetirementAccount.txt");
    rename("Temp.txt","IndividualRetirementAccount.txt");
	}
	
	
	
	
	
	if(cBCA==1)
	{
	writer.open("Temp.txt",ios::out);
    reader.open("BasicCheckingAccount.txt",ios::in);
    writer<<id<<endl;
	writer<<PBCA->AccountName<<endl;
	writer<<PBCA->AccountType<<endl;
	writer<<PBCA->AccountNumber<<endl;
	writer<<PBCA->Balance<<endl;
	writer<<CheckingAccounts::TotalCheckingAccountsBalance<<endl;
	writer<<PBCA->InterestPaid<<endl;
	while(!reader.eof()){
	getline(reader,s);
    ClientId=atoi( s.c_str() );
    getline(reader,s);
	PBCA->AccountName=s;
	getline(reader,s);
	PBCA->AccountType=s;
	getline(reader,s);
	PBCA->AccountNumber=atoi( s.c_str() );
	getline(reader,s);
	PBCA->Balance=atoi( s.c_str() );
	getline(reader,s);
	CheckingAccounts::TotalCheckingAccountsBalance=atoi( s.c_str() );
	getline(reader,s);
	PBCA->InterestPaid=atoi( s.c_str() );
	if(ClientId!=id){
	writer<<ClientId<<endl;
	writer<<PBCA->AccountName<<endl;
	writer<<PBCA->AccountType<<endl;
	writer<<PBCA->AccountNumber<<endl;
	writer<<PBCA->Balance<<endl;
	writer<<CheckingAccounts::TotalCheckingAccountsBalance<<endl;
	writer<<PBCA->InterestPaid<<endl;
	}
	else{
	continue;
	}
    }
    reader.close();
	writer.close();
    remove("BasicCheckingAccount.txt");
    rename("Temp.txt","BasicCheckingAccount.txt");
	}
	
	
	
	
	
	if(cIBCA==1)
	{
	writer.open("Temp.txt",ios::out);
    reader.open("InterestBearingCheckingAccount.txt",ios::in);
    writer<<id<<endl;
	writer<<PIBCA->AccountName<<endl;
	writer<<PIBCA->AccountType<<endl;
	writer<<PIBCA->AccountNumber<<endl;
	writer<<PIBCA->Balance<<endl;
	writer<<CheckingAccounts::TotalCheckingAccountsBalance<<endl;
	writer<<PIBCA->InterestPaid<<endl;
	while(!reader.eof()){
	getline(reader,s);
    ClientId=atoi( s.c_str() );
    getline(reader,s);
	PIBCA->AccountName=s;
	getline(reader,s);
	PIBCA->AccountType=s;
	getline(reader,s);
	PIBCA->AccountNumber=atoi( s.c_str() );
	getline(reader,s);
	PIBCA->Balance=atoi( s.c_str() );
	getline(reader,s);
	CheckingAccounts::TotalCheckingAccountsBalance=atoi( s.c_str() );
	getline(reader,s);
	PIBCA->InterestPaid=atoi( s.c_str() );
	if(ClientId!=id){
	writer<<ClientId<<endl;
	writer<<PIBCA->AccountName<<endl;
	writer<<PIBCA->AccountType<<endl;
	writer<<PIBCA->AccountNumber<<endl;
	writer<<PIBCA->Balance<<endl;
	writer<<CheckingAccounts::TotalCheckingAccountsBalance<<endl;
	writer<<PIBCA->InterestPaid<<endl;
	}
	else{
	continue;
	}
	
    }
    reader.close();
	writer.close();
    remove("InterestBearingCheckingAccount.txt");
    rename("Temp.txt","InterestBearingCheckingAccount.txt");
	}
	
	
	

	if( cDC==1 )
	{
	writer.open("Temp.txt",ios::out);
	reader.open("DebitCard.txt",ios::in);
	writer<<id<<endl;
	writer<<PDC->CardNo<<endl;
	writer<<PDC->limit<<endl;
	writer<<PDC->CardType<<endl;
	writer<<PDC->pin<<endl;
	while(!reader.eof()){
	getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PDC->CardNo=atoi( s.c_str() );
	getline(reader,s);
	PDC->limit=atoi( s.c_str() );
	getline(reader,s);
	PDC->CardType=s;
	getline(reader,s);
	PDC->pin=atoi( s.c_str() );
	if(ClientId!=id){
	writer<<ClientId<<endl;
	writer<<PDC->CardNo<<endl;
	writer<<PDC->limit<<endl;
	writer<<PDC->CardType<<endl;
	writer<<PDC->pin<<endl;
	}
	else{
	continue;
	}
    }
    reader.close();
	writer.close();
    remove("DebitCard.txt");
    rename("Temp.txt","DebitCard.txt");
	}
	
	
	
	
	
	
	if( cPCC==1 )
	{
	writer.open("Temp.txt",ios::out);
	reader.open("PlatinumCard.txt",ios::in);
	writer<<id<<endl;
	writer<<PPCC->CardNo<<endl;
	writer<<PPCC->limit<<endl;
	writer<<PPCC->CardType<<endl;
	while(!reader.eof())
	{
	getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PPCC->CardNo=atoi( s.c_str() );
	getline(reader,s);
	PPCC->limit=atoi( s.c_str() );
	getline(reader,s);
	PPCC->CardType=s;
	if(ClientId!=id){
	writer<<ClientId<<endl;
	writer<<PPCC->CardNo<<endl;
	writer<<PPCC->limit<<endl;
	writer<<PPCC->CardType<<endl;
	}
	else{
	continue;
	}
	}
	reader.close();
	writer.close();
    remove("PlatinumCard.txt");
    rename("Temp.txt","PlatinumCard.txt");
	}
	
	
	
	if( cTCC==1 )
	{
	writer.open("Temp.txt",ios::out);
	reader.open("TitaniumCard.txt",ios::in);
	writer<<id<<endl;
	writer<<PTCC->CardNo<<endl;
	writer<<PTCC->limit<<endl;
	writer<<PTCC->CardType<<endl;
	while(!reader.eof())
	{
	getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PTCC->CardNo=atoi( s.c_str() );
	getline(reader,s);
	PTCC->limit=atoi( s.c_str() );
	getline(reader,s);
	PTCC->CardType=s;
	if(ClientId!=id){
	writer<<ClientId<<endl;
	writer<<PTCC->CardNo<<endl;
	writer<<PTCC->limit<<endl;
	writer<<PTCC->CardType<<endl;
	}
	else{
	continue;
	}
	}
	reader.close();
	writer.close();
    remove("TitaniumCard.txt");
    rename("Temp.txt","TitaniumCard.txt");
	}
	
	
	

	if(cBL==1)
	{
	writer.open("Temp.txt",ios::out);
	reader.open("BusinessLoan.txt",ios::in);
	writer<<id<<endl;
	writer<<PBL->LoanRequestAmount<<endl;
	writer<<PBL->TotalLoansDue<<endl;
	writer<<PBL->TotalIncome<<endl;
	writer<<PBL->Purpose<<endl;
	while(!reader.eof())
	{
	getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PBL->LoanRequestAmount=atoi( s.c_str() );
	getline(reader,s);
	PBL->TotalLoansDue=atoi( s.c_str() );
	getline(reader,s);
	PBL->TotalIncome=atoi( s.c_str() );
	getline(reader,s);
	PBL->Purpose=s;
	if(ClientId!=id){
	writer<<ClientId<<endl;
	writer<<PBL->LoanRequestAmount<<endl;
	writer<<PBL->TotalLoansDue<<endl;
	writer<<PBL->TotalIncome<<endl;
	writer<<PBL->Purpose<<endl;
	}
	else{
	continue;
	}
	}
	reader.close();
	writer.close();
    remove("BusinessLoan.txt");
    rename("Temp.txt","BusinessLoan.txt");
	}
	
	
	
	if(cPL==1)
	{
	writer.open("Temp.txt",ios::out);
	reader.open("PersonalLoan.txt",ios::in);
	writer<<id<<endl;
	writer<<PPL->LoanRequestAmount<<endl;
	writer<<PPL->TotalLoansDue<<endl;
	writer<<PPL->TotalIncome<<endl;
	writer<<PPL->Purpose<<endl;
	while(!reader.eof())
	{
	getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PPL->LoanRequestAmount=atoi( s.c_str() );
	getline(reader,s);
	PPL->TotalLoansDue=atoi( s.c_str() );
	getline(reader,s);
	PPL->TotalIncome=atoi( s.c_str() );
	getline(reader,s);
	PPL->Purpose=s;
	if(ClientId!=id){
	writer<<ClientId<<endl;
	writer<<PPL->LoanRequestAmount<<endl;
	writer<<PPL->TotalLoansDue<<endl;
	writer<<PPL->TotalIncome<<endl;
	writer<<PPL->Purpose<<endl;
	}
	else{
	continue;
	}
	}
	reader.close();
	writer.close();
    remove("PersonalLoan.txt");
    rename("Temp.txt","PersonalLoan.txt");
	}
	
	
	
	
	
	
	if(cS==1)
	{
	writer.open("Temp.txt",ios::out);
	reader.open("Shares.txt",ios::in);
	writer<<id<<endl;
	writer<<PS->amazon<<endl;
	writer<<PS->facebook<<endl;
	writer<<PS->google<<endl;
	writer<<PS->camz<<endl;
	writer<<PS->cfb<<endl;
	writer<<PS->cgo<<endl;
	while(!reader.eof())
	{
	getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PS->amazon=atoi( s.c_str() );
	getline(reader,s);
	PS->facebook=atoi( s.c_str() );
	getline(reader,s);
	PS->google=atoi( s.c_str() );
	getline(reader,s);
	PS->camz=atoi( s.c_str() );
	getline(reader,s);
	PS->cfb=atoi( s.c_str() );
	getline(reader,s);
	PS->cgo=atoi( s.c_str() );
	if(ClientId!=id){
	writer<<ClientId<<endl;
	writer<<PS->amazon<<endl;
	writer<<PS->facebook<<endl;
	writer<<PS->google<<endl;
	writer<<PS->camz<<endl;
	writer<<PS->cfb<<endl;
	writer<<PS->cgo<<endl;
	}
	else{
	continue;
	}
	}
	reader.close();
	writer.close();
    remove("Shares.txt");
    rename("Temp.txt","Shares.txt");
	}
	
    
    
    
    reader.open("Counters.txt",ios::in);
	writer.open("Temp.txt",ios::out);
	writer<<id<<endl;
	writer<<cSA<<endl;
    writer<<cIRA<<endl;
    writer<<cBCA<<endl;
    writer<<cIBCA<<endl;
    writer<<cDC<<endl; 
    writer<<cTCC<<endl; 
    writer<<cPCC<<endl;
    writer<<cBL<<endl;
    writer<<cPL<<endl;
    writer<<cS<<endl;
    while(!reader.eof())
{	
	getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	cSA=atoi( s.c_str() );
	getline(reader,s);
	cIRA=atoi( s.c_str() );
	getline(reader,s);
	cBCA=atoi( s.c_str() );
	getline(reader,s);
	cIBCA=atoi( s.c_str() );
	getline(reader,s);
	cDC=atoi( s.c_str() );
	getline(reader,s);
	cTCC=atoi( s.c_str() );
	getline(reader,s);
	cPCC=atoi( s.c_str() );
	getline(reader,s);
	cBL=atoi( s.c_str() );
	getline(reader,s);
	cPL=atoi( s.c_str() );
	getline(reader,s);
	cS=atoi( s.c_str() );
	if(ClientId!=id){
	writer<<ClientId<<endl;
	writer<<cSA<<endl;
    writer<<cIRA<<endl;
    writer<<cBCA<<endl;
    writer<<cIBCA<<endl;
    writer<<cDC<<endl; 
    writer<<cTCC<<endl; 
    writer<<cPCC<<endl;
    writer<<cBL<<endl;
    writer<<cPL<<endl;
    writer<<cS<<endl;
	}
	else
	{
	continue;
	}
	
    } 
    reader.close();
    writer.close();
    remove("Counters.txt");
    rename("Temp.txt","Counters.txt");

    
    
		
		
}//end of if


}



void OpenNewAccount(){
char ch;
while(1){
system("cls");
cout<<"\n\n\n\n\n\n\t\t  <HSBC> Provide Following Banking Accounts To Its Clients\n\n";
cout<<"1. Saving Accounts\n2. Individual Retirement Accounts\n3. Basic Checking Accounts\n4. Interest Bearing Checking Accounts\n";
cout<<"\n\n\nChoose Any One Options :";
cin>>ch;
if(ch==49 ){
cin.sync();
if(cSA==0){
PSA = new SavingAccounts; 
cSA++;
break;
}
else{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n"
<<"\t\t      Sorry ! You Already Have This Type Of Account\n\n"
<<"\t\t\t      Press Any Key To Go Back\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t";
getch();
system("cls");
continue;
}
}

else if(ch==50 ){

cin.sync();
if(cIRA==0){
PIRA=new IRAccounts;
cIRA++;
break;
}
else{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n"
<<"\t\t      Sorry ! You Already Have This Type Of Account\n\n"
<<"\t\t\t      Press Any Key To Go Back\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t";
getch();
system("cls");
continue;
}
}

else if(ch==51 ){
cin.sync();
if(cBCA==0){
PBCA=new BasicCheckingAccounts;
cBCA++;
break;
}
else{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n"
<<"\t\t      Sorry ! You Already Have This Type Of Account\n\n"
<<"\t\t\t      Press Any Key To Go Back\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t";
getch();
system("cls");
continue;
}

}
else if(ch==52 ){
cin.sync();
if(cIBCA==0){
PIBCA=new InterestBearingCheckingAccounts;
cIBCA++;
break;
}
else{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n"
<<"\t\t      Sorry ! You Already Have This Type Of Account\n\n"
<<"\t\t\t      Press Any Key To Go Back\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t";
getch();
system("cls");
continue;
}
}
else{
cin.sync();
continue;
}
}

} //end of OpenNewAccount Function





string FranchiseOffice(){
string x;
system("cls");
cout<<"_________________________________________________________________________________________\n\n";
cout<<"\t\t\t      <HSBC> Franchise Office\n";
cout<<"_________________________________________________________________________________________\n\n";
cout<<"1.  Open A New Account\n"
<<"2.  Buy Shares\n"
<<"3.  Get Loans\n"
<<"4.  Manual Transfers\n"
<<"5.  Get New Cards\n"
<<"6.  Withdraw From ATM\n"
<<"7.  Shop With Cards\n"
<<"8.  Online Transfers\n"
<<"9.  View Your Account Details\n"
<<"10. About HSBC\n" // display all the details of HSBC
<<"11. Deposit\n"
<<"12. Exit\n";
cout<<"\n_________________________________________________________________________________________";
cout<<"\n\t\t\t\tEnter Your Choice :";
cin>>x;
return x;


}











void Control(){

while(1)
{
x=Welcome();

if(x=='1'){
system("cls");

cout<<"\n\t\t  Hongkong & Shanghai Banking Corporation <HSBC> ";
cout<<"\n______________________________________________________________________________________\n\n\n";
cout<<"\t\t\t\t   About <HSBC>";
cout<<"\n\n\n\t\t<HSBC> Provide The Following Facilities To It's Clients ";
cout<<"\n\n1. Accounts\n2. Manual Transfers\n3. Online Transfers\n4. Loans\n5. Cards\n";
cout<<"6. Shares\n7. ATM\n8. Online Shopping\n";
cout<<"______________________________________________________________________________________\n\n";
cout<<"\t\t\t\t\t\t\tPress Any Key To Continue....";
getch();
char ch;
system("cls");
cout<<"Press ESC To Exit";
cout<<"\n\n\n\n\n\n\n\n\t\t\t\t   [ Note ] \n\tIn Order To Be Our Client You Have To Open Atleast One Account In HSBC";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tPress Any Key To Continue....";
ch=getch();
if(ch==27){
system("cls");
exit(1);
}
OpenNewAccount();
system("cls");
PATMC =new ATMCard ;
PATM = new ATM  ;
cin.sync();
cout<<"Set Your ATM PIN <Length Must Be 4>  :"; //ATM , ATM card data will be stored in file
cin>>ATMCard::pin;
cin.sync();
int x=( log10(ATMCard::pin) + 1 );
while(1){
cin.sync();
if( x!= 4 ){ // to check whether the entered pin length is equal to 4 or not.
cout<<"Note :Your Pin Length Should Be Equal To 4\nPlease Enter Pin Again :";
cin>>ATMCard::pin;
cin.sync();
x=( log10(ATMCard::pin) + 1 );
}
else{
break;
}
}
PATM->setpin(ATMCard::pin);
break;

} // end of new if new client
else if(x=='2'){
int a,count=0;
string s;
system("cls");
old=1;
cout<<"\n\n\n\n\n\n\n\n\n\t\t\tPlease Enter Your Client Id :";
cin>>a;
    fstream reader;

    
    reader.open("PersonalInformation.txt",ios::in);
    while(!reader.eof())
	{
	getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PersonalInformation::Name=s;
	getline(reader,s);
	PersonalInformation::FatherName=s;
	getline(reader,s);
	PersonalInformation::Address=s;
	getline(reader,s);
	PersonalInformation::DOB=s;
	getline(reader,s);
	PersonalInformation::Nationality=s;
	getline(reader,s);
	PersonalInformation::City=s;
	getline(reader,s);
	PersonalInformation::Profession=s;
	getline(reader,s);
	PersonalInformation::PhoneNumber=s;
	getline(reader,s);
	PersonalInformation::Gender=s[0];
	getline(reader,s);
	PersonalInformation::age=atoi( s.c_str() );
	getline(reader,s);
	PersonalInformation::AccountsCount=atoi( s.c_str() );
	getline(reader,s);
	Accounts::TotalAccountsBalance=atoi( s.c_str() ); 
	getline(reader,s);
	Loans::TotalLoansDue=atoi( s.c_str() );
	if(ClientId==a){
	break;
	}
	else{
	continue;
	}
    }
	reader.close();
	
	try
	{
		if(ClientId==0)
		{
			throw -1;
		}
	}
	catch(int x)
	{
		if(x==-1)
		{
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\tSorry ! No Such Client Id Exist In Bank Record\n\n\n\n\n\n\n";
			exit(1);
			
		}
	}
	
	reader.open("ATM.txt",ios::in);
	PATM=new ATM;
	while(!reader.eof())
	{
		getline(reader,s);
		ClientId=atoi( s.c_str() );
		getline(reader,s);
		PATM->pin=atoi( s.c_str() );
		if(ClientId==a){
	    break;
	    }
	    else{
	    continue;
	    }
	}
	reader.close();
	
	
	reader.open("ATMCard.txt",ios::in);
	PATMC=new ATMCard;
	while(!reader.eof())
	{
		getline(reader,s);
		ClientId=atoi( s.c_str() );
		getline(reader,s);
		PATMC->pin=atoi( s.c_str() );
		if(ClientId==a){
	    break;
	    }
	    else{
	    continue;
	    }
	}
	reader.close();
	
	
	
	reader.open("Counters.txt",ios::in);
	while(!reader.eof())
	
{
		
	getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	cSA=atoi( s.c_str() );
	getline(reader,s);
	cIRA=atoi( s.c_str() );
	getline(reader,s);
	cBCA=atoi( s.c_str() );
	getline(reader,s);
	cIBCA=atoi( s.c_str() );
	getline(reader,s);
	cDC=atoi( s.c_str() );
	getline(reader,s);
	cTCC=atoi( s.c_str() );
	getline(reader,s);
	cPCC=atoi( s.c_str() );
	getline(reader,s);
	cBL=atoi( s.c_str() );
	getline(reader,s);
	cPL=atoi( s.c_str() );
	getline(reader,s);
	cS=atoi( s.c_str() );
	if(ClientId==a){
	break;
	}
	else{
	continue;
	}
} 
reader.close();


	if(cSA==1){
	PSA=new SavingAccounts(0);
    reader.open("SavingAccount.txt",ios::in);
    while(!reader.eof()){
    getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PSA->AccountName=s;
	getline(reader,s);
	PSA->AccountType=s;
	getline(reader,s);
	PSA->AccountNumber=atoi( s.c_str() );
	getline(reader,s);
	PSA->Balance=atoi( s.c_str() );
	getline(reader,s);
	PSA->AmountWithInterestRate=atoi( s.c_str() );
	if(ClientId==a){
	break;
	}
	else{
	continue;
	}
    }
	reader.close();

	}
	
	
	if(cIRA==1){
	PIRA=new IRAccounts(0);
	reader.open("IndividualRetirementAccount.txt",ios::in);
	while(!reader.eof()){
    getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PIRA->AccountName=s;
	getline(reader,s);
	PIRA->AccountType=s;
	getline(reader,s);
	PIRA->AccountNumber=atoi( s.c_str() );
	getline(reader,s);
	PIRA->Balance=atoi( s.c_str() );
	getline(reader,s);
	PIRA->InterestProfits=atoi( s.c_str() );
	getline(reader,s);
	PIRA->InvestorsProfit=atoi( s.c_str() );
	if(ClientId==a){
	break;
	}
	else{
	continue;
	}
    }
	reader.close();
	}
	
	
	
	if(cBCA==1){
	PBCA=new BasicCheckingAccounts(0);
	reader.open("BasicCheckingAccount.txt",ios::in);
	while(!reader.eof()){
	getline(reader,s);
    ClientId=atoi( s.c_str() );
    getline(reader,s);
	PBCA->AccountName=s;
	getline(reader,s);
	PBCA->AccountType=s;
	getline(reader,s);
	PBCA->AccountNumber=atoi( s.c_str() );
	getline(reader,s);
	PBCA->Balance=atoi( s.c_str() );
	getline(reader,s);
	CheckingAccounts::TotalCheckingAccountsBalance=atoi( s.c_str() );
	getline(reader,s);
	PBCA->InterestPaid=atoi( s.c_str() );
	if(ClientId==a){
	break;
	}
	else{
	continue;
	}
    }
	reader.close();
	}
	
	
	
	
	if(cIBCA==1){
	PIBCA=new InterestBearingCheckingAccounts(0);
	reader.open("InterestBearingCheckingAccount.txt",ios::in);
	while(!reader.eof()){
	getline(reader,s);
    ClientId=atoi( s.c_str() );
    getline(reader,s);
	PIBCA->AccountName=s;
	getline(reader,s);
	PIBCA->AccountType=s;
	getline(reader,s);
	PIBCA->AccountNumber=atoi( s.c_str() );
	getline(reader,s);
	PIBCA->Balance=atoi( s.c_str() );
	getline(reader,s);
	CheckingAccounts::TotalCheckingAccountsBalance=atoi( s.c_str() );
	getline(reader,s);
	PIBCA->InterestPaid=atoi( s.c_str() );
	if(ClientId==a){
	break;
	}
	else{
	continue;
	}
	
    }
	reader.close();
	
	}
	
	if(cDC==1){
	PDC=new DebitCard;
	reader.open("DebitCard.txt",ios::in);
	while(!reader.eof()){
	getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PDC->CardNo=atoi( s.c_str() );
	getline(reader,s);
	PDC->limit=atoi( s.c_str() );
	getline(reader,s);
	PDC->CardType=s;
	getline(reader,s);
	PDC->pin=atoi( s.c_str() );
	if(ClientId==a){
	break;
	}
	else{
	continue;
	}
    }
    reader.close();
	}
	
	
	
	if(cTCC==1){
	PTCC=new TitaniumCreditCard;
	reader.open("TitaniumCard.txt",ios::in);
	while(!reader.eof())
	{
	getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PTCC->CardNo=atoi( s.c_str() );
	getline(reader,s);
	PTCC->limit=atoi( s.c_str() );
	getline(reader,s);
	PTCC->CardType=s;
	if(ClientId==a){
	break;
	}
	else{
	continue;
	}
	}
	reader.close();
	}
	
	if(cPCC==1){
	PPCC=new PlatinumCreditCard;
	reader.open("PlatinumCard.txt",ios::in);
	while(!reader.eof())
	{
	getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PPCC->CardNo=atoi( s.c_str() );
	getline(reader,s);
	PPCC->limit=atoi( s.c_str() );
	getline(reader,s);
	PPCC->CardType=s;
	if(ClientId==a){
	break;
	}
	else{
	continue;
	}
	}
	reader.close();
	}
	
	if(cBL==1){
	PBL=new BusinessLoans;
	reader.open("BusinessLoan.txt",ios::in);
	while(!reader.eof())
	{
	getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PBL->LoanRequestAmount=atoi( s.c_str() );
	getline(reader,s);
	PBL->TotalLoansDue=atoi( s.c_str() );
	getline(reader,s);
	PBL->TotalIncome=atoi( s.c_str() );
	getline(reader,s);
	PBL->Purpose=s;
	if(ClientId==a){
	break;
	}
	else{
	continue;
	}
	}
	reader.close();		
	}
	
	if(cPL==1){
	PPL=new PersonalLoans;
	reader.open("PersonalLoan.txt",ios::in);
	while(!reader.eof())
	{
	getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PPL->LoanRequestAmount=atoi( s.c_str() );
	getline(reader,s);
	PPL->TotalLoansDue=atoi( s.c_str() );
	getline(reader,s);
	PPL->TotalIncome=atoi( s.c_str() );
	getline(reader,s);
	PPL->Purpose=s;
	if(ClientId==a){
	break;
	}
	else{
	continue;
	}
	}
	reader.close();
		
	}
	
	
	if(cS==1)
	{
	PS=new Shares;
	reader.open("Shares.txt",ios::in);
	while(!reader.eof())
	{
	getline(reader,s);
	ClientId=atoi( s.c_str() );
	getline(reader,s);
	PS->amazon=atoi( s.c_str() );
	getline(reader,s);
	PS->facebook=atoi( s.c_str() );
	getline(reader,s);
	PS->google=atoi( s.c_str() );
	getline(reader,s);
	PS->camz=atoi( s.c_str() );
	getline(reader,s);
	PS->cfb=atoi( s.c_str() );
	getline(reader,s);
	PS->cgo=atoi( s.c_str() );
	if(ClientId==a){
	break;
	}
	else{
	continue;
	}
	}
	
	reader.close();
	}
	
	
	
	
	
	system("cls");
	cout<<"\t\t\t Your Personal Information "
	    <<"\n\n\nId ="<<ClientId
	    <<"\nName :"<<PersonalInformation::Name
	    <<"\nFather Name :"<<PersonalInformation::FatherName
		<<"\nAddress :"<<PersonalInformation::Address
		<<"\nDate Of Birth :"<<PersonalInformation::DOB 
		<<"\nNationality :"<<PersonalInformation::Nationality
		<<"\nCity :"<<PersonalInformation::City 
		<<"\nProfession :"<<PersonalInformation::Profession 
		<<"\nPhone :"<<PersonalInformation::PhoneNumber 
		<<"\nGender :"<<PersonalInformation::Gender
		<<"\nAge :"<<PersonalInformation::age 
		<<"\nTotal Accounts Balance :"<<Accounts::TotalAccountsBalance
		<<"\nTotal Loans Due On You :"<<Loans::TotalLoansDue
		<<"\n\n\t\t   Press Any Key To Enter The Franchise Office...";
		getch();
break;
}
else if(x!='1'  || x!='2'){
system("cls");
continue;
}




}//end of while loop

system("cls");
if(x=='1'){
if(PersonalInformation::Gender=='F'|| PersonalInformation::Gender=='f')
{
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t    Welcome To HSBC Ms."<<PersonalInformation::Name;;
}
else
{
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t    Welcome To HSBC Mr."<<PersonalInformation::Name;;
}
}
else if(x=='2'){

if(PersonalInformation::Gender=='F'|| PersonalInformation::Gender=='f')
{
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t Welcome Back Ms."<<PersonalInformation::Name;
}
else
{
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t Welcome Back Mr."<<PersonalInformation::Name;
}

}
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tPress Any Key To Continue...";
getch();
string x;
while(1){
x=FranchiseOffice();
if(x=="1" || x=="2" || x=="3"|| x=="4" || x=="5" || x=="6" || x=="7" || x=="8" || x=="9" || x=="10" || x=="11" || x=="12" || x=="13" ||x=="14"){
	
	
if(x=="1"){
if(cSA==1 && cIRA==1 && cBCA==1 && cIBCA==1){
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n"<< 
"    Sorry You Can't Open Any Other Accounts Because You Already Have All 4 Accounts\n"
<<"                             Press Any Key To Continue";
getch();
continue;
}
else{
OpenNewAccount();
continue;
}
}


else if(x=="2"){
	unsigned long int amm=0;
	char x;
	if(cSA==1 || cBCA==1 || cIBCA==1)
	{
	while(1)
	{
		system("cls");
		cout<<"\t\t\t<HSBC> Shares\n\n\n"
		    <<"1. View Your Shares Details\n"
		    <<"2. Buy New Shares\n\n";
		    x=getch();
		    if(x=='1' || x=='2')
		    {
		    	if(x=='1')
		    	{
		    		if(cS==0)
		    		{
		    			system("cls");
		    			cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tYou Dont Have Any Shares Right Now\n"
		    			    <<"\t\t\tPress Any Key To Continue....";
		    			getch();
		    			break;
					}
					else
					{
						PS->ViewShares();
						break;
					}
					
				}
				else if(x=='2')
				{
					char c;
					while(1)
					{
					
					system("cls");
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\tSelect Account Type From Which You Want To Buy Share\n\n"
					    <<"\t\t\t1. Saving Account\n"
					    <<"\t\t\t2. Basic Checking Account\n"
					    <<"\t\t\t3. Interest Bearing Checking Account\n"
					    <<"\t\t\tNote : Buying Shares Is Not Allowed From IR Account\n";
					    c=getch();
					    if(c=='1' || c=='2' || c=='3' )
						{
					    	if(  (c=='1' && cSA==1)  ||  (c=='2' && cBCA==1)  || (c=='3' && cIBCA==1) )
							{
								break;
							}
							else
							{
								continue;
							}
						}
						else
						{
							continue;
						}
					}
					    
					    
					if(cS==0)
					{
						PS=new Shares;
						cS++;
						if(c=='1'){	
						    amm=PS->SharesMenu(*PSA);
							Transfers::Subt(*PSA,amm);
						}
						else if(c=='2'){
						    amm=PS->SharesMenu(*PBCA);
							Transfers::Subt(*PBCA,amm);
						}
						else if(c=='3'){
						    amm=PS->SharesMenu(*PIBCA);
							Transfers::Subt(*PIBCA,amm);
						}
						break;
					}
					else
					{
						if(c=='1'){	
						    amm=PS->SharesMenu(*PSA);
							Transfers::Subt(*PSA,amm);
						}
						else if(c=='2'){
						    amm=PS->SharesMenu(*PBCA);
							Transfers::Subt(*PBCA,amm);
						}
						else if(c=='3'){
						    amm=PS->SharesMenu(*PIBCA);
							Transfers::Subt(*PIBCA,amm);
						}
						break;
					}
				}
				
			}
			else
			{
				continue;
			}
	}
	}
	else
				{
					system("cls");
					cout<<"\n\n\n\n\n\n\n\n\n\t\tSorry ! You Dont Have Such Type Of Accounts To Buy Any Share\n"
					    <<"\t\t\t   Press Any Key To Continue...";
					    getch();
				}
	
}

else if(x=="3"){
	if(cBL==1 && cPL==1)
	{
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\tSorry ! You Already Have Both Types Of Loans\n"
		    <<"\t\t\t     Press Any Key To Go Back....";
		    getch();
	}
	else
	{
		char ch;
	unsigned long int x;
	while(1){
		system("cls");
	cout<<"\t\t\tLoans Types Provided By < HSBC >\n\n"
	    <<"1. Apply For Business Loan.\n"
	    <<"2. Apply For Personal Loan.\n\n\n"
	    <<"Enter Your Choice :";
	ch=getch();
	if(ch=='1' || ch=='2'){
		if(ch=='1' && cBL==0){
			BusinessLoans temp;
			system("cls");
    		cout<<"\n\n\n\n\n\n\n\n\n\n      In Order To Apply For Business Loan You Must Answer Some Questions.\n"
    		    <<"\t\t\t    Press Any Key To Continue...";
    		getch();
			x=temp.ApplyForLoan();
			if(x!=0){
				PBL=new BusinessLoans;
				cBL++;
				*PBL=temp;            
				    while(1){
    		        char k;
    		        system("cls");
    		        cout<<"\t\t Account Names\n\n"
    		            <<"1. Saving Account\n"
    		            <<"2. Individual Retirment Account\n"
    		            <<"3. Basic Checking Account\n"
    		            <<"4. Interest Bearing Checking Account\n\n\n"
    		            <<"Select Any One Of Your Account To Deposit The Loan Amount :";
    		            k=getch();
    		            if(k=='1' || k=='2' || k=='3' || k=='4'){
    		            	if(k=='1' && cSA==1){
    		            		PSA->Deposit(x);
    		            		break;
							}
							else if(k=='2' && cIRA==1){
								PIRA->Deposit(x);
								break;
							}
							else if(k=='3' && cBCA==1){
								PBCA->Deposit(x);
								break;
							}
							else if(k=='4' && cIBCA==1){
								PIBCA->Deposit(x);
								break;
							}
							else{
								continue;
							}
						}
						
						
						
						else{
							continue;
						}
    		    } //end of while   
				               
				               
				               
			}
			break;
		}
		
		
		else if(ch=='2' && cPL==0){
			
			
			unsigned long int x;
			PersonalLoans temp;
			system("cls");
    		cout<<"\n\n\n\n\n\n\n\n\n\n      In Order To Apply For Personal Loan You Must Answer Some Questions.\n"
    		    <<"\t\t\t    Press Any Key To Continue...";
    		getch();
			x=temp.ApplyForLoan();
			if(x!=0){
				PPL=new PersonalLoans;
				cPL++;
				*PPL=temp;            
				    while(1){
    		        char k;
    		        system("cls");
    		        cout<<"\t\t Account Names\n\n"
    		            <<"1. Saving Account\n"
    		            <<"2. Individual Retirment Account\n"
    		            <<"3. Basic Checking Account\n"
    		            <<"4. Interest Bearing Checking Account\n\n\n"
    		            <<"Select Any One Of Your Account To Deposit The Loan Amount :";
    		            k=getch();
    		            if(k=='1' || k=='2' || k=='3' || k=='4'){
    		            	if(k=='1' && cSA==1){
    		            		PSA->Deposit(x);
    		            		break;
							}
							else if(k=='2' && cIRA==1){
								PIRA->Deposit(x);
								break;
							}
							else if(k=='3' && cBCA==1){
								PBCA->Deposit(x);
								break;
							}
							else if(k=='4' && cIBCA==1){
								PIBCA->Deposit(x);
								break;
							}
							else{
								continue;
							}
						}
						
						
						
						else{
							continue;
						}
    		    } //end of while   
				               
				               
				               
			}
			break;
			
			
			
			
			
			break;
		}
	}
		if(ch=='1' && cBL==1){
			system("cls");
    			cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tSorry ! You Already Have A Business Loan\n"
    		    <<"\t\t\t    Press Any Key To Continue...";
    		    getch();
    		    break;
		if(ch=='2' && cPL==1){
			system("cls");
    			cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tSorry ! You Already Have A Personal Loan\n"
    		    <<"\t\t\t    Press Any Key To Continue...";
    		    getch();
    		    break;
		}
	} //end of first if
	else{
		continue; // bcz of wrong Loan type
	}
	
	}//end of first while
	
	}
	
}


else if(x=="4"){
	char x;
	if(cSA==1 || cBCA==1 || cIBCA==1)
	{
		while(1){
		system("cls");
		cout<<"Select Any One Of The Following Methods."
		    <<"\n1. Generate A Pay Order."
		    <<"\n2. Generate A Letter Of Credit.\n\n"
		    <<"Enter Your Choice :";
		    x=getch();
		    if(x=='1' || x=='2'){
		    	
		    		while(1){
		    			char ch;
		    			system("cls");
		    			cout<<"\t\t\tAccount Names\n\n"
		    			    <<"1. Saving Account\n"
		    			    <<"2. Basic Checking Account\n"
		    			    <<"3. Interest Bearing Checking Account\n\n"
		    			    <<"Select Any Of The Following Account For PayOrder :";
		    			    ch=getch();
		    			    if(x=='1' || x=='2'){
		    			    	if(cSA!=1 && cBCA!=1 && cIBCA!=1){
		    			      	system("cls");
		    			      	cout<<"\n\n\n\n\n\n\n\n\n\t\t\tNo Such Account Exist For Manual Transfers"
		    			      	    <<"\n\t\t\t     Press Any Key To Continue...";
		    			      	    getch();
							  	break;
							}
		    			      if(ch=='1' && cSA!=1){
		    			    	continue;
							}
							  if(ch=='2' && cBCA!=1){
		    			    	continue;
							}
							  if(ch=='3' && cIBCA!=1){
		    			    	continue;
							}
							}
		    			    if(x=='1' && ( ch=='1' || ch=='2' || ch=='3' ) ){
		    			    system("cls");
		    		        PO=new PayOrders;
		    		        cout<<"Enter Amount :";
		    		        cin>>PO->Amount;
		    		        cin.sync();
		    		        cout<<"Enter Transfer Account Address :";
		    		        getline(cin,PO->TransferAccountAddress);
		    		        cin.sync();
		    		        if(ch=='1' && cSA==1){
		    		        	SavingAccounts temp(0);
		    		        	temp=*PSA;
		    		        	while(1){
		    		        		int h;
		    		        		h=Transfers::Subt(temp,PO->Amount);
		    		        		if(h==0){
		    		        			system("cls");
		    		        			cout<<"Enter Amount Again :";
		    		        			cin>>PO->Amount;
		    		        			continue;
									}
									else{
										PO->Generate();
										break;
									}
								}
		    		        	
		    		        	*PSA=temp;
		    		        	break;
							}
							else if(ch=='2' && cBCA==1){
		    		        	BasicCheckingAccounts temp(0);
		    		        	temp=*PBCA;
		    		        	while(1){
		    		        		int h;
		    		        		h=Transfers::Subt(temp,PO->Amount);
		    		        		if(h==0){
		    		        			system("cls");
		    		        			cout<<"Enter Amount Again :";
		    		        			cin>>PO->Amount;
		    		        			continue;
									}
									else{
										PO->Generate();
										break;
									}
								}
		    		        	*PBCA=temp;
		    		        	break;
							}
							else if(ch=='3' && cIBCA==1){
		    		        	InterestBearingCheckingAccounts temp(0); 
		    		        	temp=*PIBCA;
		    		        	while(1){
		    		        		int h;
		    		        		h=Transfers::Subt(temp,PO->Amount);
		    		        		if(h==0){
		    		        			system("cls");
		    		        			cout<<"Enter Amount Again :";
		    		        			cin>>PO->Amount;
		    		        			continue;
									}
									else{
										PO->Generate();
										break;
									}
								}
		    		        	*PIBCA=temp;
		    		        	break;
							}
		    		        cout<<"\n\n\n\n\n\t\t    Press Any Key To Generate Your Pay Order...";
		    		        getch();
		    		        PO->Generate();
		    		        cin.sync();
		    		        
		    		        break;
							}
							else if(x=='2' && ( ch=='1' || ch=='2' || ch=='3' ) ){
								system("cls");
					            LOC= new LetterOfCredit;
		    		            cout<<"Enter Amount :";
		    		            cin>>LOC->Amount;
		    		            cin.sync();
		    		            cout<<"Enter Country Name :";
		    		            getline(cin,LOC->Country);
		    		            cin.sync();
		    		            cout<<"Enter Transfer Account Address :";
		    		            getline(cin,LOC->TransferAccountAddress);
		    		            cin.sync();
		    		        if(ch=='1' && cSA==1){
		    		        	SavingAccounts temp(0);
		    		        	temp=*PSA;
		    		        	while(1){
		    		        		int h;
		    		        		h=Transfers::Subt(temp,LOC->Amount);
		    		        		if(h==0){
		    		        			system("cls");
		    		        			cout<<"Enter Amount Again :";
		    		        			cin>>LOC->Amount;
		    		        			continue;
									}
									else{
										LOC->Generate();
										break;
									}
								}
		    		        	*PSA=temp;
		    		        	break;
							}
							else if(ch=='2' && cBCA==1){
		    		        	BasicCheckingAccounts temp(0);
		    		        	temp=*PBCA;
		    		        	while(1){
		    		        		int h;
		    		        		h=Transfers::Subt(temp,LOC->Amount);
		    		        		if(h==0){
		    		        			system("cls");
		    		        			cout<<"Enter Amount Again :";
		    		        			cin>>LOC->Amount;
		    		        			continue;
									}
									else{
										LOC->Generate();
										break;
									}
								}
		    		        	
		    		        	*PBCA=temp;
		    		        	break;
							}
							else if(ch=='3' && cIBCA==1){
		    		        	InterestBearingCheckingAccounts temp(0); 
		    		        	temp=*PIBCA;
		    		        	while(1){
		    		        		int h;
		    		        		h=Transfers::Subt(temp,LOC->Amount);
		    		        		if(h==0){
		    		        			system("cls");
		    		        			cout<<"Enter Amount Again :";
		    		        			cin>>LOC->Amount;
		    		        			continue;
									}
									else{
										LOC->Generate();
										break;
									}
								}
		    		        	*PIBCA=temp;
		    		        	break;
							}
		    		            cout<<"\n\n\n\n\n\t\t    Press Any Key To Generate Your Letter Of Credit...";
		    		            getch();
		    		            LOC->Generate();
		    		            cin.sync();
		    		            break;
							}
							else{
								continue;
							}
						
		    			    
					}
		    		
	}
	else {
		continue;
	}
	break;
}
	}
	else
	{
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\t\t     Sorry You Do Not Have Such Account For Manual Transfers"
		    <<"\n\t\t          Press Any Key To Continue...";
		    getch();
		
	}
}


else if(x=="5"){
	if(cPCC==1 && cTCC==1 && cDC==1){
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\t   Sorry You Already Have All The Available Cards Provided By HSBC\n"
			    <<"\n\t\t\t\tPress Any Key To Go Back";
			    getch();
	}
	else{
	char ch;
	while(1){
	system("cls");
	cout<<" We Provide Following Types Of Cards To Our Clients.\n\n\n"
	    <<"\t\t\tCard Names\n\n\n"
	    <<"1. Debit Card\n"
	    <<"2. Titanium Credit Card\n"
	    <<"3. Platinum Credit Card\n\n"
	    <<"To Avail Any Of These Cards Please Enter Your Choice :";
	    ch=getch();
	    if(ch=='1'){
	    	if(cDC>0){
	    		system("cls");
	    		cout<<"\n\n\n\n\n\n\n\n\n\t\t    Sorry ! You Already Have One Debit Card."
	    		<<"\n\t\t\t\tPress Any Key To Go Back...";
	    		getch();
	    		continue;
			}
	    	else{
	    	system("cls");
	    	cout<<"\n\n\n\n\n\n\n\n\n\t\t   Congratulations ! You Now Have A Debit Card Of HSBC";
	    	cout<<"\n\t\t\t\tPress Any Key To Go Back...";
	    	PDC= new DebitCard;
	    	cDC++; 
            getch();
            break;
			}
		}
		else if(ch=='2'){
			if(cTCC>0){
    		system("cls");
    		cout<<"\n\n\n\n\n\n\n\n\n\t\t   Sorry ! You Already Have One Titanium Credit Card."
    		<<"\n\t\t\t\tPress Any Key To Go Back...";
    		getch();
    		continue;
			}
			else{
	    	system("cls");
	    	cout<<"\n\n\n\n\n\n\n\n\n\t\t   Congratulations ! You Now Have A Titanium Card Of HSBC";
	    	cout<<"\n\t\t\t\tPress Any Key To Go Back...";
	    	PTCC = new TitaniumCreditCard ;  
	    	cTCC++; 
            getch();
            break;
            }
		}
		else if(ch=='3'){
			if(cPCC>0){
    		system("cls");
    		cout<<"\n\n\n\n\n\n\n\n\n\t\t   Sorry ! You Already Have One Platinum Credit Card."
    		<<"\n\t\t\t\tPress Any Key To Go Back...";
    		getch();
    		continue;
			}
			else{
	    	system("cls");
	    	cout<<"\n\n\n\n\n\n\n\n\n\t\tCongratulations ! You Now Have A Platinum Credit Card Of HSBC";
	    	cout<<"\n\t\t\t\tPress Any Key To Go Back...";
            PPCC = new PlatinumCreditCard ;
            cPCC++;
            getch();
            break;
            }
		}
		
		else{
			continue;
		}
	}
}
} 


else if(x=="6"){
	while(1){
        char ch;
		system("cls");
	    cout<<"                                Account Names\n\n\n"
	    <<"       1. Saving Account\n"
	    <<"       2. Individual Retirement Account\n"
        <<"       3. Basic Checking Account\n"
	    <<"       4. Interest Bearing Checking Account\n"
	    <<"\n\n\nSelect Any Account To Withdraw Money:";
		ch=getch();
		if(ch=='1'){
			if(cSA==0){
				system("cls");
				cout<<"\n\n\n\n\n\n\n\n\t\t\tSorry ! No Such Account Exist In Your Profile";
				cout<<"\n\t\t\t       Press Any Key To Continue...";
				getch();
				continue;
			}
			SavingAccounts temp(0); //(0) sending 0 as an arg so that no information must be gained from client for this obj
			temp=(SavingAccounts)*PSA; //casting to be saved
			PATM->withdraw(temp);
			*PSA=(SavingAccounts)temp;
			PSA->Display(); 
		}
		
		else if(ch=='2'){
			if(cIRA==0){
				system("cls");
				cout<<"\n\n\n\n\n\n\n\n\t\t\tSorry ! No Such Account Exist In Your Profile";
				cout<<"\n\t\t\t       Press Any Key To Continue...";
				getch();
				continue;
			}
			IRAccounts temp(0);
			temp=(IRAccounts)*PIRA;
			PATM->withdraw(temp);
			*PIRA=(IRAccounts)temp;
			PIRA->Display();
		}
		
		else if(ch=='3'){
			if(cBCA==0){
				system("cls");
				cout<<"\n\n\n\n\n\n\n\n\t\t\tSorry ! No Such Account Exist In Your Profile";
				cout<<"\n\t\t\t       Press Any Key To Continue...";
				getch();
				continue;
			}
			BasicCheckingAccounts temp(0);
			temp=(BasicCheckingAccounts)*PBCA;
			PATM->withdraw(temp);
			*PBCA=(BasicCheckingAccounts)temp;
			PBCA->Display();
		}
		
		else if(ch=='4'){
			if(cIBCA==0){
				system("cls");
				cout<<"\n\n\n\n\n\n\n\n\t\t\tSorry ! No Such Account Exist In Your Profile";
				cout<<"\n\t\t\t      Press Any Key To Continue...";
				getch();
				continue;
			}
			InterestBearingCheckingAccounts temp(0);
			temp=(InterestBearingCheckingAccounts)*PIBCA;
			PATM->withdraw(temp);
			*PIBCA=(InterestBearingCheckingAccounts)temp;
			PIBCA->Display();
		}
		else{
			continue;
		}
		break;
	}
	    
}


else if(x=="7"){
	if(cDC>0 || cTCC >0 || cPCC >0){
	while(1){
	char ch,x;
	system("cls");
	cout<<"                       Account Names\n\n\n"
	    <<" 1. Saving Account\n"
        <<" 2. Basic Checking Account\n"
	    <<" 3. Interest Bearing Checking Account\n"
	    <<"\nNote : Shopping Not Allowed In Individual Retirement Account."
	    
	    <<"\n\n\n\nSelect Any Account For Billing Of Shopping:";
		ch=getch();
		if(  (ch=='1' && cSA==1 )  || (ch=='2' && cBCA==1 )  || (ch=='3' && cIBCA==1 )  ){
			while(1){
				if(cDC>0 || cTCC >0 || cPCC >0){
				system("cls");
				cout<<"          Cards Names\n\n\n"
				    <<"1. Debit Card\n"
				    <<"2. Titanium Credit Card\n"
				    <<"3. Platinum Card\n"
				    <<"Select Card Type For Billing :";
				    x=getch();
				    if( (  x=='1' && cDC==1  ) || ( x=='2' && cTCC==1 ) || ( x=='3' && cPCC==1 ) ){
				    	if(x=='1' && ch=='1'){
				    	//DebitCardTitaniumCreditCard
			    	    SavingAccounts temp1(0);
						DebitCard temp2;
						temp1=*PSA;
						temp2=*PDC;
			    		PDC->shop(temp1,temp2);
			    		*PSA=temp1;
			    		*PDC=temp2;
			    		system("cls");
			    		PSA->Display();
			    		break;
						}
						else if(x=='1' && ch=='2'){
				    	BasicCheckingAccounts temp1(0);
						DebitCard temp2;
						temp1=*PBCA;
						temp2=*PDC;
			    		PDC->shop(temp1,temp2);
			    		*PBCA=temp1;
			    		*PDC=temp2;
			    		system("cls");
			    		PBCA->Display();
			    		break;
						}
						else if(x=='1' && ch=='3'){
			    		InterestBearingCheckingAccounts temp1(0);
						DebitCard temp2;
						temp1=*PIBCA;
						temp2=*PDC;
			    		PDC->shop(temp1,temp2);
			    		*PIBCA=temp1;
			    		*PDC=temp2;
			    		system("cls");
			    		PIBCA->Display();
			    		break;
						}
						else if(x=='2' && ch=='1'){
			    		SavingAccounts temp1(0);
						TitaniumCreditCard temp2;
						temp1=*PSA;
						temp2=*PTCC;
			    		PDC->shop(temp1,temp2);
			    		*PSA=temp1;
			    		*PTCC=temp2;
			    		system("cls");
			    		PSA->Display();
			    		break;
						}
						else if(x=='2' && ch=='2'){
				    	BasicCheckingAccounts temp1(0);
						TitaniumCreditCard temp2 ;
						temp1=*PBCA;
						temp2=*PTCC;
			    		PDC->shop(temp1,temp2);
			    		*PBCA=temp1;
			    		*PTCC=temp2;
			    		system("cls");
			    		PBCA->Display();
			    		break;
						}
						else if(x=='2' && ch=='3'){
			    		InterestBearingCheckingAccounts temp1(0);
						TitaniumCreditCard temp2;
						temp1=*PIBCA;
						temp2=*PTCC;
			    		PDC->shop(temp1,temp2);
			    		*PIBCA=temp1;
			    		*PTCC=temp2;
			    		system("cls");
			    		PIBCA->Display();
			    		break;
						}
						else if(x=='3' && ch=='1'){
						SavingAccounts temp1(0);
						PlatinumCreditCard temp2;
						temp1=*PSA;
						temp2=*PPCC;
			    		PDC->shop(temp1,temp2);
			    		*PSA=temp1;
			    		*PPCC=temp2;
			    		system("cls");
			    		PSA->Display();
			    		break;
						}
						else if(x=='3' && ch=='2'){
			    		BasicCheckingAccounts temp1(0);
						PlatinumCreditCard temp2;
						temp1=*PBCA;
						temp2=*PPCC;
			    		PDC->shop(temp1,temp2);
			    		*PBCA=temp1;
			    		*PPCC=temp2;
			    		system("cls");
			    		PBCA->Display();
			    		break;
						}
						else if(x=='3' && ch=='3'){
			    		InterestBearingCheckingAccounts temp1(0); 
						PlatinumCreditCard temp2;
						temp1=*PIBCA;
						temp2=*PPCC;
			    		PDC->shop(temp1,temp2);
			    		*PIBCA=temp1;
			    		*PPCC=temp2;
			    		system("cls");
			    		PIBCA->Display();
			    		break;
						}
						
					}
					else{
						system("cls");
						cout<<"\n\n\n\n\n\n\n\n\n\t\t\tSorry ! No Such Shopping Card Exist In Your Profile";
				        cout<<"\n\t\t\t         Press Any  Key To Continue....";
				        getch();
						continue;
						
					}
					
			}
			else{
				system("cls");
				cout<<"\n\n\n\n\n\n\n\n\t\t\tSorry ! No Shopping Card Exist In Your Profile";
				cout<<"\n\t\t\t         Press Any  Key To Continue...";
				getch();
				break;
			}
			
		
		}
		}
		else{
			continue;
		}
		break;
	}	
	
	}
	else{
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\t\tSorry ! You Don't Have Any Card In Your Profile To Do Shopping";
        cout<<"\n\t\t\t        Press Any  Key To Continue....";
        getch();
	}
	
}


else if(x=="8"){
if(cSA==1 || cBCA==1 || cIBCA==1)
{
		char x;
	POT=new OnlineTransfers;
while(1){
	system("cls");
	cout<<"\t\t\t\tAccount Names\n\n\n"
	    <<"1. Saving Account\n"
	    <<"2. Basic Checking Account\n"
	    <<"3. Interest Bearing Checking Account\n"
	    <<"Note : Online Transfers Not Allowed In Individual Retirement Account\n\n"
	    <<"Select Any Of The Above Account For Online Transfer :";
	    x=getch();
	    int y=0;
	    if(x=='1' || x=='2' || x=='3'){
	    	
	    	if(x=='1' && cSA==1){
	    		POT->GetInfo();
	    		SavingAccounts temp(0);
	    		temp=*PSA;
	    		while(1){
	    			y=Transfers::Subt(temp,POT->Amount);
	    			if(y==0){
	    				system("cls");
	    				cout<<"Enter Transfering Amount Again :";
	    				cin>>POT->Amount;
	    				continue;
					}
					else{
					    *PSA=temp;
	    		        break;
					}
				}
	    		
			}
			else if(x=='1' && cSA!=1){
				continue;
			}
			
			
			if(x=='2' && cBCA==1){
	    		POT->GetInfo();
	    		BasicCheckingAccounts temp(0);
	    		temp=*PBCA;
	    		while(1){
	    			y=Transfers::Subt(temp,POT->Amount);
	    			if(y==0){
	    				system("cls");
	    				cout<<"Enter Transfering Amount Again :";
	    				cin>>POT->Amount;
	    				continue;
					}
					else{
					    *PBCA=temp;
	    		        break;
					}
				}
				
			}
			else if(x=='2' && cBCA!=1){
				continue;
			}
			
			if(x=='3' && cIBCA==1){
	    		POT->GetInfo();
	    		InterestBearingCheckingAccounts temp(0);
	    		temp=*PIBCA;
	    		while(1){
	    			y=Transfers::Subt(temp,POT->Amount);
	    			if(y==0){
	    				system("cls");
	    				cout<<"Enter Transfering Amount Again :";
	    				cin>>POT->Amount;
	    				continue;
					}
					else{
					    *PIBCA=temp;
	    		        break;
					}
				}
			}
			else if(x=='3' && cIBCA!=1){
				continue;
			}
			if( cSA!=1 && cBCA!=1 && cIBCA!=1 )
			{
				system("cls");
				cout<<"\n\n\n\n\n\n\n\n\t\t\t No Such Account Exist In Your Profile"
				    <<"\n\t\t\t     Press Any Key To Continue...";
				    getch();
				    break;
			}
			
			
		}
	
	    else{
	    	continue;
		}
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\t   Congratulations ! "<<POT->Amount<< " Has Been Transfered Online From Your Account"
		    <<"\n\t\t\t    Press Any Key To Continue...";
		    getch();
		break;
}
}

else
{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\tSorry You Do Not Have Such Account For Online Transfers\n"
	    <<"\t\t\t    Press Any Key To Continue...";
	    getch();
}
}


else if(x=="9"){
	while(1){
		char ch;
	system("cls");
	cout<<"                       Account Names\n\n\n"
	    <<" 1. Saving Account\n"
	    <<" 2. Individual Retirement Account\n"
        <<" 3. Basic Checking Account\n"
	    <<" 4. Interest Bearing Checking Account\n"
	    <<"\n\n\nChoose Any Of Your Account To Show Its Details :";
	    ch=getch();
	    if(ch=='1' || ch=='2' || ch=='3' || ch=='4'){

	    	if(ch=='1' && cSA==1 ){
	    		PSA->Display();
	    		break;
			}
			else if(ch=='2' && cIRA==1 ){
				PIRA->Display();
	    		break;
			}
			else if(ch=='3' && cBCA==1 ){
				PBCA->Display();
	    		break;
			}
			else if(ch=='4' && cIBCA==1 ){
				PIBCA->Display();
	    		break;
			}
			else{
				system("cls");
				cout<<"\n\n\n\n\n\n\n\n\n\t\t      Sorry ! No Such Account Exist In Your Profile.";
                cout<<"\n\t\t\t        Press Any  Key To Continue....";
                getch();
				continue;
			}
		}
		else{
			continue;
		}
	}
}


else if(x=="10"){
	HSBC::HSBCBankData();
}
else if(x=="11"){
	char k;
	while(1)
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t        Available Accounts\n\n"
	    <<"\t\t\t1. Saving Account\n"
	    <<"\t\t\t2. Individual Retirement Account\n"
	    <<"\t\t\t3. Basic Checking Account\n"
	    <<"\t\t\t4. Interest Bearing Checking Account\n\n"
	    <<"\t\t\tSelect Account To Deposit Money :";
	    k=getch();
	    if(k=='1' || k=='2' || k=='3' || k=='4')
	    {
	    	unsigned long int amm=0;
	    	if(k=='1' && cSA==1)
	    	{
	    		system("cls");
	    		cout<<"\n\n\n\n\n\n\n\n\n\n\t\t    Enter Amount To Be Deposited In Your Saving Account :";
	    		cin>>amm;
	    		PSA->Deposit(amm);
	    		system("cls");
	    		cout<<"\n\n\n\n\n\n\n\n\n\t\t\tAmount Has Been Deposited Successfully\n"
	    		    <<"\t\t\tPress Any Key To Continue...";
	    		    getch();
	    		    break;
			}
			else if(k=='2' && cIRA==1)
	    	{
	    		system("cls");
	    		cout<<"\n\n\n\n\n\n\n\n\n\n\t\tEnter Amount To Be Deposited In Your IR Account :";
	    		cin>>amm;
	    		PIRA->Deposit(amm);
	    		system("cls");
	    		cout<<"\n\n\n\n\n\n\n\n\n\t\t\tAmount Has Been Deposited Successfully\n"
	    		    <<"\t\t\tPress Any Key To Continue...";
	    		    getch();
	    		    break;
			}
			else if(k=='3' && cBCA==1)
	    	{
	    		system("cls");
	    		cout<<"\n\n\n\n\n\n\n\n\n\n\t   Enter Amount To Be Deposited In Your Basic Checking Account :";
	    		cin>>amm;
	    		PBCA->Deposit(amm);
	    		system("cls");
	    		cout<<"\n\n\n\n\n\n\n\n\n\t\t\tAmount Has Been Deposited Successfully\n"
	    		    <<"\t\t\tPress Any Key To Continue...";
	    		    getch();
	    		    break;
			}
			else if(k=='4' && cIBCA==1)
	    	{
	    		system("cls");
	    		cout<<"\n\n\n\n\n\n\n\n\n\n\tEnter Amount To Be Deposited In Your Interest Bearing Checking Account :";
	    		cin>>amm;
	    		PIBCA->Deposit(amm);
	    		system("cls");
	    		cout<<"\n\n\n\n\n\n\n\n\n\t\t\tAmount Has Been Deposited Successfully\n"
	    		    <<"\t\t\tPress Any Key To Continue...";
	    		    getch();
	    		    break;
			}
		}
		else
		{
			continue;
		}
	    
	}
}
else if(x=="12"){
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\tThank You :)\n"
	    <<"\t\t\tPlease Come Again Soon :)\n\n\n\n\n\n\n";
	break;
}




}


}
}






};//end of client class


unsigned int Clients::ClientId=0;
unsigned long long int Clients::Loans::TotalLoansDue=0;
unsigned int Clients::ATMCard::pin=0;
unsigned int Clients::PersonalInformation:: AccountsCount=0;
unsigned long int Clients::Accounts:: TotalAccountsBalance=0; 
unsigned long int Clients::CheckingAccounts:: TotalCheckingAccountsBalance=0;
string Clients::PersonalInformation:: Name="xxx";
string Clients::PersonalInformation:: FatherName="xxx";
string Clients::PersonalInformation:: Address="xxx";
string Clients::PersonalInformation:: DOB="xxx";
string Clients::PersonalInformation:: Nationality="xxx";
string Clients::PersonalInformation:: City="xxx";
string Clients::PersonalInformation:: Profession="xxx";
string Clients::PersonalInformation:: PhoneNumber="xxxx";
char Clients::PersonalInformation:: Gender='X';
int Clients::PersonalInformation:: age=0;




template <class Accountx> int Clients::Transfers::Subt(Accountx &x , unsigned long int &y ){
if(y>x.Balance){
return 0;
}
else{
	x.Balance=x.Balance-y;
	Accounts::TotalAccountsBalance=Accounts::TotalAccountsBalance-y;
	return 1;
	
}

}





template < class Accountx > void Clients::ATM::withdraw(Accountx &x){
int i;
system("cls");
cout<<"\t\t  Welcome To Automated Teller Machine\n\n\n\n\n";
if(x.AccountType == "Saving Account"){
cout<<"Enter Your ATM PIN Code To Withdraw Money From Your Sav.Account :";
cin>>i;
}
else if(x.AccountType == "Basic Checking Account"){
cout<<"Enter Your ATM PIN Code To Withdraw Money From Your BasChk.Account :";
cin>>i;
}
else if(x.AccountType == "Interest Bearing Checking Account"){
cout<<"Enter Your ATM PIN Code To Withdraw Money From Your IntrBearChk.Account :";
cin>>i;
}
if(x.AccountType != "Individual Retirement Account"){
	
	
	
while(1){
if(i==ATMCard::pin)
{
int amm;
system("cls");
while(1){
cout<<"Enter Amount To Withdraw :";
cin>>amm;
if(amm<=x.Balance){
break;
}
else{
cout<<"\nSorry ! No Enough Balance In Your Account To Withdraw"
<<"\nPress Any Key To Continue...";
getch();
system("cls");
continue;
}
}
BWD(amm);
x.Balance=x.Balance-amm;
cout<<"Congratulations ! You Have Withdrawn "<<amm<<" Rs";
cout<<"\nYour Current Balance Is Now :"<<x.Balance;
Accounts::TotalAccountsBalance=Accounts::TotalAccountsBalance-amm;
cout<<"\nPress Any Key To Continue...";
getch();
system("cls");
break;
}
else{
system("cls");
cout<<"Wrong PIN Please Enter Again :";
cin>>i;
continue;
}

}
	
	
	
}
else if (x.AccountType == "Individual Retirement Account"){
string opt;
unsigned long int amm;
Accounts::TotalAccountsBalance=Accounts::TotalAccountsBalance-x.Balance;
if(PersonalInformation::age>=60){
opt="Yes";
}
else{
opt="No";	
}
while(1){
if(opt=="Yes" || opt=="yes" || opt=="YES" ){
system("cls");
cout<<"Enter Your PIN :";
cin>>i;
if(i==ATMCard::pin){
cout<<"Enter Amount To Be Withdrawn From Your IR Account :";
cin>>amm;
if(amm>x.Balance || amm > x.Balance - (x.Balance * 0.15) ){
	while(1){
	cout<<"Sorry ! Not Enough Balance In Your Account To Withdraw Such Amount"
	    <<"\nEnter Amount Again :";
	    cin>>amm;
	    if(amm>x.Balance || amm > x.Balance - (x.Balance * 0.15)){
	    	system("cls");
	    	continue;
		}
		else{
			BWD(amm);
			break;
		}
        }
}

}
else{
	continue;
}
if(PersonalInformation::age<60){
x.Balance=x.Balance-amm-(x.Balance*0.15);
Accounts::TotalAccountsBalance=Accounts::TotalAccountsBalance+x.Balance;
}
else{
x.Balance=x.Balance-amm;
Accounts::TotalAccountsBalance=Accounts::TotalAccountsBalance+x.Balance;
}
cout<<"Congratulations ! You Have Withdrawn "<<amm<<" Rs";
cout<<"\nYour Current IR Account Balance Is Now :"<<x.Balance;
getch();
system("cls");
break;
}
else if(opt=="No" || opt == "no" || opt == "NO"){
cout<<"\nSorry You Can't Withdraw Any Amount Because Your Age Is Lesser Than 60"
<<"\nIf You Still Want to Withdraw You Have To Pay Some Penalty Of 15% Of The Original Amount\n"
<<"Enter Your Choice (Yes/No) :";
cin>>opt;
if(opt=="No" || opt=="no"){
break;
}
else{
continue;
}

}

}
	
} // end of IR withdraw check


} //end of withdraw function






template <class Accountx , class Card> void Clients::DebitCard::shop(Accountx &x, Card &y){
if (x.AccountType == "Individual Retirement Account"){
system("cls");
cout<<"Sorry ! Shopping From Individual Retirement Account Is Not Allowed.\n"
<<"Press Any Key To Continue...";
getch();
}
else{
int i;
system("cls");
cout<<"\t\t\t   Welcome To Bill Payment Counter For Your Shopping\n\n\n\n\n";
cout<<"Enter Your Total Bill To Be Paid :";
cin>>i;
while(1){
if(i<=x.Balance && (   ( 400000>=(i+y.limit) && y.CardType=="TitaniumCard" )   || (  700000>=(i+y.limit) && y.CardType=="PlatinumCard" ) || ( 150000>=(i+y.limit) && y.CardType=="DebitCard" )    )     )
{
BWD(i);
x.Balance=x.Balance-i;
system("cls");
cout<<"\n\n\n\n\n\n\n\n\t\t\tCongratulations ! You Have Shopped Successfully";
y.limit=y.limit+i;
cout<<"\n\t\t\t  Your Current Balance Is Now :"<<x.Balance
    <<"\n\t\t\t    Your Current Card Limit :"<<y.limit;
Accounts::TotalAccountsBalance=Accounts::TotalAccountsBalance-i;
cout<<"\n\t\t\t     Press Any Key To Continue...";
getch();
break;
}
else{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\t\t\tSorry ! You Don't Have Enough Limit/Balance To Shop\n"
    <<"\t\t\tYour Current Balance Is "<<x.Balance
    <<"\n\t\t\tPlease Make Your Bill Less\n"
    <<"\n\t\t\tEnter New Changed Bill :";
cin>>i;
continue;
}

}//end of while


}
}




int main(){
Clients BankClient;
BankClient.Control();


}








