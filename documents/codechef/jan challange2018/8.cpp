




#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
#define RANGE 255
using namespace std;


/**void countSort(char arr[])
{
    // The output character array that will have sorted arr
    char output[strlen(arr)];
    int pos[strlen(arr)];
    int temp[strlen(arr)];
    for(int i=0;i<strlen(arr);i++){pos[i]=i+1;}
    for(int i=0;i<strlen(arr);i++){cout<<pos[i]<<" ";}
cout<<endl;
    // Create a count array to store count of inidividul
    // characters and initialize count array as 0
    int count[RANGE + 1], i;
    memset(count, 0, sizeof(count));

    // Store count of each character
    for(i = 0; arr[i]; ++i)
        ++count[arr[i]];

    // Change count[i] so that count[i] now contains actual
    // position of this character in output array
    for (i = 1; i <= RANGE; ++i)
        count[i] += count[i-1];

    // Build the output character array
    for (i = 0; arr[i]; ++i)
    {
        output[count[arr[i]]-1] = arr[i];
        temp[count[arr[i]]-1]=pos[i];--temp[arr[i]];
        --count[arr[i]];
    }

    // Copy the output array to arr, so that arr now
    // contains sorted characters
    for (i = 0; arr[i]; ++i){
        arr[i] = output[i];
        pos[i]=temp[i];}

        for(int i=0;i<strlen(arr);i++){cout<<pos[i]<<" ";}
cout<<endl;
}
*/

// Driver program to test above function
/**int main()
{
    char arr[] = "geeksforgeeks";//"applepp";

    countSort(arr);

    printf("Sorted character array is %sn", arr);
    return 0;
}
*/
int main()
{
    string str;
    cin>>str;
    //char chh[str.length()+1];
    //strcpy(chh, str.c_str());
   // countSort(chh);
   // str=chh;

   // cout<<str;
int length=(str.length()*(str.length()+1))/2;
    string hstr[length];
    int k=0;
  //  cout<<"99 before "<<" length=  "<<length<<"   ";
    for(long long i=0;i<str.length();i++) {  //  cout<<"  98  first loop i= "<<i<<"       ";
            for(long long j=1;(j+i)<=str.length();j++){   // cout<<"97   second loop j= "<<j<<" ";
                    string gg="";
                    gg.append(str, i, j);//cout<<"   append complete  k=  "<<k<<"   ";
                    hstr[k]=gg;k++;//cout<<"   move complete    ";
                  //  cout<<"  ok  ";
            }}
  //  cout<<"100  end of both loop";
  //           for(int i=0; i<length; ++i)
  //  {
  //     cout<<hstr[i];
   // }

string temp;

            for(int i=0; i<length-1; ++i)
        for(int j=i+1; j<length ; ++j)
        {
            if(hstr[i].compare(hstr[j])>0)
            {
                temp= hstr[i];
                hstr[i]=hstr[j];
                hstr[j]=temp;
            }
        }


        string finals="";
             for(int i=0; i<length; ++i)
    {
       finals+=hstr[i];
    }
cout<<finals;
    long long q;
    cin>>q;
     long long g=0;
    while(q--){
        long long p,m,k,ack;
        cin>>p>>m;
       k=(p*g)%m+1;
       char c=finals[k-1];
       int ascii=int(c);
       ack=ascii;
        g+=ack;
        cout<<c<<endl;
    }
return 0;}



































/**#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;

    while(1){
    cin>>str;
    string hstr="";
    for(long long i=0;i<str.length();i++) {
            for(long long j=1;(j+i)<=str.length();j++){hstr.append(str, i, j);}}
            long long sum=0,hsl2=0;
            long long hsl=hstr.length();
            for(long long i=1;i<=200000;i++){
                sum=(i)*(200000-i+1);
              //  cout<<sum<<endl;
                hsl2+=sum;
            }
cout << "Size of long int : " << sizeof(long int) << endl;
//cout<<hstr<<endl;
            cout<<"   "<<hsl2<<"   "<<hsl<<"   ";
            if(hsl2==hsl){cout<<"yes"<<endl;}
            else{cout<<"no"<<endl;}
            cout<<"   "<<(122*hsl2);

    }
    long long q;
    cin>>q;
     long long g=0;
    while(q--){
        long long p,m,lp;
        cin>>p>>m;
      long long  k=(p*g)%m+1;
       cout<<k<<"   ";
   //    char c=hstr[k-1];
   //int vv=int(c);
  // lp=vv;
    //    g+=lp;cout<<c<<"    "<<g-int(c)<<"  ";
    //   cout<<c<<endl;
    }
return 0;}


*/




























/**

#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string hstr="";

    string temp="";
    for(long long i=0;i<str.length();i++){          temp+=str[i];
                                          if(i!=str.length()-1){
                                          temp.append(str, 0, i+1);}

                                }
                              //  cout<<temp<<endl;
                              //  hstr+=temp;

                            /**    for(long long i=0;i<str.length();i++){
                                    char ch=str[i];
                                    temp.erase(std::remove(temp.begin(), temp.end(), ch), temp.end());
                                    hstr+=temp;

                                }
                                */
                      /**          for(long long i=0;i<str.length();i++){
                                        long long j=i,w=i;
                                    for(long long m=i;m<str.length();m++){
                                        hstr[j+w]+=str[i];j+=w;w++;
                                    }
                                }
                                */

                            //    cout<<hstr<<" new string is "<<endl;

/**
    for(long long i=0;i<str.length();i++) {
            for(long long j=1;(j+i)<=str.length();j++){
                                          //hstr+=str[j];

                                          hstr.append(str, i, j);

                                        }
    }


                                      // cout<<hstr<<endl;
    long long q;
    cin>>q;
     long long g=0;
    while(q--){
        long long p,m;
        cin>>p>>m;
        long long k;
       //cout<<"before p= "<<p<<" g= "<<g<<" m= "<<m<<endl;
       k=(p*g)%m+1;



       char c=hstr[k-1];
        g+=int(c);
       // cout<<"after p= "<<p<<" g= "<<g<<" m= "<<m<<" k= "<<k<<endl;

        cout<<c<<endl;



    }

return 0;}


*/

