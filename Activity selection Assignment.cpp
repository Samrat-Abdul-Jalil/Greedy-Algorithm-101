#include<bits/stdc++.h>
using namespace std;
void Course_Selection(struct job Job[],int n);
bool compare(job i,job j);


struct course{
int start ;
int finish;

};
struct plan{
int start ;
int finish;

};
bool compare(course i,course j){
return i.finish<j.finish;

}

void Course_Selection(struct course Course[],struct plan Plan[],int n,int i){
int numberOFJob=0;
for(int j=0;j<n;j++){

    if(Course[j].start>=Plan[i].start &&Course[j].finish<=Plan[i].finish )
    {
        numberOFJob++;
        Plan[i].start=Course[j].finish;
    }
}
printf("%d\n",numberOFJob);
}






int main(){
int N,Q;
 scanf("%d",&N);
  scanf("%d",&Q);
  struct course Course[N];
 struct plan Plan[Q];

  for(int i=0;i<N;i++){

    scanf("%d",&Course[i].start);
    scanf("%d",&Course[i].finish);

}
  for(int i=0;i<Q;i++){

    scanf("%d",&Plan[i].start);
    scanf("%d",&Plan[i].finish);


}
  for(int i=0;i<Q;i++){

       Course_Selection(Course, Plan,N,i);

}

return 0;
}
