#include <iostream>
#include <cstring>
using namespace std;

const int Len = 40;
struct golf{
    char fullname[Len];
    int handicap;
};

// non-interactive version
void setgolf(golf & g, const char * name, int hc){
  strcpy(g.fullname, name);
  g.handicap = hc;
}

// interactive version
int setgolf(golf & g){
  cout<<"请输入fullname：";
  cin.getline(g.fullname, Len);
  if(g.fullname[0]){
    cout<<"请输入handicap：";
    cin>>g.handicap;
    return 1;
  }
  return 0;
}

// function resets handicap to new value
void handicap(golf & g, int hc){
  g.handicap = hc;
}

// function to displays contents of golf structure
void showgolf(const golf & g){
  cout<<"fullname:"<<g.fullname<<endl;
  cout<<"handicap:"<<g.handicap<<endl;
}