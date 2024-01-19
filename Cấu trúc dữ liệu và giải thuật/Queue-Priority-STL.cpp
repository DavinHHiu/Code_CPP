/*
 * C++ Program to Implement Priority_queue in Stl
 */
#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    int choice, item;
    do{
        cout<<"\n---------------------"<<endl;
        cout<<"XAY DUNG QUEUE PRIORUTY BANG STL"<<endl;
        cout<<"\n---------------------"<<endl;
        cout<<"1.Them phan tu vao hang doi uu tien"<<endl;
        cout<<"2.Loai phan tu khoi hang doi uu tien"<<endl;
		cout<<"3.Kich co hang doi uu tien"<<endl;
        cout<<"4.Phan tu dau hang doi uu tien"<<endl;
		cout<<"5.Trang thai hang doi uu tien"<<endl;        
        cout<<"0.Thoat"<<endl;
        cout<<"Dua vao lua chon: ";cin>>choice;
        switch(choice){
        	case 1:
            	 cout<<"Phan tu can them: ";cin>>item;
            	 pq.push(item); break;
       		case 2:            	 
            	 if (!pq.empty()){
                 	item = pq.top();pq.pop();
                	cout<<"Phan tu "<<item<<" da bi loai"<<endl;
            	 }
            	 else{
                 	 cout<<"Hang doi uu tien rong"<<endl;
            	 }
            	 break;
      		case 3:
            	 cout<<"Kich co hang doi uu tien: "<<pq.size()<<endl;
            	 break;
     		case 4:
     			if(!pq.empty())
            	    cout<<"Phan tu dau tien : "<<pq.top()<<endl;
                 break;
	 		case 5:
 			    cout<<"Trang thai hang doi: "<<pq.empty()<<endl;	 			
            	break;
	 		default:
	 			break;
     	}
    }while(choice!=0);
}
