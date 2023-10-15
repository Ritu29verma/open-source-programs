#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){               //square
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"* ";
}
cout<< endl;
}}
  void pattern2(int n){              //right angle triangle
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
            }
    cout<<endl;
    }}
    void pattern3(int n){            //right angle triangle with nos in increasing order
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< j ;
            }
    cout<<endl;
    }}
      void pattern4(int n){           //right angle triangle with nos in repeated manner
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<< i ;
            }
    cout<<endl;
    }}
        void pattern5(int n){         // inverted right angle triangle
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<< "* " ;
            }
    cout<<endl;
    }}
          void pattern6(int n){        // inverted right angle triangle with nos in increasing order
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<< j ;
            }
    cout<<endl;
    }}
            void pattern7(int n){      // triangle
    for(int i=0;i < n;i++){
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
            }
              for(int j=0;j<2*i+1;j++){
            cout<<"*";
            }
              for(int j=0;j<n-i-1;j++){
            cout<<" ";
            }
    cout<<endl;
    }}
              void pattern8(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=2*i+1;j++){
            cout<< " " ;
            }
              for(int j=1;j<=n-i+1;j++){
            cout<< "*" ;
            }
              for(int j=1;j<=2*i+1;j++){
            cout<< " " ;
            }
    cout<<endl;
    }}
                void pattern9(int n){     // inverted triangle
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
            }
              for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
            }
              for(int j=0;j<i;j++){
            cout<<" ";
            }
    cout<<endl;
    }}
                  void pattern10(int N){   //diamond
           for (int i = 0; i < N; i++){
        for (int j =0; j<N-i-1; j++){
            cout <<" ";}
        for(int j=0;j< 2*i+1;j++){
            cout<<"*";}
         for (int j =0; j<N-i-1; j++){
            cout <<" ";}
     cout << endl;
    }
      for (int i = 0; i < N; i++){
     for (int j =0; j<i; j++){
            cout <<" ";}
for(int j=0;j< 2*N -(2*i +1);j++){
cout<<"*";}
for (int j =0; j<i; j++){
            cout <<" ";}
        cout << endl;
    }}
void pattern11(int n){                      // half diamond
     for(int i=0;i <=2*n-1;i++){
            int stars=i;
     if(i>n) stars=2*n-i;
        for(int j=1; j<=stars;j++){
            cout<<"*";}
    cout<<endl;
    }}
  void pattern12(int n){                 //  Binary Number Triangle Pattern
         int start=1;
       for(int i=0;i<n;i++){
          if(i%2==0) start= 1;
          else start= 0;
          for(int j=0;j<=i;j++){
            cout<< start;
          start=1-start;}
          cout<<endl;
    }}
    void pattern13(int n){                 // Number Crown Pattern
       int space=2*(n-1);
        for(int i=1;i<=n;i++){
              for (int j =1; j<=i; j++){
            cout <<j;}
        for(int j=1;j<=space;j++){
            cout<<" ";}
         for (int j =i; j>=1 ;j--){
            cout <<j;}
            cout<<endl;
            space -=2;
        }
    }
      void pattern14(int n){               //Increasing Number Triangle Pattern
          int num=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<num<<" ";
                num+=1 ;
            }
            cout<<endl;
        }}
         void pattern15(int n){            //Increasing Letter Triangle Pattern
         for(int i=0;i<n;i++){
            for(char ch='A';ch<='A'+i;ch++){
                cout<< ch <<" ";
            }
            cout<<endl;
         }
         }
           void pattern16(int n){          //Reverse Letter Triangle Pattern
               for(int i=0;i<=n;i++){
                for(char ch='A';ch<='A'+(n-i-1);ch++){
                    cout<<ch<< " ";
               }cout<< endl;
           }}
             void pattern17(int n){        //Alpha-Ramp Pattern
               for(int i=0;i<=n;i++){
                    char  ch='A'+i;
                   for(int j=0;j<=i;j++){
                    cout<<ch<< " ";
               }cout<< endl;
               }}
                void pattern18(int n){     //Alpha-Hill Pattern
               for(int i=0;i<n;i++){
                   for(int j=0; j<n-i-1;j++){
            cout<<" ";
            }
              char ch = 'A';
          int breakpoint = (2*i+1)/2;
          for(int j=1;j<=2*i+1;j++){

              cout<<ch;
              if(j <= breakpoint) ch++;
              else ch--;
          }
              for(int j=0;j<n-i-1;j++){
            cout<<" ";
            }
                cout<<endl;
               }}
                  void pattern19(int n){   // Alpha-Triangle Pattern
               for(int i=0;i<n;i++){
                   for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";}
            cout<<endl;
               }}
                    void pattern20(int N){  //Symmetric-Void Pattern of diamond
               int iniS = 0;
      for(int i=0;i< N;i++){

          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }

          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }

          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
            iniS+=2;
               cout<<endl;
      }
       iniS = 2*N -2;
      for(int i=1;i<=N;i++){

          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }

          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }

          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }

          // The spaces decrease by 2 every time we hit a new row.
          iniS-=2;
          cout<< endl;}}
void pattern21(int n){                      //Symmetric-Butterfly Pattern
       int spaces = 2*n -2;
    for (int i=1;i<=2*n -1;i++){
           int stars=i;
     if(i>n) stars=2*n-i;
        for(int j=1; j<=stars;j++){
            cout<<"*";}
        for(int j=1; j<=spaces;j++){
            cout<<" ";}
        for(int j=1; j<=stars;j++){
            cout<<"*";}
    cout<<endl;
    if(i<n) spaces -= 2;
    else spaces += 2;
    }}
  void pattern22(int n){                    //Hollow Rectangle Pattern
      for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
           if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
            else cout<<" ";
        }
        cout<< endl;
      }}
    void pattern23(int n){                   //The Number Pattern
          for(int i=0;i<2*n-1;i++){
                   for(int j=0;j<2*n-1;j++){
            int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
            cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
          }
          cout<< endl;
 }}
      void pattern24(int n){                //Hollow diamond Pattern
  for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" " ;}
            for(int j=1;j<=2*i-1;j++){
                    if(j==1 || j==2*i-1) cout<<"*";
            else cout<<" " ;}
    cout<< endl;}
    for( int i=n-1;i>0;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";}
           for(int j=1;j<=2*i-1;j++){
                    if(j==1 || j==2*i-1) cout<<"*";
            else cout<<" " ;}
     cout<<endl ; }}
int main()
{
    int n=5;
    pattern1(n);
    return 0;
}
