#include <iostream>
using namespace std;
int maxstack;
struct stack
{
    int data[50];
    int count;
};
stack a;
void inisialisasi(stack *s){
    s->count=0;
}
void push(int nilai, stack *s)
{
    // if(s->count==maxstack){
    //     cout<<"penuh";
    // }
    // else{
    //     s->data[s->count]=nilai;
    //     ++(s->count);
    // }
    if((s->count)<maxstack)
    {s->data[s->count]=1;
    ++(s->count);
    push(nilai+s->data[s->count-1], &a);
    }
}
void cetak(stack *s){
    for(int i=0;i<maxstack;i++){
        cout<<s->data[i]<<"\n";
    }
}
void pop(stack *s, int *terambil){
    if(s->count==0)
    {
        cout<<"kosong";
    }
    else
    {
        --(s->count);
        *terambil=s->data[s->count];
        s->data[s->count]=0;
    }
}
int main()
{
    cin>>maxstack;
    a.count=0;
    inisialisasi(&a);
    push(1, &a);
    cetak(&a);
}