//Pointer is a variable that instead of holding a value it stores a memory address.
#include <bits/stdc++.h>

int main(){

    int x = 10;
    int *pX = &x;
    //Now pX will hold memory address of x, thus it will be pointing to that memory address.
    //We can now interact with that memory address using pointer instead of variable directly.
    std::cout<<pX<<"<- This will be the address, and this the value -> "<<*pX<<std::endl;
    return 0;
}