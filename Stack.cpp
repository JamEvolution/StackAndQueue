#include <iostream>

using namespace std;

 int stack[10], arraySize=10, top=-1;
 //Default deðeri 0 verir geri kalan listeyinin elemaný

 void push(int value){
	if(top>=arraySize){
		cout<<"Stack is overflow"<<endl;
	}else{
		top++;
		stack[top] = value;
	}

 }

 void pop(){
	if(top<=-1){
		cout<<"Stack Underflow"<<endl;
	} else {
		cout<<"Popped in the Stack of element: "<<stack[top]<<endl;
		--top;
	}
	
  }

 void display(){
 	cout<<"Stack elements are: ";
 	if(top>=0){
	 
	for(int i=top; i>=0; i--){
		cout<<stack[i]<<" ";
	}
	cout<<endl;
	}else{
		cout<<"Stack is emtpty";
	}
	
 }


 int main() {
	
	int x, value;
	cout<<"1) Push in Stack"<<endl;
	cout<<"2) Pop from Stack"<<endl;
	cout<<"3) Display Stack"<<endl;
	cout<<"4) Exit"<<endl;
	
	do{
		cout<<"Enter the choice: "<<endl;
		cin>>x;
		switch(x){
			case 1:{
				cout<<"Enter value to be pushed:"<<endl;
				cin>>value;
				push(value);
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				cout<<"Exit the program"<<endl;
				break;
			}
			default:{
				cout<<"Invalide choise"<<endl;
				break;
			}
		
		}
			
	}while(x!=4);
	return 0;
	

}
