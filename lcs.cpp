#include <iostream>
using namespace std;
void print(int** symbolarr, string a, int i, int j){
  if(i==0||j==0){
    return ;
  }

  if(symbolarr[i][j]==1){
    print(symbolarr, a, i-1, j-1);
    cout << a[j-1];
  }else if(symbolarr[i][j]==2){
    print(symbolarr, a, i-1, j);
  }else {
    print(symbolarr, a, i, j-1);
  }
}
void printcount(int** countarr, string a, string b){
  for(int i=0;i<b.length()+1;i++){
    for(int j=0;j<a.length()+1;j++){
      cout << countarr[i][j] << " ";
    }
    cout << endl;
  }
}
void printsymbol(int** symbolarr, string a, string b){
  for(int i=0;i<b.length()+1;i++){
    for(int j=0;j<a.length()+1;j++){
      if(symbolarr[i][j]==1){
        cout << "↖" << " ";
      }else if(symbolarr[i][j]==2){
        cout << "↑" << " ";
      }else if (symbolarr[i][j]==0){
        cout << "0" << " ";
      }else{
        cout << "←" << " ";
      }
    }
    cout << endl;
  }
}
void Count(int** countarr, int** symbolarr, string a, string b){
  for(int i=0;i<b.length()+1;i++){
    countarr[i][0]=0;
  }
  for(int j=0;j<a.length()+1;j++){
    countarr[0][j]=0;
  }

  for(int i=1;i<b.length()+1;i++){
    for(int j=1;j<a.length()+1;j++){
      if(a[j-1]==b[i-1]){
        countarr[i][j]=countarr[i-1][j-1]+1;
        symbolarr[i][j]=1;//1 == diagonal
      }else if(countarr[i-1][j]>=countarr[i][j-1]){
        countarr[i][j]=countarr[i-1][j];
        symbolarr[i][j]=2;// 2 == top
      }else{
        countarr[i][j]=countarr[i][j-1];
        symbolarr[i][j]=3;// 3 == left
      }
    }
  }
}
int main(){
  string a;
  cout << "Enter the first string: ";
  cin >> a;

  string b;
  cout << "Enter the second string: ";
  cin >> b;


  int** countarr=new int*[a.length()+1];
  int** symbolarr=new int*[a.length()+1];

  for(int i=0;i<a.length()+1;i++){
    countarr[i]=new int[b.length()+1];
    symbolarr[i]=new int[b.length()+1];
  }

  Count(countarr, symbolarr, a, b);
  printcount(countarr, a, b);
  cout << endl;
  printsymbol(symbolarr,a,b);
  cout << endl;
  print(symbolarr, a, b.length(), a.length());
  cout << endl;
  return 0;
}