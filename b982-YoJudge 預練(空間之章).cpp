#include<iostream>
#include<sstream>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
string s;
while(cin>>s)
{
bool f=false;
for(int i=0;i<s.length();i++)
{
if(s[i]=='.'||s[i]==' ') continue;
if(!f)
{
if(s[i]<'0'||s[i]>'9') s.insert(s.begin()+i,' '),i++,f=1;
}
else
{
if(s[i]>='0'&&s[i]<='9') s.insert(s.begin()+i,' '),i++,f=0;
}
//cout<<f<<endl;

}
stringstream ss(s);
long long int time=0;s.clear();
double d;
while(ss>>d>>s)
{
if(s=="gb"||s=="g") time+=(d*1000000000*8);
else if(s=="m"||s=="mb") time+=(d*8*1000000);
else if(s=="k"||s=="kb") time+=(d*1000*8);
else if(s=="byte")
{
if(d!=(int)d) time+=(int)d*8+(d-(int)d)*10;
else time+=d*8;
}
else time+=d;
}
cout<<time<<endl;
}
}
