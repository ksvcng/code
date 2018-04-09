string decodeMessage(string input1)
{
	 vector<string> table;//10270201020303030033010
	 int n=input1.length();
	 int i,count=0,j,flag=0;
	 string s,ans="";
     table.push_back("NULL");
	 for(i=1;i<27;i++){s=96+i;table.push_back(s);}
    if(input1[0]=='0' || input1[n-1]!='0'){ans= "invalid";}
else{
     vector<string> arr;
     string tmp="";
     input1+='-1';
     for(i=0;i<n;i++){  if(input1[i]=='0' && input1[i+1]!='0'){arr.push_back(tmp);tmp="";}
                        else{ tmp+=input1[i];}
                     }
     tmp="";
     vector<int > arri;
     for(i=0;i<arr.size();i++){stringstream alpha(arr[i]);int x=0;alpha>>x;arri.push_back(x);}
     for(i=0;i<(arr.size()-1);i++){
            if(flag==0){
                if(arri[i]<table.size()){
                               ans+=table[arri[i]];
                               if(arri[i+1]<table.size()){tmp=table[arri[i]]+table[arri[i+1]][0];table.push_back(tmp);tmp="";}
                               else if (arri[i+1]=table.size()){tmp=table[arri[i]]+table[arri[i]][0];table.push_back(tmp);tmp="";}
                               else if(arri[i+1]>table.size()){flag=1;ans="invalid";break;}
                               }
                else{flag=1;ans="invalid";}
                        }
                                    }
     if(flag==0){
                if(arri[arr.size()-1]<table.size()){ans+=table[arri[arr.size()-1]];}
                    else{ans="invalid";}
                }
     }
     return ans;
}
