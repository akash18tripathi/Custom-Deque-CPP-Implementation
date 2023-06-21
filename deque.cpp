#include <iostream>

using namespace std;

//=========================== ** DEQUE CLASS ** ===================================

template <typename T>
class Deque{
    public:
    T* arr;
    int capacity,head,tail,maxSize;

    //Constructor
    Deque(){
        head=-1;
        tail=-1;
        capacity=0;
        arr = new T[2];
        maxSize=2;
    }
    void deque(){
        head=-1;
        tail=-1;
        capacity=0;
        arr = new T[2];
        maxSize=2;
    }
    void deque(int n,T x){
        head=0;
        tail=n-1;
        capacity=n;
        arr = new T[n];
        maxSize=n;
        for(int i=0;i<n;i++){
            this->arr[i]=x;
        }
    }

    //Increase Size of Deque
    void increaseSize(int s){
        T* temp = new T[s];
        int j=0;
        int i=head;
        for(int count=0;count<maxSize;count++){
            temp[j++]=arr[i];
            i=(i+1)%maxSize;
        }
        head=0;
        tail=j-1;
        maxSize=s;
        delete[]this->arr;
        this->arr = temp;
        
    }

    //inserts element at last
    void push_back(T x){
        if((tail+1)%maxSize==head){
            increaseSize(2*maxSize);
        }
        if(head==-1){
            head=0;
            tail=0;
        }else{
            tail=(tail+1)%maxSize;
        }
        arr[tail]=x;
        this->capacity++;
        
    }

    //Removes last element
    void pop_back(){
        if(this->capacity==0){
            cout << "UnderFlow!!"<<endl;
            return;
        }
        this->capacity--;
        if(this->tail==0){
            this->tail=maxSize-1;
        }else{
            this->tail--;
        }
    }

    //Inserts element at front
    void push_front(T x){
        int tempHead;
        if(head==0){
            tempHead=maxSize-1;
        }else{
            tempHead=head-1;
        }
        if(tempHead==tail){
            increaseSize(2*maxSize);
            head=maxSize-1;
            arr[head]=x;
        }else{
            this->arr[tempHead]=x;
            head=tempHead;
        }
        this->capacity++;
    }

    //Removes element from front
    void pop_front(){
        if(this->capacity==0){
            cout << "Underflow!!"<<endl;
            return;
        }
        this->capacity--;
        head= (head+1)%maxSize;
    }

    //Returns front element
    T front(){
        if(this->capacity==0){
            T df = T();
            return df;
        }
        return this->arr[head];
    }

    //Returns last element
    T back(){
        if(this->capacity==0){
            T df = T();
            return df;
        }
        return this->arr[tail];
    }

    //Access element with [] operator
    T operator[](int index){
        if(index >= this->capacity){
            T df = T();
            return df;
        }
        if(head<tail){
            return this->arr[head+index];
        }
        return this->arr[(head+index)%maxSize];
    }

    //Check if Deque is empty
    bool empty(){
        if(this->capacity==0){
            return true;
        }
        return false;
    }

    //Returns size of Deque
    int size(){
        return this->capacity;
    }

    //Resizing Deque
    void resize(int n,T d){
        if(this->capacity<n){
            for(int i=this->capacity;i<n;i++){
                this->push_back(d);
            }
            
        }else{
            for(int i=this->capacity;i>n;i--){
                this->pop_back();
            }
        }
        return;
    }

    //Clearing/Emptying Deque
    void clear(){
        head=-1;
        tail=-1;
        this->capacity=0;
        arr = new T[2];
        maxSize=2;
    }

    //Display/Print all elements
    void display(){
        int index=0;
        for(int i=0;i < this->capacity;i++){
            index=(head+i)%capacity;
            cout << arr[index]<< " ";
        }
        cout << endl;
    }

};


//====================== ** DRIVER FUNCTION ** ==============================
int main(){
    Deque<int> DQ;
    int val;
    int choice;
    bool flag = true;
    int n;

    while(flag){
        cout << "---------------------------\n";
        cin >> choice;
        switch(choice){
            case 0:{
                flag= false;
                break;
            }
            case 1:{
                DQ.deque();
                break;
            }
            case 2:{
                
                cin >> n >> val;
                DQ.deque(n,val);
                break;
            }
            case 3:{
                cin >> val;
                DQ.push_back(val);
                break;
            }
            case 4:{
                DQ.pop_back();
                break;
            }
            case 5:{
                cin >> val;
                DQ.push_front(val);
                break;
            }
            case 6:{
                DQ.pop_front();
                break;
            }
            case 7:{
                cout << DQ.front() <<endl;
                break;
            }
            case 8:{
                cout << DQ.back() <<endl;
                break;
            }
            case 9:{
                cin >> val;
                cout << DQ[val]<<endl;
                break;
            }
            case 10:{
                if(DQ.empty()){
                    cout << "true\n";
                }else{
                    cout << "false\n";
                }
                break;
            }
            case 11:{
                cout << DQ.size()<<endl;
                break;
            }
            case 12:{
                cin >> n >> val;
                DQ.resize(n,val);
                break;
            }
            case 13:{
                DQ.clear();
                break;
            }
            case 14:{
                DQ.display();
                break;
            }
            default:{
                cout << "Enter correct choice\n";
            }

        }

    }

    return 0;
}