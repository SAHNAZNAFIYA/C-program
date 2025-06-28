/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


// 1 to 5
int print(int n){
    if(n==0){
        return 5;
    }else{
        print(n-1);
        printf("%d",n);
    }
}
    int main()
    {
        print(5);
        return 0;
    }



