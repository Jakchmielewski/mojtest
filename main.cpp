#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
 int wysokosc,w=0,i=1,z=0;
 cout<<"Podaj wysokosc choinki:";
 cin>>wysokosc;
 w=wysokosc;
for(int w=1;w<wysokosc;w++)
{
    for(i=1;i<wysokosc-w;i++)
    {
        cout<<" ";
    }

    for(z=0;z<w*2-1;z++)
    {
        cout<<"*";
    }
    cout<<endl;
}
for(int x=1;x<wysokosc-1;x++){
    cout<<" ";

}
cout<<"*";


    return 0;
}
