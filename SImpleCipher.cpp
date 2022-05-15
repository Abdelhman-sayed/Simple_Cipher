/*FACULTY OF COMPUTERS AND ARTIFICIAL INTELLIGENCE, CAIRO UNIVERSITY
Author :Abdelrhman sayed ali
Program Name: Simple Substitution Cipher.c plus plus*/


#include <iostream>
#include <string>
#include <cstring>
#include <map>
#include <algorithm>
#include <sstream>
#include <regex>
#include <vector>
#include <fstream>
#include <conio.h>




using namespace std;
string key,text_cipher,text_decipher;

// Function to cipher
void cipher()
{
    string letters;
    letters="abcdefghijklmnopqrstuvwxyz";//The letters that I will modify  it

    char original_letters []="abcdefghijklmnopqrstuvwxyz";// original letters

    cout<<">>>>Please, Enter the key contain five letters : "<<endl;
    cin>>key;

    cin.ignore();

    cout<<"\n>>>>Please, Enter the text to cipher it is : "<<endl;
    getline(cin,text_cipher);// enter a message to cipher it
    cout<<endl;
    for (int i=0;i<letters.size();i++)
        {
            for(int j=0;j<key.size();j++)
                {
                    if (letters[i] == key[j])
                        {
                            letters.erase(i,1);
                        }

                }

        }
    key.append(letters);//in here we add The rest of the list of letters
    //original letters : abcdefghijklmnopqrstuvwxyz

    // input key :cairo

    //key:cairobdefghjklmnpqstuvwxyz
    transform(text_cipher.begin(),text_cipher.end(),text_cipher.begin(),::tolower);//This function to covert text cipher from upper to lower

    for (int i=0;i<text_cipher.size();i++)
        {
            for (int j=0;j<key.size();j++)
                {
                    if (text_cipher[i] == original_letters[j])//if letter of index of text cipher equal to letter of index of original letters
                        {
                            text_cipher[i]=key[j];//in this step take index(i) of original letters to key same index of original letters to come with letter of key to replace letter of text cipher
                            break;
                        }
                }
        }
    cout<<">>>>The text cipher it is : "<<endl<<text_cipher<<endl;
}


//Function to decipher
 void decipher()
 {
    string letters;
    letters="abcdefghijklmnopqrstuvwxyz";//The letters that I will modify  it

    char original_letters []="abcdefghijklmnopqrstuvwxyz";// original letters

    cout<<">>>>>Please, Enter the key contain five letters : "<<endl;
    cin>>key;

    cin.ignore();

    cout<<"\n>>>>Please, Enter the text to decipher it : "<<endl;
    getline(cin,text_decipher);// enter a message to cipher it
    cout<<endl;
    for (int i=0;i<letters.size();i++)
        {
            for(int j=0;j<key.size();j++)
                {
                    if (letters[i] == key[j])
                        {
                            letters.erase(i,1);
                        }

                }

        }
    key.append(letters);//in here we add The rest of the list of letters
    //original letters : abcdefghijklmnopqrstuvwxyz

    // input key :cairo

    //key:cairobdefghjklmnpqstuvwxyz
    transform(text_decipher.begin(),text_decipher.end(),text_decipher.begin(),::tolower);//This function to covert text cipher from upper to lower

    for (int i=0;i<text_decipher.size();i++)
        {
            for (int j=0;j<key.size();j++)
                {
                    if (text_decipher[i] == original_letters[j])//if letter of index of text cipher equal to letter of index of original letters
                        {
                            text_decipher[i]=key[j];//in this step take index(i) of original letters to key same index of original letters to come with letter of key to replace letter of text cipher
                            break;
                        }
                }
        }
    cout<<">>>>The text decipher it is : "<<endl<<text_decipher<<endl;

 }


 int main()
{
    system("cls");
    cout<<"Welcome, User"<<endl;
    //Loop to check the choice of user
    while (true)
        {
            int choice =0 ;

            cout<<endl<<endl<<"       **LIST OF CHOICES**"<<endl<<endl;
            cout<<"1)Encryption text\n"<<"2)Decryption text\n"<<"3)Exit\n"<<endl<<endl;
             if (!cin)
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            cout<<"Please, Enter the choice of list :"<<endl;
            cin>>choice ;
            if (choice == 1)
                {
                    system("cls");//To clean screen
                    cipher();

                }
            else if (choice == 2)
                {
                    system("cls");
                    decipher();

                }
            else if(choice == 3)
                {
                    cout<<"****Thank you to use this program****"<<endl;
                    break;

                }
            else
                {
                    system("cls");
                    cout<<"**Please, Enter from list**"<<endl;
                    continue;
                }



        }
}











