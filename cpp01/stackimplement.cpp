// C++ program to reverse a string
// using stack

#include<iostream>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
using namespace std;
/// to reverse a string 
// int main(){
//   string st;
//   getline(cin,st);
//   for(int i=st.length();i>=0;i--){
//     cout<<st[i];
//   }
// }

//to merge two stacks
// int main(){
//     stack<int> st1;
//     stack<int> st2;
//     st1.push(1);
//     st1.push(2);
//     st2.push(3);
//     st2.push(4);
//     while(!st1.empty()){
//         st2.push(st1.top());
//         st1.pop();
//     }
//     if(st1.empty()){
//         cout<<"empty";
//     }
//     cout<<st2.top();
// }


//reverse a number using stack
// CPP program to reverse the number
// using a stack


// Stack to maintain order of digits
stack<int> st;

// Function to push digits into stack
void push_digits(int number)
{
	while (number != 0)
	{
		st.push(number % 10);
		number = number / 10;
	}
}

// Function to reverse the number
int reverse_number(int number)
{
	// Function call to push number's
	// digits to stack
	push_digits(number);
	
	int reverse = 0;
	int i = 1;
	
	// Popping the digits and forming
	// the reversed number
	while (!st.empty())
	{
		reverse = reverse + (st.top() * i);
		st.pop();
		i = i * 10;
	}
	
	// Return the reversed number formed
	return reverse;
}

// Driver program to test above function
int main()
{
	int number;
    cin>>number;
	
	// Function call to reverse number
	cout << reverse_number(number);
	
	return 0;
}




// to reverse the words of a sentence
// void reverseWords(string str)
// {
//   stack<char> st;

//   for (int i = 0; i < str.length(); i++) {
//     if (str[i] != ' ')
//       st.push(str[i]);


//     else {
//       while (!st.empty()) {
//         cout << st.top();
//         st.pop();
//       }
//       cout << " ";
//     }
//   }

  while (!st.empty()) {
    cout << st.top();
    st.pop();
  }
// }

// int main()
// {
//   string str;
//   getline(cin,str);
//   reverseWords(str);
// }


/// implementation of stack using linkedlist
// struct stackll{
//   int data;
//   struct stackll *next;

// };
// struct stackll *top;

// void push(int d){
//   struct stackll *newnode=new stackll();
//   newnode->data=d;
//   newnode->next=top;
//   top=newnode;
// }
// void pop(){
//   struct stackll *temp=top;
//   if(top==NULL){
//     cout<<"stack undeflow";
//   }
//   else{
//     while(top!=NULL){
//       cout<<top->data;
//       top=top->next;

//     }
//   }
// }
// void display(){
//   if(top==NULL){
//     cout<<"stack is empty";
//   }
//   else{
//     do{
//       cout<<top->data;
//       top=top->next;
//     }
//     while(top!=NULL);
//   }
// }
// int main(){
//   push(2);
//   push(1);
//   push(3);
//   push(4);
//   push(5);
//   push(6);
//   pop();
//   pop();
//   display();
// }



// reverse a sentence using linkedlist

// using namespace std;

// queue<int> ip;
// queue<int> input(){
//     int n;
    
//     while(true){
//         cin>>n;
//         if(n==-1) break;
//         ip.push(n);

//     }
//     return ip;
// }

// reverse a string using stack
// int main(){
//     stack<char> stk;
//     string s;
//     getline(cin,s);
//     for(int i=0;i<s.length();i++){
//         stk.push(s[i]);
//     }

//     while(!stk.empty()){
//         cout<<stk.top();
//         stk.pop();
//     }
// }
// while(!ip.empty()){
//     stk.push(ip.front());
//     ip.pop();
// }
// while(!stk.empty()){
//     ip.push(stk.top());
//     stk.pop();
// }
// while(!ip.empty()){
//     cout<<ip.front();
//     ip.pop();
// }

// Function to reverse a sentence using a stack
// string reverseSentence(string sentence) {
//     stack<string> wordStack;
//     stringstream ss(sentence);
//     string word, reversedSentence;

//     // Split the sentence into words and push them onto the stack
//     while (ss >> word) {
//         wordStack.push(word);
//     }

//     // Pop words from the stack and concatenate them to form the reversed sentence
//     while (!wordStack.empty()) {
//         reversedSentence += wordStack.top() + " ";
//         wordStack.pop();
//     }

//     // Remove the trailing space
//     if (!reversedSentence.empty()) {
//         reversedSentence.pop_back();
//     }

//     return reversedSentence;
// }

// int main() {
//     string inputSentence;
    
//     cout << "Enter a sentence: ";
//     getline(cin, inputSentence);

//     string reversedSentence = reverseSentence(inputSentence);

//     cout << "Reversed sentence: " << reversedSentence << endl;

//}//