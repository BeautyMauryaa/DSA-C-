//operator is basically the operation which we do perform on the operands(values);
//1.arthimatic operators(the mathematical operations)
 //in this/ and % is called modulsoperator 
 // use case of % is - rotating the array, finding remainder
//2. Relational(==, !=, >) - <Used in sorting and searching comparisons.
//3.Logical(&& ||, !)-Combining multiple conditions in if statements.
// 4.Bitwise(&, |, ^, ~, <<, >>)-Used for "Bit Manipulation" problems (highly optimized).

#include<iostream>
using namespace std;
int main(){
    int a=10,b=20;
    cout<<"The sum of a and b is: "<<a+b<<endl;
    cout<<"The difference of a and b is: "<<a-b<<endl;
    cout<<"The product of a and b is: "<<a*b<<endl;
    cout<<"The quotient of a and b is: "<<a/b<<endl;
    cout<<"The remainder of a and b is: "<<a%b<<endl;

    //relational operators
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;

    //logical operators
    cout<<"The value of a&&b is: "<<(a&&b)<<endl;
    cout<<"The value of a||b is: "<<(a||b)<<endl;
    cout<<"The value of !a is: "<<(!a)<<endl;

    //conditional operators
    int c=5;
    if(c==5){
        cout<<"The value of c is 5"<<endl;
    }
    else{
        cout<<"The value of c is not 5"<<endl;
    }


    //ternary operator
    int d=10;
    int e=20;
    int max=(d>e)?d:e;
    cout<<"The maximum of d and e is: "<<max<<endl;


    //bitwise operators
    int f=5;
    int g=10;
    cout<<"The value of f&g is: "<<(f&g)<<endl;
    cout<<"The value of f|g is: "<<(f|g)<<endl;
    return 0;
}

//2.condittional operator:control the flow in dsa we often use them to prune the unnecessary calculations.
//if and if-else(standard decision making)
//switch(faster than multiple if-elses for menu driven programs)
//ternary(one line decision making)(?:)


//3.loops: used to iterate over a block of code multiple times.
//for loop(when you know number of iterations)
//while loop(used when termination cndition is dynamic);
//do-while loop(do will be executed once even if the condition is false);
//nested loops(loops inside loops);



