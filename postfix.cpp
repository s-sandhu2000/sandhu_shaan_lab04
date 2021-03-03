#include "postfix.hpp"
#include "operators.hpp"

#include <stack>
#include <cmath>

float evalPostfix(char const* s){
    /*
    Exceptions would be thrown if:
    Token cannot be identified
    There are less than two operands on the stack when an operator is encountered
    The stack does not have exactly one operator left on it by the end of the loop 

    */
    // Trim incoming whitespace
    while(std::isspace(*s)) ++s;

    // If the string is empty, evaluate nothing.
    if(*s == '\0') return 0.0f;

    // Prep operand stack
    std::stack<float> vals;

    // Loop over the input string
    while(*s != '\0'){ //If the leading element in the char string is an operator 
       if(isOperator(str[0]))
       {
           float right = vals.top();
           vals.pop();
           float left = vals.top();
           vals.pop();
           float result = doOperator(str[0], left, right);
           vals.push(result);
       }
       else{
           if()
       }
        

        // TODO: Don't just break out of the loop!. 
        break;
    }

    // Return result
    return vals.top();
}

std::string postfixToPrefix(char const* s){
    // Trim incoming whitespace
    while(std::isspace(*s)) ++s;

    // If the string is empty, translate nothing.
    if(*s == '\0') return "";

    // Prep stack
    std::stack<std::string> stack;

    while(*s != '\0'){
        // TODO: Fill in this space with something other than this!
        stack.push("STUB!");
        break;

        // Trim whitespace before next token
        while(std::isspace(*s)) ++s;
    }

    // Return result
    return stack.top();
}
