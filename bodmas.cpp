#include <iostream>
#include <stack>
#include <string>
using namespace std;
 
int main() 
{
    string input;
    cout << "Enter a postfix expression: " << endl;
    getline(cin, input);
    int operand1, operand2, result;
    stack<int>operation;
    
    int i=0;
    while (i < input.length()) 
    {
        if (isdigit(input[i])) 
        {
            operation.push(input[i]);
        } 
       
        else 
        {
          operand2 = operation.top();
          operation.pop();
          operand1 = operation.top();
          operation.pop();
          switch(input[i])
          {
                  case '+': result=operand1 + operand2;
                  operation.push(result);
                  break;
                  case '-': result=operand1 - operand2;
                  operation.push(result);
                  
                  break;
                  case '*': result=operand1 * operand2;
                  operation.push(result);
                  
                  break;
                  case '/': result=operand1 / operand2;
                  operation.push(result);
                  
                  break;   
        }
          
        }
        i++;
    }
    
    while (!operation.empty()) 
    {
        cout << operation.top();
        operation.pop();
    }
      
  
    cout << "The result is: "<<result<<endl;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return 0;
}
 