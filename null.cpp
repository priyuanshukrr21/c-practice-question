#include<iostream>
using namespace std;


int getlength(char arr[])
{
    int count = 0;
    int index = 0;
    while(arr[index] != '\0')
    {
        count++;
        index++;
    }
    return count;
}
void concatarray(char a[], char b[]){
int aindex = getlength(a);
int bindex = 0;
}

int main() 
{

    char a[50] = "love";
    char b[50] = "priyanshu";
    concatarray(a,b);
}