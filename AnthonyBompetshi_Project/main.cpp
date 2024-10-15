#include <iostream>

using namespace std;

int main()
{
    string block;
    string CorrectPin="1233";
    string pin;
    double deposit;
    double withdraw;
    int choice;
    double initial =500.00;
    double newbalance;

    string UserName;
    string password;
    int accountNo;
    int Home;
    string create;


    while (true)
    {
    cout <<"Welcome to Bank Anthony"<<endl;
    cout <<" Press 1 to Log in"<<endl;
    cout <<" Press 2 to Sign up"<<endl;
    cin >>Home;
    if (Home == 1)
    {
        cout << "Enter account number:.... "<<endl;
        cin >>accountNo;
        cout << "Enter user name:.... "<<endl;
        cin >>UserName;

        while (true)
        {
        cout << "Enter password:.... "<<endl;
        cin >>password;
        if (password=="tony")
        {
            cout << "Matched password. Access granted"<<endl;


                               //transaction options have been compressed in the account number login section
                                cout<< "Enter 1 to Deposit "<<endl;
                                cout<< "Enter 2 to Withdraw "<<endl;
                                cout<< "Enter 3 to check your balance "<<endl;
                                cout<< "Enter 4 to Report stolen card "<<endl;
                                cin>>choice;


                                //choice function code

                                switch(choice)
                                {
                                //CASE ONE!
                                case 1:
                                // 4 digit pin using do while loop until CorrectPin is entered to Deposit
                                do
                                {
                                cout << "Please enter 4 digit pin "<<endl;
                                cin >>pin;
                                if (pin!=CorrectPin)
                                {
                                cout <<"Access Denied!. Wrong pin please try again. "<<endl;
                                }
                                }
                                while(pin!=CorrectPin);
                                cout <<"Access Granted. "<<endl;
                                cout << "How much would you like to deposit"<<endl;
                                cin >> deposit;
                                newbalance = initial + deposit;
                                cout << "You have successfully deposited R"<<deposit<<endl;
                                cout <<"Your new balance is R"<< newbalance<<endl;
                        break;


        //CASE TWO!
                            case 2:
        // 4 digit pin using do while loop until CorrectPin is entered to Withdraw
                                do
                                {
                                cout << "Please enter 4 digit pin "<<endl;
                                cin >>pin;
                                if (pin!=CorrectPin)
                                {
                                cout <<"Access Denied!. Wrong pin please try again. "<<endl;
                                }
                                }
                                while(pin!=CorrectPin);
                                cout <<"Access Granted. "<<endl;
                                cout << "How much would you like to withdraw "<<endl;
                                cin >>withdraw;
                                newbalance = initial - withdraw;
                                cout << "You have successfully withdrawn R"<<withdraw<<endl;
                                cout << "Your new balance is R"<< newbalance<<endl;
                    break;

    //CASE THREE!
                        case 3:
    // 4 digit pin using do while loop until CorrectPin is entered for balance check.
                                do
                                {
                                cout << "Please enter 4 digit pin "<<endl;
                                cin >>pin;
                                if (pin!=CorrectPin)
                                {
                                cout <<"Access Denied!. Wrong pin please try again. "<<endl;
                                }
                                }
                                while(pin!=CorrectPin);
                                cout <<"Access Granted. "<<endl;
                                newbalance = initial - withdraw + deposit;
                                cout << newbalance<<endl;
                break;

    //CASE FOUR!
                    case 4:
    // 4 digit pin using do while loop until CorrectPin is entered for balance check.
                                do
                                {
                                cout << "Please enter 4 digit pin "<<endl;
                                cin >>pin;
                                if (pin!=CorrectPin)
                                {
                                cout <<"Access Denied!. Wrong pin please try again. "<<endl;
                                }
                                }
                                while(pin!=CorrectPin);
                                cout <<"Access Granted. "<<endl;

                                cout << "Please provide the following details "<<endl;
                                string  cardNumber;
    //enter details of card number
                                cout << "Enter card number "<<endl;
                                cin >>cardNumber;
    //enter details of card holder
                                string cardHolder;
                                cout <<"Enter card holder's name "<<endl;
                                cin.ignore();
                                getline(cin, cardNumber);
            //date lost
                                string dateLost;
                                cout <<"Enter date of theft/lost (DD/MM/YYYY): "<<endl;
                                cin>>dateLost;

            //here system responds to user
                                cout <<"Your report has been submitted. Thank you. "<<endl;



                                }


                    break;
                                }
        else
        {
            cout << "Password does not match account, Please try again"<<endl;
        }
        }}

    else if(Home == 2)

    {

        while (true)
        {
        cout <<" Our bank does not condone on-line account creation "<<endl;
        cout <<" Would you like to make an appointment online"<<endl;
        cin >> create;
        if (create == "yes")
        {
            string AppointmentName;// Users name
            cout <<" Enter your name: "<<endl;
            cin >>AppointmentName;
            string Contact;
            cout <<" Enter your contact details: "<<endl;
            cin >>Contact;
            string Email;
            cout <<" Enter your email address: "<<endl;
            cin >>Email;

            cout <<" Thank you. You will be contacted with-in 3 business days "<<endl;

        }
        else if (create == "no")
        {
            cout << "Thank you have a nice day "<<endl;

        }
        else
        {
            cout <<" Invalid."<<endl;
        }
        }
    }

    else if (Home!=1 || Home!=2)
    {
        cout <<"Invalid please choose 1 or 2"<<endl;
    }


    }


    return 0;
}
