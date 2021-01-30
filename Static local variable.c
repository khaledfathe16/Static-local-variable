#include<Stdio.h>
 typedef int d32; //renaming standrad datatype

void func(void); // Function prototyping

void main(void){

func(); //calling function
func();
func();

}
void func(void){  //implementation function

static d32 x=0; // declaration and initializition static variable "X"
x++;            // increment the value of x
printf("X = %d\n",x); //output
}



/*****************************************************************************************************************

When we declaring the local variable as static we put it in the data segment in ram not a stack

static didnt reinitialize the value when we call the function again because this static variable not deleted like

as the stack poistion





******************************************************************************************************************/
