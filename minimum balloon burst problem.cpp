#include<bits/stdc++.h>
using namespace std;



struct position{
int Xstart;
int Xend;
};


bool compare(position i,position j){
return i.Xend<j.Xend;

}

void Array_Count(struct position BellonPosition[],int n){
int Arrow=1,j=0;
for(int i=1;i<n;i++){

    if(BellonPosition[i].Xstart>=BellonPosition[j].Xend){
        Arrow++;
         j=i;
        }




}
printf("%d",Arrow);





}
int main(){
 int N ;
  scanf("%d",&N);
struct position BellonPosition[N];
for(int i=0;i<N;i++){
        int n;
    scanf("%d",&n);
BellonPosition[i].Xstart=n;
  scanf("%d",&n);
BellonPosition[i].Xend=n;
}


sort(BellonPosition,BellonPosition+N,compare);
Array_Count(BellonPosition,N);









}
