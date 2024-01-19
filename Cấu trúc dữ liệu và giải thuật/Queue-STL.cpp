#include <iostream>
#include <queue>
using namespace std;
int main(void){
	queue <int> q;
	for(int i=1; i<=10; i++){
		q.push(i*10);
	}
	cout<<"Kich co hang doi:"<<q.size()<<endl;
	cout<<"Phan tu dau tien:"<<q.front()<<endl;
	cout<<"Phan tu cuoi cung:"<<q.back()<<endl;
	cout<<"Trang thai hang doi:"<<q.empty()<<endl;
	cout<<"Thao tac pop:";
	while(!q.empty()){
		int t = q.front();cout<<t<<" ";
		q.pop();
	}
}
