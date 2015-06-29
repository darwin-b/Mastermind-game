#include<iostream>
#include <string>
#include <conio.h>
#include<cstdlib>
#include<cstring>
using namespace std;

int main()
{
    int i,j,k,n,m,l,c;
    char a[1000],b[1000],d[1000];
    cout<<" Player 1: choose your word : " ;
    string word ="";
    char ch;
    ch = _getch();
     /* if(ch=='\b')
        l=0;
    else
        l++;  */
    while(ch != 13)
    { //character 13 is for enter
      word.push_back(ch);
      cout << '*';
      ch = _getch();
      // if(ch=='\b')
      //   l-- ;
    }

    l= word.size();
    n=4*l;
    for(i=0;i<l;i++)
    {
        a[i]=word[i];
        d[i]=word[i];
    }
    a[i]='\0';

    cout<<endl;
    cout<<" Word size is: "<<l<<endl;
    string t ="";
    c=0;
    do
    {
        if((n-c)==0)
        {   i=1;
            while(i)
            {
                cout<<"\n\nPlayer 1: Better luck!!! next time \n"<<endl;
                cout<<"Press 0 to exit: ";
                cin>>i;
            }
                return 0;
        }
        cout<<"\n Player 2: You have "<<n-c<<" chances left "<<endl ;
        cin>>b;
        m = strlen(b);
        if(m!=l)
        {
            cout<<" sorry you haven`t entered "<<l<<" letter word "<<endl;
            continue;
        }
        cout<<b<<" - ";
        for(i=0;i<l;i++)
        {

            if(b[i]==d[i])
                {
                    cout<<"w";
                    d[i]='+';
                }
        }

        for(i=0;i<l;i++)
        {
            for(j=0;j<l;j++)
            {
                if(j!=i)
                {
                    if(b[i]==d[j])
                    {
                        cout<<"b";
                        d[j]='+';
                        break;
                    }
                }
            }
        }
        for(k=0;k<l;k++)
        {
           d[k]=a[k];
        }
        c++;

    }while((string)b!=word);
    i = 1;
    while(i)
    {
        cout<<endl<<endl;
        cout<<"Player 2: won the match with "<<n-c+1<<" chances in hand \n"<<endl ;
        cout<<"press 0 to exit: ";
        cin>>i;
    }
    return 0;
}



