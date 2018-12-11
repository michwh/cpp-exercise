#include "golf.h"

using namespace std;

int main(){
  int n = 5;
  golf g[n];

  for(int i = 0; i < n;i++) {
    if(!setgolf(g[i])){
      break;
    }
  }

  for(int i=0;i<n;i++){
    showgolf(g[i])
  }
  return 0;
}