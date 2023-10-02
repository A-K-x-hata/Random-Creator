#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r=1;
    int randomIndex=-1;
    const string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const string numbers="0123456789";
    const string special="&@_";
    string y;
    while(r){
    cout<<"Describe the type of password you want to generate:"<<endl;
    cout<<"1->Only words"<<endl;
    cout<<"2->numbers"<<endl;
    cout<<"3->Combination of words and numbers including special characters(_,@,&)"<<endl;
    cout<<"4->Combination of words and numbers"<<endl;
    int choice;
    int l;
    int i=0;
    string convertedPassword;
       string g;
    cin>>choice;
    if(choice>=5){
        cout<<"Invalid choice"<<endl;
        exit(0);
    }
    cout<<"Enter the length of your password"<<endl;
    cin>>l;
    if(l<4){
        cout<<"Invalid length! Password length should be greater than or equal to 4"<<endl;
        exit(0);
    }
    switch(choice){
    case 1:while(i<l){
          randomIndex=rand()%alphabet.size();
          g=alphabet[randomIndex]+g;
          i++;
            }
            break;
    case 2:while(i<l){
           randomIndex=rand()%numbers.size();
            g=numbers[randomIndex]+g;
            i++;
     }
     break;

    case 3:cout<<"Format"<<endl;
        cout<<"1->numbers (@/&) alphabets)"<<endl;
        cout<<"2->alphabets (@/&) numbers)"<<endl;
        int n;
        cin>>n;
        if(n==1){
            while(i<floor(l/2)){
                randomIndex=rand()%alphabet.size();
          g=alphabet[randomIndex]+g;
          i++;
            }
        randomIndex=rand()%special.size();
          g=special[randomIndex]+g;
          i++;
          while(i<l){
            randomIndex=rand()%numbers.size();
            g=numbers[randomIndex]+g;
            i++;
          }
        }
        else
            if(n==2){
            while(i<floor(l/2)){
               randomIndex=rand()%numbers.size();
            g=numbers[randomIndex]+g;
            i++;
            }
        randomIndex=rand()%special.size();
          g=special[randomIndex]+g;
          i++;
          while(i<l){
            randomIndex=rand()%alphabet.size();
          g=alphabet[randomIndex]+g;
          i++;
          }
        }
        else{
            cout<<"Invalid choice"<<endl;
            exit(0);
        }

        break;
    case 4:cout<<"Format"<<endl;
           int m;
           cout<<"1->numbers first then letters"<<endl;
           cout<<"2->Letters first then numbers"<<endl;
           cin>>m;
           if(m==1){
            while(i<floor(l/2)){
                randomIndex=rand()%alphabet.size();
                g=alphabet[randomIndex]+g;
                 i++;
            }
             while(i<l){
            randomIndex=rand()%numbers.size();
            g=numbers[randomIndex]+g;
            i++;
          }
           }
          else
          if(m==2){
            while(i<floor(l/2)){
               randomIndex=rand()%numbers.size();
            g=numbers[randomIndex]+g;
            i++;
            }
            while(i<l){
            randomIndex=rand()%alphabet.size();
          g=alphabet[randomIndex]+g;
          i++;
          }
          }
           else{
            cout<<"Invalid choice"<<endl;
            exit(0);
        }
    break;
    default:cout<<"Invalid choice";
    exit(0);

    }
     cout<<"Do you want your password to be in all lowercase? If yes then type (Y)"<<endl;
            cin>>y;
        system("cls");
    if (y == "Y" || y == "y") {
        for (char c : g) {
            convertedPassword += std::tolower(c);
        }
    } else {
        convertedPassword = g;
    }
    int terminalWidth = 120;
    int terminalHeight = 24;
  int horizontalPadding = (terminalWidth - convertedPassword.length()) / 2;
    int verticalPadding = terminalHeight / 2;
    for (int i = 0; i < verticalPadding; i++) {
        cout << endl;
    }
    cout << string((terminalWidth-26)/2, ' ') << "Your generated password is:" << endl;
    cout << string(horizontalPadding, ' ') <<"\033[32;1m"<<convertedPassword <<"\033[0m"<< endl;
    cout<<"Do you want to regenerate your password? if yes press any number from 1 to 9. orelse press 0"<<endl;
    cin>>r;

}
}


