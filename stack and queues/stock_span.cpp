#include<iostream>
#include<stack>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
stack<int>st;
int span[n];
span[0] = 1;
st.push(0);
for (int i = 1; i < n; i++)
{
    while(st.size()>0&&arr[i]>arr[st.top()])
    st.pop();
    if(st.size()==0)
    span[i]=i+1;
    else
    span[i] = i-st.top();
    st.push(i);
}
for (int i = 0; i < n; i++)
{
    cout<<span[i]<<'\n';
}

return 0;
}