#include<bits/stdc++.h>
using namespace std;

int SieveOfEratosthenes(int n)
{
	bool prime[n+1];
	int count=0;
	memset(prime, true, sizeof(prime));
	for (int p=2; p*p<=n; p++){  if (prime[p] == true){for (int i=p*2; i<=n; i += p)prime[i] = false;}}
	for (int p=2; p<=n; p++){if (prime[p]){cout<<prime[p]<<"  ";count++;}}
	//cout<<count;
	//int *arr = new int[count];

	//int i=0;
	//for (int p=2; p<=n; p++){if (prime[p]){arr[i++]=p;}}
//int 	siz=count;

	//for(i=0;i<siz;i++){cout<<arr[i]<<" ";}
	//cout<<endl<<siz;
	return count;
}
int main()
{   int n,i=0;
cin>>n;
int g = SieveOfEratosthenes( n);
cout<<endl<<g;



}




/**


#include<iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#include<bits/stdc++.h>
#define RANGE 255
using namespace std;
int main()
{
    //char cc[200002];
   // string inp="abcdefghijklmnopqrstuvwxyz";
   // for(int i=0;i<200002;i++){cc[i]=inp[i%26];}
 //for(int i=0;i<200002;i++){cout<<cc[i]<<" ";}





    string str,hstr="";
    cin>>str;
    char chh[str.length()+1];
    strcpy(chh, str.c_str());
   // countSort(chh);
   // str=chh;

    //cout<<str;
   // string hstr="";
   // for(long long i=0;i<str.length();i++) {
          //  for(long long j=1;(j+i)<=str.length();j++){hstr.append(str, i, j);}}
   // countSort(char arr[])
//{
    // The output character array that will have sorted arr
    char output[strlen(chh)];
    int pos[strlen(chh)];
    int temp[strlen(chh)];
    for(int i=0;i<strlen(chh);i++){pos[i]=i+1;}
    //for(int i=0;i<strlen(chh);i++){cout<<pos[i]<<" ";}
//cout<<endl;
    // Create a count array to store count of inidividul
    // characters and initialize count array as 0
    int count[RANGE + 1], i;
    memset(count, 0, sizeof(count));

    // Store count of each character
    for(i = 0; chh[i]; ++i)
        ++count[chh[i]];

    // Change count[i] so that count[i] now contains actual
    // position of this character in output array
    for (i = 1; i <= RANGE; ++i)
        count[i] += count[i-1];

    // Build the output character array
    for (i = 0; chh[i]; ++i)
    {
        output[count[chh[i]]-1] = chh[i];
        temp[count[chh[i]]-1]=pos[i];--temp[chh[i]];
        --count[chh[i]];
    }

    // Copy the output array to arr, so that arr now
    // contains sorted characters
  /**  for (i = 0; chh[i]; ++i){
        chh[i] = output[i];
        pos[i]=temp[i];}
        */
/**
        for(int i=0;i<strlen(chh);i++){cout<<temp[i]<<" ";}
cout<<endl;
for(int i=0;i<strlen(chh);i++){cout<<output[i]<<" ";}
cout<<endl;
for(int i=0;i<strlen(chh);i++){cout<<pos[i]<<" ";}
cout<<endl;
for(int i=0;i<strlen(chh);i++){cout<<chh[i]<<" ";}
cout<<endl;
*/
//}

/**
    long long q;
    cin>>q;
     long long g=0;
    while(q--){
        long long p,m,k,ack;
        cin>>p>>m;
       k=(p*g)%m+1;
       char c=hstr[k-1];
       int ascii=int(c);
       ack=ascii;
        g+=ack;
        cout<<c<<endl;
    }
return 0;}


*/



/**#include<bits/stdc++.h>
//#include <boost/algorithm/string.hpp>
using namespace std;
int main()
{

    string str;
   // cin>>str;
    string hstr="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<26;i++){
     char c=hstr[i];
     long long p;
     p=int(c);
     cout<<c<<"  "<<p<<endl;
     }
  //  hstr[7]='m';
    //cout<<hstr[7]<<" hhhhhhhhh ";
 //hstr.append(str, 0, 1);

                               // cout<<hstr<<endl;


   // string str="keshavkhgfkkkkkkjjkkkkkkjiykjhjgkl";

    /**string str="";
    for(int i=0;i<s.length();i++){

            str+=s[i];
            if(i!=s.length()-1){ str.append(s,i,s.length()-i);}


    }
    cout<<str;
    */



    //strOrig.replaceAll("[aeiouAEIOU]", "");//in java
   // replace (str1.begin(), str1.end(), 'k' , 'p');//   ok
//boost::erase_all(str1, "a");
//char c=str1[0];
//str1.erase(std::remove(str1.begin(), str1.end(), c), str1.end());//ok
  //  cout<<str1;


//return 0;


//}
/**
int P,G,M;
cin>>P>>G>>M;
int pii= (P*G)%M+1;
cout<<pii;
*/









/**#include<bits/stdc++.h>

using namespace std;

int val(char c){
    int res;
string str="abcdefghijklmnopqrstuvwxyz";
for(int i=0;i<26;i++){if(str[i]=='c'){res=i;break;}}
return res;
}
int main()
         {

          string str="keshav singh";
           string s="blank ";
           int value=val([s[s.length()-1]]);
           s+=str[3];
           cout<<s<<"  "<<value;
         }







*/

/**
#include<bits/stdc++.h>
using namespace std;
int main()
{    long long t;
     cin>>t;
     while(t--)
        {
            long long  x,n;
            long long  sum=0;
            cin>>x>>n;
            sum=(n*(n+1)/2)-x;

                    if(sum%2!=0 || n<=3){cout<<"impossible"<<endl;}
                    else{

                            string str="";
                            for(long long i=0;i<n;i++){str+="0";}
                            str[x-1]='2';
                            long long  var=n;
                            long long sm=0,des=sum/2;
                                                while(var>0){
                                                if(var!=x){
                                                                if(sm+var<=des){str[var-1]='1'; sm+=var;}
                                                                if(sm==des){break;}
                                                                 }
                                                        var--;
                                                    }

                             long long p=str.length(),eq=0,eq1=0;

                            for(long long i=0;i<p;i++){if(str[i]=='1'){eq+=i+1;}}
                            for(long long i=0;i<p;i++){if(str[i]=='0'){eq1+=i+1;}}
                            if(des==eq && des==eq1){}
                            else{str="impossible";}
                               cout<<str<<endl;
                        }


        }
    return 0;
}




*/

















/**

#include<bits/stdc++.h>
using namespace std;
int main()
{    int t;
     cin>>t;
     while(t--)
        {
            long long  x,n;
            long long int  sum=0;
            cin>>x>>n;
            sum=(n*(n+1)/2)-x;
            cout<<" sum= "<<sum<<endl;
                    if(sum%2!=0 || n<=3){cout<<"impossible"<<endl;}
                    else{
                           // FILE *fp;
                   // fp=fopen("f1.txt","w");
                   ofstream fout,ff;
                   fout.open("f1.txt");
                                      ff.open("f2.txt");
                            string str="";
                            for(int i=0;i<n;i++){str+="0";}
                            str[x-1]='2';
                            long long  var=n;//cout<<var;
                            int count=0;
                            long long sm=0,des=sum/2;
                            cout<<" sum= "<<sum<<" sum/2 = "<<sum/2;
                            cout<<"sm= "<<sm<<" dec= "<<des<<"  var= "<<var;
                                        while(var>0){
                                               // cout<<" loop entered";
                                                if(var!=x){
                                                        //if(count<100){cout<<"L";count++;}
                                                                if(sm+var<=des){str[var-1]='1'; sm+=var;string ss="/";ff<<var;ff<<ss;}
                                                                if(sm==des){break;}
                                                                 }
                                                        var--;
                                                    }
                            //fputs(str,fp);
                            //fwrite(&str,sizeof(str),1,fp);//compile sucessfully
                             // fprintf(fp,"ans is %s ",str);
                          /// string  ss1="\n";
                            // fout<<ss1;
                             fout<<str;
                             fout.close();
                             ff.close();
                           // fclose(fp);
                           // cout<<str<<endl;

                             long long p=str.length(),eq=0;
                             while(str[p-1]=='1' || str[p-1]=='2'){if(str[p-1]=='1'){eq+=p;}
                                                                    p--;}
                            for(int i=0;i<p;i++){if(str[i]=='1'){eq+=i+1;}}
                            if(des==eq){cout<<"yes"<<endl;}
                            else{cout<<"no"<<endl;}
                        }


        }
    return 0;
}




*/

























/**

#include<bits/stdc++.h>
using namespace std;
int main()
{    int t;
     cin>>t;
     while(t--)
        {
            long long int x,n;
            long long sum=0;
            cin>>x>>n;
            sum=(n*(n+1)/2)-x;
                    if(sum%2!=0 || n<=3){cout<<"impossible"<<endl;}
                    else{
                            string str="";
                            for(int i=0;i<n;i++){str+="0";}
                            str[x-1]='2';
                            int  var=n;
                            long long sm=0,des=sum/2;
                                        while(var>0){  if(var!=x){
                                                                if(sm+var<=des){str[var-1]='1'; sm+=var;}
                                                                if(sm==des){break;}
                                                                 }
                                                        var--;
                                                    }
                            cout<<str<<endl;
                        }
        }
    return 0;
}

*/
